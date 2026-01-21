#ifndef MATERIEL_H
#define MATERIEL_H
#include <string>


class materiel {
private:
    std::string _nom ;
    std::string _type;

public :
    materiel (std::string  nom, std::string type );

    int nom() const;
    int type() const;

    bool isvalid()const;

    

    
}

#endif