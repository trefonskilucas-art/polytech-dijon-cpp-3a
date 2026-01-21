#ifndef SALLE_H
#define SALLE_H
#include <string>


class salle {
private:
    std::string _nom ;
    std::string _type;

public :
    salle (std::string  nom, std::string type );

    std::string nom() const;
    std::string type() const;

    bool isvalid()const;

    
};

#endif