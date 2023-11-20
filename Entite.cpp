#include "Entite.h"

void Entite::attaquer(Entite& cible) {
	cout << nom << " attaque " << cible.nom << " !" << endl;
	cible.pv -= attaque;
	cout << "Il reste " << cible.pv << " points de vie a " << cible.nom << "." << endl;
}