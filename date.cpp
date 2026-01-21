#include "date.h"
#include <iostream>


// Constructeur avec notre date 
Date::Date(int jour, int mois, int annee) : _jour(jour), _mois(mois), _annee(annee) {
    if (!isValid()) { 
        std::cout << "Erreur date ! Mise par defaut au 01/01/2000" << std::endl;
        _jour = 1; _mois = 1; _annee = 2000;
    }
}
 
// verification de la conformité de la date 
bool Date::isValid() const {
    if (_mois < 1 || _mois > 12) return false;
    if (_jour < 1 || _jour > 31) return false;
    return true;
}

// Les Getters 
int Date::jour() const { return _jour; }
int Date::mois() const { return _mois; }
int Date::annee() const { return _annee; }