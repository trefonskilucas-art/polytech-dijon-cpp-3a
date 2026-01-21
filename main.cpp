#include <iostream>
#include "materiel.h"
#include "salle.h"

int main()
{
    materiel m1("Ordinateur fixe","poste de travail", "Windows", 16);
    
    if (m1.isvalid()) {
        std::cout << "Materiel valide" << std::endl;
    } else {
        std::cout << "Materiel invalide" << std::endl;
    }
    
    if (m1.specificationtypeint() == 0){
        std::cout << "Materiel: " << m1.nom() << ", Type: " << m1.type() <<  ", systeme d'exploitation : "  << m1.specificationtypestr() <<  std::endl;
    }
    else if (m1.specificationtypestr() == " "){
        std::cout << "Materiel: " << m1.nom() << ", Type: " << m1.type()  << " et  ecran de taille : " << m1.specificationtypeint()  << std::endl;
    }
    else if (m1.specificationtypestr() == " " && m1.specificationtypeint() == 0 ){
        std::cout << "Materiel: " << m1.nom() << ", Type: " << m1.type()  << std::endl;
    }
    else {
        std::cout << "Materiel: " << m1.nom() << ", Type: " << m1.type() <<  ", systeme d'exploitation : "  << m1.specificationtypestr() << " et  ecran de taille : " << m1.specificationtypeint()  << std::endl;
    }
    
    return 0;
}

