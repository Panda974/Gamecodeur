/*
 *  Scene_Egypt_Mazeentry.h
 *  enigma
 *
 *  Created by MEKERSA David on 24/11/10.
 *  Copyright 2010 Casual Games France. All rights reserved.
 *
 */

#ifndef  _ENIGMA_SCENEEGYPTMAZEENTRY_H
#define  _ENIGMA_SCENEEGYPTMAZEENTRY_H

#include "EScene.h"
#include "KPTK.h"
#include "KSound.h"

class Scene_Egypt_Mazeentry: public EScene {
public:
   Scene_Egypt_Mazeentry(ESceneDirector *lpSceneDirector);
   ~Scene_Egypt_Mazeentry();
   
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