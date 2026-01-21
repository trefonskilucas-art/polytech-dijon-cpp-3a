#ifndef MATERIEL_H
#define MATERIEL_H
#include <string>


class materiel {
private:
    std::string _nom ;
    std::string _type;

public :
    materiel (std::string  nom, std::string type );

    std::string nom() const;
    std::string type() const;

    std::string materiel::type::specific() const;


    bool isvalid()const;

    
};

#endif