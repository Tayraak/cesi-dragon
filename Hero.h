#pragma once
#include <iostream>
#include <string>
#include "Creature.h"

class Hero
{
public:
    std::string nom;
    int pv;
    int attaque;

    void init(std::string nom, int pv, int attaque);
    void affichageHero();
    void attaquer(Creature& cible);
    void utiliserPotion();

};

