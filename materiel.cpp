#include "materiel.h"
#include <iostream>


// constructeur 
materiel::materiel (std::string nom, std::string type, std::string specificationtypestr, int specificationtypeint, std::string emplacementmateriel) : _nom(nom), _type(type), _specificationtypestr(specificationtypestr), _specificationtypeint(specificationtypeint), _emplacementmateriel(emplacementmateriel){
    if (!isvalid()){
        std::cout << "erreur de type, mise a defaut en tant que materiel a type inconnu ou la specification n est pas valide" << std::endl;
        _type = "inconnu";
    }

}

// Verfication
bool materiel::isvalid () const {
    if (_type == "poste de travail" or _type == "petit materiel" or _type == "ecran" or _type == "connectique" or _type == "materiel reseau" or _type == "materiel specifique") return false;
    if (_type == "poste de travail " && (_specificationtypestr != "linux" or _specificationtypestr != "Windows" or _specificationtypestr != "mac" or _specificationtypestr != "autre")) return false;
    if (_type == "ecran" && (_specificationtypeint < 10 || _specificationtypeint > 50)) return false;
    
    return true;
    
}

std::string materiel::emplacement(std::string nom,std::string emplacementmateriel){
    

    
    _listeemplacementmateriel.push_back(emplacementmateriel);
    return emplacementmateriel;
}





std::string materiel::verif() const {
    if (_type == "poste de travail " && (_specificationtypestr != "linux" or _specificationtypestr != "Windows" or _specificationtypestr != "mac" or _specificationtypestr != "autre")) {
    specificationtypestr() = " ";
        return specificationtypestr();
    }
    return "";
}

int materiel::verifint() const {
    if (_type == "ecran" && (_specificationtypeint < 10 || _specificationtypeint > 50)){
    int specificationtypeint() = 0;
    }
        return specificationtypeint();
    }

//getter 

std::string materiel::nom() const {return  _nom;}
std::string materiel::type() const {return  _type;}
std::string materiel::specificationtypestr() const {return  _specificationtypestr;}
int materiel::specificationtypeint() const {return  _specificationtypeint;}
std::string materiel::emplacementmateriel() const {return  _emplacementmateriel;}
