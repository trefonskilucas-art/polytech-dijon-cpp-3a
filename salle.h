#ifndef SALLE_H
#define SALLE_H
#include <string>
#include <vector>


class salle {
private:
    std::string _nom ;              //creation des attributs noms et type 
    std::string _type;
    std::vector<std::string> _listesalles;                // liste des salles existantes en vecteur car on ne sait pas combien il y en aura
public :
    salle (std::string  nom, std::string type );

    std::string nom() const;                                // les getters de nos noms et types de salles 
    std::string type() const;

    bool isvalid()const;                 // methode de verification des types de salles 

    void addsalle(std::string nom);         // methode pour ajouter une salle a la liste des salles existantes
};

#endif