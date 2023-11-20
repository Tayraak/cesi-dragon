#include "Hero.h"

using namespace std;

void Hero::init(string nom, int pv, int attaque) {
    this->nom = nom;
    this->pv = pv;
    this->attaque = attaque;
}

void Hero::affichageHero() {
    cout << "Les pv du hero sont : " << pv << endl;
    cout << "L'attaque du hero est : " << attaque << endl;
}

void Hero::attaquer(Creature& cible) {
    cout << nom << " attaque " << cible.nom << " !" << endl;
    cible.pv -= attaque;
    cout << "Il reste " << cible.pv << " points de vie a " << cible.nom << "." << endl;
}


void Hero::utiliserPotion() {
    cout << nom << " utilise une potion et recupere 5 points de vie !" << endl;
    pv += 5;
    cout << "Les pv de " << nom << " sont maintenant a " << pv << "." << endl;
}



