#include "config.h"
#include "scene_manager.h"
#include "relay_control.h"

void evaluateSmartRules(float t, float h, int air){
  if(currentSceneName()[0] == 'A'){ // AUTO
    outLight = 1;
    outFan = (t > TEMP_HOT) ? 1 : 0;
    outExhaust = (air > AIR_BAD) ? 1 : 0;
    outAux = (h > HUMID_HIGH) ? 1 : 0;
  }

  setRelay(0, outLight);
  setRelay(1, outFan);
  setRelay(2, outExhaust);
  setRelay(3, outAux);
}
