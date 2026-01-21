#include "salle.h"
#include <iostream>


// constructeur 
salle::salle (std::string nom, std::string type) : _nom(nom), _type(type){
    if (!isvalid()){
        std::cout << "erreur de type, mise a defaut en tant que salle a type inconnu" << std::endl;
        _type = "inconnu";
    }

}

// Verfication
bool salle::isvalid () const {
    if (_type == "poste de travail" or "petit materiel" or "ecran" or "connectique" or "materiel reseau" or "materiel specifique") return false;
    
    return true;
    
}

//getter 

std::string salle::nom() const {return  _nom;}
std::string salle::type() const {return  _type;}
