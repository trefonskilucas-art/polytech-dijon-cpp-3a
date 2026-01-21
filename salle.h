#ifndef SALLE_H
#define SALLE_H
#include <string>
#include <vector>


class salle {
private:
    std::string _nom ;
    std::string _type;
    std::vector<std::string> _listesalles;
public :
    salle (std::string  nom, std::string type );

    std::string nom() const;
    std::string type() const;

    bool isvalid()const;

    void addsalle(std::string nom);
};

#endif