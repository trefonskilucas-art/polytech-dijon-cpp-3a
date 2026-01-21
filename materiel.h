#ifndef MATERIEL_H
#define MATERIEL_H
#include <string>
#include <vector>


class materiel {
private:
    std::string _nom ;                              //creation des attributs noms, type, specifications et emplacement du materiel
    std::string _type;
    std::string _specificationtypestr;
    int _specificationtypeint;
    std::string _emplacementmateriel;
    std::vector<std::string> _inventaire;


public :                                              // constructeur de la classe materiel
    materiel (std::string  nom, std::string type, std::string _specificationtypestr, int _specificationtypeint, std::string _emplacementmateriel );
    std ::string emplacement(std::string nom,std::string emplacementmateriel,  std::vector<std::string> _listesalles);
                                                    //ici on va verifié l'emplacement du materiel pour pouvoir le gérer (dans l'inventaire ou dans une salle)

// getters
    std::string nom() const;
    std::string type() const;
    std::string specificationtypestr() const;
    int specificationtypeint() const;
    std::string emplacementmateriel() const;

    bool isvalid()const;              // methode de verification des types de materiels
    std::string verif()const;           // methode de verification des systemes d'exploitation
    int verifint() const ;          // methode de verification de la taille des ecrans
    
};

#endif