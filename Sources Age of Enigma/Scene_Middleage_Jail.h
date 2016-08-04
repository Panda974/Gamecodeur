/*
 *  Scene_Middleage_Jail.h
 *  enigma
 *
 *  Created by Rockford on 06/10/10.
 *  Copyright 2010 Casual Games France. All rights reserved.
 *
 */

#ifndef  _ENIGMA_SCENEMIDDLEAGEJAIL_H
#define  _ENIGMA_SCENEMIDDLEAGEJAIL_H

#include "EScene.h"
#include "KPTK.h"
#include "KSound.h"

class Scene_Middleage_Jail : public EScene {
public:
   Scene_Middleage_Jail(ESceneDirector *lpSceneDirector);
   ~Scene_Middleage_Jail();
   
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
   KSound *_lpSoundDesign;
   
protected:
   
};

#endif