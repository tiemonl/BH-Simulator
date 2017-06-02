//
//  BHSimulator.h
//  BH Simulator
//
//  Created by Cesar Salad Jaimes on 20/04/2017.
//  Copyright © 2017 Cesar Salad Jaimes. All rights reserved.
//

#ifndef BHSimulator_h
#define BHSimulator_h

#include <stdbool.h>
#pragma once
struct HeroStruct;

typedef struct HeroStruct {
    int power;
    int stamina;
    int agility;
    int hp;
    int maxhp;
    int sp;
    float hpPerc;
    float tr;
    float interval;
    float counter;
    int critchance;
    int DSchance;
    float critdamage;
    int block;
    int evade;
    int deflect;
    float powerrune;
    float agirune;
    char pet [10];
    bool alive;
    char name [20];
    
} Hero;
//Hero hero[5];


#endif /* BHSimulator_h */



