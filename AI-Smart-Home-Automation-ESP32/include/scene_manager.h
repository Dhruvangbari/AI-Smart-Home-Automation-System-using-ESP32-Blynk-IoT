#ifndef SCENE_MANAGER_H
#define SCENE_MANAGER_H

enum SceneId {
  SCENE_AUTO = 0,
  SCENE_NIGHT,
  SCENE_AWAY,
  SCENE_COMFORT
};

void initScenes();
void setAutoMode(int enabled);
void setSceneById(int id);
void applySceneOutputs();
const char* currentSceneName();

extern int outLight;
extern int outFan;
extern int outExhaust;
extern int outAux;

#endif
