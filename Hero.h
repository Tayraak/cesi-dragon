#pragma once
#include <iostream>
#include <string>
#include "Creature.h"
#include "Entite.h"

class Hero : public Entite
{
public:

    void init(std::string nom, int pv, int attaque);
    void affichageHero();
    void attaquer(Creature& cible);
    void utiliserPotion();

};

