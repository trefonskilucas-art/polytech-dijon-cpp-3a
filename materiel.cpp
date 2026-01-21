#include "materiel.h"
#include "salle.h"
#include <iostream>


// constructeur 
materiel::materiel (std::string nom, std::string type, std::string specificationtypestr, int specificationtypeint, std::string emplacementmateriel) : _nom(nom), _type(type), _specificationtypestr(specificationtypestr), _specificationtypeint(specificationtypeint){
    if (!isvalid()){
        std::cout << "erreur de type, mise a defaut en tant que materiel a type inconnu ou la specification n est pas valide" << std::endl;
        _type = "inconnu";
    }

}

// Verfication des types de données
bool materiel::isvalid () const {
    if (_type == "poste de travail" or _type == "petit materiel" or _type == "ecran" or _type == "connectique" or _type == "materiel reseau" or _type == "materiel specifique") return false;
    if (_type == "poste de travail " && (_specificationtypestr != "linux" or _specificationtypestr != "Windows" or _specificationtypestr != "mac" or _specificationtypestr != "autre")) return false;
    if (_type == "ecran" && (_specificationtypeint < 10 || _specificationtypeint > 50)) return false;
    
    return true;
    
}
// on regarde si le materiel est dans une salle sinon on le met dans l'inventaire 

std::string materiel::emplacement(std::string nom,std::string emplacementmateriel,  std::vector<std::string> _listesalles){
    for (int i = 0; i < _listesalles.size(); i++){
        if (emplacementmateriel == _listesalles[i]){
            std::cout << "il est dans la salle"<< _listesalles[i] << std::endl;
        }
        else {
            _inventaire.push_back(emplacementmateriel);
        }
    }
    return "";
}



// on verifie si le poste de travail a bien comme systeme d'exploitation linux, windows, mac ou un autre

std::string materiel::verif() const {
    if (_type == "poste de travail " && (_specificationtypestr != "linux" or _specificationtypestr != "Windows" or _specificationtypestr != "mac" or _specificationtypestr != "autre")) {
    specificationtypestr() = " ";
        return specificationtypestr();
    }
    return "";
}

// on verifie que la taille de l'ecran soit coherente 

int materiel::verifint() const {
    if (_type == "ecran" && (_specificationtypeint < 10 || _specificationtypeint > 50)){
    int specificationtypeint = 0;
    }
        return specificationtypeint();
    }

//getter 

std::string materiel::nom() const {return  _nom;}
std::string materiel::type() const {return  _type;}
std::string materiel::specificationtypestr() const {return  _specificationtypestr;}
int materiel::specificationtypeint() const {return  _specificationtypeint;}
std::string materiel::emplacementmateriel() const {return  _emplacementmateriel;}
