//
//  heroSetup.c
//  BH Simulator
//
//  Created by Cesar Salad Jaimes on 01/06/2017.
//  Copyright © 2017 Cesar Salad Jaimes. All rights reserved.
//

#include "BHSimulator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
 
 extern Hero hero[5];

void encon(int i) {
    
    hero[i].power = 477;
    
    hero[i].stamina = 206;
    
    hero[i].agility = 477;
    
    hero[i].sp = 4; // no need to change this variable
    
    hero[i].critchance = 17; // input crit chance
    
    hero[i].critdamage = 1.5; // if you have +50% crit damage, input 1.5
    
    hero[i].DSchance = 1.5; // input Dual strik chance
    
    hero[i].block = 0; // input block chance
    
    hero[i].evade = 2.5; // input evade chance
    
    hero[i].deflect = 0; // input delfect chance
    
    hero[i].powerrune = 1.07; // if you have 5% damage runes, imput 1.05
    
    hero[i].agirune = 1; // if you have 10% speed runes, input 1.1
    
    strcpy (hero[i].pet, "nelson"); //For now I only have gemmi and nelson so put either
    
    hero[i].alive = true; // no need to change this value
    
    
    
}

void hai(int i){
    
    hero[i].power = 364;
    
    hero[i].stamina = 200;
    
    hero[i].agility = 414;
    
    hero[i].sp = 4; // no need to change this variable
    
    hero[i].critchance = 10; // input crit chance
    
    hero[i].critdamage = 1.5; // if you have +50% crit damage, input 1.5
    
    hero[i].DSchance = 14; // input Dual strik chance
    
    hero[i].block = 0; // input block chance
    
    hero[i].evade = 2.5; // input evade chance
    
    hero[i].deflect = 0; // input delfect chance
    
    hero[i].powerrune = 1.075; // if you have 5% damage runes, imput 1.05
    
    hero[i].agirune = 1; // if you have 10% speed runes, input 1.1
    
    strcpy (hero[i].pet, "gemmi"); //For now I only have gemmi and nelson so put either
    
    hero[i].alive = true; // no need to change this value
    
}

void xionix (int i){
    
    hero[i].power = 477;
    
    hero[i].stamina = 499;
    
    hero[i].agility = 112;
    
    hero[i].sp = 4; // no need to change this variable
    
    hero[i].critchance = 10; // input crit chance
    
    hero[i].critdamage = 1.5; // if you have +50% crit damage, input 1.5
    
    hero[i].DSchance = 0; // input Dual strik chance
    
    hero[i].block = 38; // input block chance
    
    hero[i].evade = 6.5; // input evade chance
    
    hero[i].deflect = 0; // input delfect chance
    
    hero[i].powerrune = 1; // if you have 5% damage runes, imput 1.05
    
    hero[i].agirune = 1; // if you have 10% speed runes, input 1.1
    
    strcpy (hero[i].pet, "nelson"); //For now I only have gemmi and nelson so put either
    
    hero[i].alive = true; // no need to change this value

}

void rikkiG (int i){
    
    hero[i].power = 427;
    
    hero[i].stamina = 165;
    
    hero[i].agility = 368;
    
    hero[i].sp = 4; // no need to change this variable
    
    hero[i].critchance = 25; // input crit chance
    
    hero[i].critdamage = 2; // if you have +50% crit damage, input 1.5
    
    hero[i].DSchance = 2.5; // input Dual strik chance
    
    hero[i].block = 0; // input block chance
    
    hero[i].evade = 2.5; // input evade chance
    
    hero[i].deflect = 0; // input delfect chance
    
    hero[i].powerrune = 1.025; // if you have 5% damage runes, imput 1.05
    
    hero[i].agirune = 1; // if you have 10% speed runes, input 1.1
    
    strcpy (hero[i].pet, "gemmi"); //For now I only have gemmi and nelson so put either
    
    hero[i].alive = true; // no need to change this value
}

void iamJosh (int i) {
    
    hero[i].power = 600;
    
    hero[i].stamina = 383;
    
    hero[i].agility = 200;
    
    hero[i].sp = 4; // no need to change this variable
    
    hero[i].critchance = 10; // input crit chance
    
    hero[i].critdamage = 1.5; // if you have +50% crit damage, input 1.5
    
    hero[i].DSchance = 0; // input Dual strik chance
    
    hero[i].block = 39; // input block chance
    
    hero[i].evade = 2.5; // input evade chance
    
    hero[i].deflect = 0; // input delfect chance
    
    hero[i].powerrune = 1.04; // if you have 5% damage runes, imput 1.05
    
    hero[i].agirune = 1; // if you have 10% speed runes, input 1.1
    
    strcpy (hero[i].pet, "nelson"); //For now I only have gemmi and nelson so put either
    
    hero[i].alive = true; // no need to change this value

}

void byleth (int i) {
    
    hero[i].power = 407;
    
    hero[i].stamina = 550;
    
    hero[i].agility = 250;
    
    hero[i].sp = 4; // no need to change this variable
    
    hero[i].critchance = 10; // input crit chance
    
    hero[i].critdamage = 1.5; // if you have +50% crit damage, input 1.5
    
    hero[i].DSchance = 2.5; // input Dual strik chance
    
    hero[i].block = 27; // input block chance
    
    hero[i].evade = 17; // input evade chance
    
    hero[i].deflect = 5; // input deflect chance
    
    hero[i].powerrune = 1; // if you have 5% damage runes, imput 1.05
    
    hero[i].agirune = 1; // if you have 10% speed runes, input 1.1
    
    strcpy (hero[i].pet, "gemmi"); //For now I only have gemmi and nelson so put either
    
    hero[i].alive = true; // no need to change this value

}

void casper (int i) {
    
    hero[i].power = 550;
    
    hero[i].stamina = 190;
    
    hero[i].agility = 450;
    
    hero[i].sp = 4; // no need to change this variable
    
    hero[i].critchance = 40; // input crit chance
    
    hero[i].critdamage = 1.5; // if you have +50% crit damage, input 1.5
    
    hero[i].DSchance = 4; // input Dual strik chance
    
    hero[i].block = 0; // input block chance
    
    hero[i].evade = 2.5; // input evade chance
    
    hero[i].deflect = 0; // input delfect chance
    
    hero[i].powerrune = 1.06; // if you have 5% damage runes, imput 1.05
    
    hero[i].agirune = 1; // if you have 10% speed runes, input 1.1
    
    strcpy (hero[i].pet, "gemmi"); //For now I only have gemmi and nelson so put either
    
    hero[i].alive = true; // no need to change this value
}

void shadown (int i) {
    
    hero[i].power = 580;
    
    hero[i].stamina = 185;
    
    hero[i].agility = 450;
    
    hero[i].sp = 4; // no need to change this variable
    
    hero[i].critchance = 15; // input crit chance
    
    hero[i].critdamage = 1.5; // if you have +50% crit damage, input 1.5
    
    hero[i].DSchance = 15; // input Dual strik chance
    
    hero[i].block = 0; // input block chance
    
    hero[i].evade = 2.5; // input evade chance
    
    hero[i].deflect = 0; // input delfect chance
    
    hero[i].powerrune = 1.175; // if you have 5% damage runes, imput 1.05
    
    hero[i].agirune = 1; // if you have 10% speed runes, input 1.1
    
    strcpy (hero[i].pet, "gemmi"); //For now I only have gemmi and nelson so put either
    
    hero[i].alive = true; // no need to change this value
}