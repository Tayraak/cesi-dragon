#pragma once

#include <string>
#include <iostream>

using namespace std;

class Entite
{
public:
	std::string nom;
	int pv;
	int attaque;

	void attaquer(Entite& cible);
};