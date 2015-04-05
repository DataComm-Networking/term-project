#ifndef MINIBOSS_H
#define MINIBOSS_H
/********************************************************************************
**	SOURCE FILE:	MiniBoss.h -  		Header file for The Mini boss npc class.
**										Contains function prototypes
**
**	PROGRAM:	Term_Project
**
**	DATE: 		February 15, 2015
**
**
**	DESIGNER: 	Filip Gutica A00781910
**
**	PROGRAMMER: Filip Gutica A00781910
**
***********************************************************************************/
#include "GateKeeper.h"

class MiniBoss : public GateKeeper
{
	public:
		MiniBoss(SGO &sprite,
			Marx::Map* map,
			float x,
			float y,
			Marx::Controller* ctrl,
			float h,
			float w) : GateKeeper(sprite, map, x, y, ctrl, h, w);

		~MiniBoss();

		void updateNPC();
		void detectPlayers();
		void enterCombat();
		void leaveCombat();
		bool inCombatRange();
		void setRange(int r);
		void setHealth(int h);
		void setAttack(int a);
		void setAttackSpeed(int as);
		void setMovementSPed(int ms);
		void setTarget(/*Player*/);
		void setCooldown(/*Timer*/);
		void getRange();
		void getHealth();
		void getAttack();
		void getAttackSpeed();
		void getMovementSpeed();
		void getTarget();
		void getCooldown();



};
#ENDIF
