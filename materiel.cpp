#include "materiel.h"
#include <iostream>

materiel::materiel (std::string nom, std::string type) : _nom(nom), _type(type){
    if (!isvalid()){
        std::cout << "erreur de type, mise a defaut en tant que materiel a type inconnu" << std::endl;
        _
    }

}