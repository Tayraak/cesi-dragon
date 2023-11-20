#pragma once
#include "Entite.h"

class Mage : public Entite
{
public:
	int mana;

	void regenmana(int mana);
	void ultime(int mana);
};


