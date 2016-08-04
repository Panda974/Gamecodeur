/*
 *  Scene_Inca_Stairs.h
 *  enigma
 *
 *  Created by Rockford on 04/11/10.
 *  Copyright 2010 Casual Games France. All rights reserved.
 *
 */

#ifndef  _ENIGMA_SCENEINCASTAIRS_H
#define  _ENIGMA_SCENEINCASTAIRS_H

#include "EScene.h"
#include "KPTK.h"
#include "KSound.h"

class Scene_Inca_Stairs : public EScene {
public:
   Scene_Inca_Stairs(ESceneDirector *lpSceneDirector);
   ~Scene_Inca_Stairs();
   
   void Init ();
   void Close ();
   
   /** 3 steps rendering **/
   void Check ();
   void Logic ();
   void Draw ();
   
   bool ObjectClicked(const char *szObjectName, float x, float y);
   bool ObjectOver(char *szObjectName, float x, float y);
   bool ItemUsed(const char *szItemName, const char *szObjectName);
   void MiniGameDone(const char *szGameName, bool bIsRevolved);
   
   bool IsNeedIHM()
   {
      return true;
   }
private:
   KGraphic *_lpBgGraphic;
   KSound *_lpSoundLight;
   void TestTaskArtefacts();
   
protected:
   bool  _bLight;
   
};

#endif