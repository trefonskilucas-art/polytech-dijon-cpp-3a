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
    if (_type == "salle de cours" or _type == "salle informatique" or _type == "salle technique") return false;
    
    return true;
    
}

//getter 

std::string salle::nom() const {return  _nom;}
std::string salle::type() const {return  _type;}

// on ajoute a la liste des salles le noms des salles existante 

void salle::addsalle(std::string nom){
    _listesalles.push_back(nom);
}