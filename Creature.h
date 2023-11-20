#pragma once
#include <string>
#include <iostream>

class Hero;

class Creature
{
public:
    std::string nom;
    int pv;
    int attaque;

    void init(std::string nom, int pv, int attaque);

    void affichageCreature();

    void attaquer(Hero& cible);
};

