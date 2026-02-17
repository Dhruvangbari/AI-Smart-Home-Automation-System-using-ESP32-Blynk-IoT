#define BLYNK_PRINT Serial
#include <Arduino.h>
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>

#include "config.h"
#include "sensor_logic.h"
#include "scene_manager.h"
#include "relay_control.h"
#include "wifi_manager.h"

DHT dht(DHT_PIN, DHT_TYPE);
BlynkTimer timer;

float t=0, h=0;
int air=0;

void publishState(){
  Blynk.virtualWrite(V0, t);
  Blynk.virtualWrite(V1, h);
  Blynk.virtualWrite(V2, air);
  Blynk.virtualWrite(V3, currentSceneName());
}

void controlLoop(){
  t = dht.readTemperature();
  h = dht.readHumidity();
  air = analogRead(MQ135_PIN);

  evaluateSmartRules(t, h, air);
  applySceneOutputs();
  publishState();
}

BLYNK_WRITE(V10){ setAutoMode(param.asInt()); }
BLYNK_WRITE(V20){ setSceneById(param.asInt()); applySceneOutputs(); }

BLYNK_CONNECTED(){
  Blynk.syncVirtual(V10, V20);
}

void setup(){
  Serial.begin(115200);
  dht.begin();
  pinMode(MQ135_PIN, INPUT);

  initRelays();
  initScenes();
  connectWiFiAndBlynk();

  timer.setInterval(3000L, controlLoop);
}

void loop(){
  Blynk.run();
  timer.run();
  maintainConnection();
}
