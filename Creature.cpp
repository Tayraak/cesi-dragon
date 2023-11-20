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

void Creature::attaquer(Hero& cible) {
	int max = 2;
	int min = 1;

	std::random_device r;
	std::default_random_engine e1(r());
	std::uniform_int_distribution<int> uniform_dist(1, 2);
	int chanceAttaque = uniform_dist(e1);

	if (chanceAttaque == 1) {
		cout << nom << " attaque " << cible.nom << " !" << endl;
		cible.pv -= attaque;
		cout << "Il reste " << cible.pv << " points de vie a " << cible.nom << "." << endl;
	}
	else {
		cout << "Le dragon rate son attaque." << endl;
	}
}