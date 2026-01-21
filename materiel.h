#ifndef MATERIEL_H
#define MATERIEL_H
#include <string>
#include <vector>


class materiel {
private:
    std::string _nom ;
    std::string _type;
    std::string _specificationtypestr;
    int _specificationtypeint;
    std::string _emplacementmateriel;
    std::vector<std::string> _inventaire;


public :
    materiel (std::string  nom, std::string type, std::string _specificationtypestr, int _specificationtypeint, std::string _emplacementmateriel );
    std ::string emplacement(std::string nom,std::string emplacementmateriel,  std::vector<std::string> _listesalles);

    std::string nom() const;
    std::string type() const;
    std::string specificationtypestr() const;
    int specificationtypeint() const;
    std::string emplacementmateriel() const;

    bool isvalid()const;
    std::string verif()const;
    int verifint() const ;
    
};

#endif