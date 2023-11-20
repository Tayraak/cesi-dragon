#pragma once
#include <string>
#include <iostream>
#include "Entite.h"

class Hero;

class Creature : public Entite
{
public:
 

    void init(std::string nom, int pv, int attaque);

    void affichageCreature();

};

