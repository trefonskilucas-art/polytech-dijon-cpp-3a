#include "materiel.h"
#include <iostream>


// constructeur 
materiel::materiel (std::string nom, std::string type) : _nom(nom), _type(type){
    if (!isvalid()){
        std::cout << "erreur de type, mise a defaut en tant que materiel a type inconnu" << std::endl;
        _type = "inconnu";
    }

}

// Verfication
bool materiel::isvalid () const {
    if (_type == "poste de travail" or _type == "petit materiel" or _type == "ecran" or _type == "connectique" or _type == "materiel reseau" or _type == "materiel specifique") return false;
    
    return true;
    
}

//getter 

std::string materiel::nom() const {return  _nom;}
std::string materiel::type() const {return  _type;}


