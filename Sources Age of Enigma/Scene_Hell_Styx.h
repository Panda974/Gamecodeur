/*
 *  Scene_Hell_Styx.h
 *  enigma
 *
 *  Created by Rockford on 05/11/10.
 *  Copyright 2010 Casual Games France. All rights reserved.
 *
 */

#ifndef  _ENIGMA_SCENEHELLSTYX_H
#define  _ENIGMA_SCENEHELLSTYX_H

#include "EScene.h"
#include "KPTK.h"
#include "KSound.h"

class Scene_Hell_Styx : public EScene {
public:
   Scene_Hell_Styx(ESceneDirector *lpSceneDirector);
   ~Scene_Hell_Styx();
   
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
   
protected:
   
};

#endif