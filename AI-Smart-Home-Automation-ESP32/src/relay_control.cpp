#include <Arduino.h>
#include "config.h"
#include "relay_control.h"

static const int RELAYS[4] = {RELAY_LIGHT, RELAY_FAN, RELAY_EXHAUST, RELAY_AUX};

void initRelays(){
  for(int i=0;i<4;i++){
    pinMode(RELAYS[i], OUTPUT);
    digitalWrite(RELAYS[i], LOW);
  }
}

void setRelay(int idx, int state){
  if(idx<0 || idx>3) return;
  digitalWrite(RELAYS[idx], state ? HIGH : LOW);
}
