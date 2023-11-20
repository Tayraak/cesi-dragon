#include "Creature.h"
#include "Hero.h"
#include <random>

using namespace std;

void Creature::init(string nom, int pv, int attaque) {
	this->nom = nom;
	this->pv = pv;
	this->attaque = attaque;
}

void Creature::affichageCreature() {

	cout << "Les pv du " << nom << " sont : " << pv << std::endl;
	cout << "L'attaque du " << nom << " est : " << attaque << std::endl;
}
