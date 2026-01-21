#include "materiel.h"
#include <iostream>

materiel::materiel (std::string nom, std::string type) : _nom(nom), _type(type){
    if (!isvalid()){
        std::cout << "erreur de type, mise a defaut en tant que materiel a type inconnu" << std::endl;
        _type = "inconnu";
    }

}

bool materiel::isvalid () const {
    if (_type == "poste de travail" or "petit materiel" or "ecran" or "connectique" or "materiel reseau" or "materiel specifique") return false;
    
    return true;
    
}