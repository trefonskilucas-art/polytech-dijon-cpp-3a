#include <iostream>
#include "materiel.h"
#include "salle.h"

int main()              // programme principal
{
    materiel m1("Ordinateur fixe","poste de travail", "Windows", 16, "Salle informatique 101");
    
    if (m1.isvalid()) {                     // verification de la validite du materiel et savoir si on affiche ses caracteristiques et lesquelles 
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

