#include "scene_manager.h"

int outLight=0;
int outFan=0;
int outExhaust=0;
int outAux=0;

static int autoMode = 1;
static SceneId current = SCENE_AUTO;

void initScenes(){
  current = SCENE_AUTO;
}

void setAutoMode(int enabled){
  autoMode = enabled ? 1 : 0;
  if(!autoMode && current == SCENE_AUTO){
    current = SCENE_COMFORT;
  } else if(autoMode){
    current = SCENE_AUTO;
  }
}

void setSceneById(int id){
  if(id < 0 || id > 3) return;
  current = (SceneId)id;
}

const char* currentSceneName(){
  switch(current){
    case SCENE_AUTO: return "AUTO";
    case SCENE_NIGHT: return "NIGHT";
    case SCENE_AWAY: return "AWAY";
    default: return "COMFORT";
  }
}

void applySceneOutputs(){
  if(current == SCENE_NIGHT){
    outLight=0; outFan=1; outExhaust=0; outAux=0;
  } else if(current == SCENE_AWAY){
    outLight=0; outFan=0; outExhaust=0; outAux=0;
  } else if(current == SCENE_COMFORT){
    if(outFan==0) outFan=1;
  }
}
