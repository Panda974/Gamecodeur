/*
 *  Vignette_Inca_Statuette.h
 *  enigma
 *
 *  Created by Rockford on 15/11/10.
 *  Copyright 2010 Casual Games France. All rights reserved.
 *
 */

#ifndef  _ENIGMA_VIGNETTE_INCASTAT_H
#define  _ENIGMA_VIGNETTE_INCASTAT_H

#include "EScene.h"
#include "KPTK.h"
#include "KSound.h"

class Vignette_Inca_Statuette : public EScene {
public:
   Vignette_Inca_Statuette(ESceneDirector *lpSceneDirector);
   ~Vignette_Inca_Statuette();
   
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
   
protected:
   
};

#endif