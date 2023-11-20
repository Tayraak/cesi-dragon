// TestCesiDragon2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Creature.h"
#include "Hero.h"

using namespace std;

int main()
{
    Creature dragon;
    dragon.init("dragon", 10, 3);

    cout << endl;

    Hero gab;
    gab.init("Gab", 5, 2);

    cout << endl;

    while (dragon.pv > 0 && gab.pv > 0) {
		cout << endl;
		dragon.affichageCreature();
		cout << endl;
		gab.affichageHero();
		cout << endl;
        
        cout << "1.Attaquer   2.Utiliser une potion" << endl;
        int choix;
        cin >> choix;
        if (choix == 2) {

            gab.utiliserPotion();
        }
        else {
            dragon.attaquer(gab);
            cout << endl;
            gab.attaquer(dragon);
            cout << endl;
        }

        if (dragon.pv <= 0 && gab.pv <= 0) {
            cout << endl;
            cout << "Les deux sont morts" << endl;
            break;
        }
        if (gab.pv <= 0) {
            cout << endl;
            cout << "Le dragon gagne" << endl;
            break;
        }
        if (dragon.pv <= 0) {
            cout << endl;
            cout << "Le hero gagne" << endl;
            break;
        }
    }
}
