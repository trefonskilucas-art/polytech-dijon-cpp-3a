#ifndef DATE_H
#define DATE_H

class Date {
private:
    int _jour;   // Nos Variables de jour, mois et années 
    int _mois;
    int _annee;

public:
    // Constructeur 
    Date(int jour, int mois, int annee);

    // Getters
    int jour() const;
    int mois() const;
    int annee() const;

    // Vérifie si la date est logique
    bool isValid() const;
};

#endif