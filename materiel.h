#ifndef MATERIEL_H
#define MATERIEL_H
#include <string>


class materiel {
private:
    std::string _nom ;
    std::string _type;
    std::string _specificationtypestr;
    int _specificationtypeint;

public :
    materiel (std::string  nom, std::string type, std::string _specificationtypestr, int _specificationtypeint );

    std::string nom() const;
    std::string type() const;
    std::string specificationtypestr() const;
    int specificationtypeint() const;


    bool isvalid()const;

    
};

#endif