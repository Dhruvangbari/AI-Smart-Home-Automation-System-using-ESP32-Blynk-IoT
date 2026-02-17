#ifndef CONFIG_H
#define CONFIG_H

char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

#define DHT_PIN 4
#define DHT_TYPE DHT11
#define MQ135_PIN 34

#define RELAY_LIGHT 26
#define RELAY_FAN 27
#define RELAY_EXHAUST 14
#define RELAY_AUX 12

#define TEMP_HOT 30
#define HUMID_HIGH 70
#define AIR_BAD 2200

#endif
