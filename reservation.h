#ifndef RESERVATION_H
#define RESERVATION_H
#include <string>
#include "date.h"
#include "salle.h"

class reservation {
private:
    std::string _nomreservation;            //les attributs des reservations
    Date _datereservation;
    salle _sallereservation;

public:
    reservation(std::string _nomreservation, Date _datereservation, salle _sallereservation); // forme d'une reservation

    // pour la prise de rendez vous 




    
    
    std::string nomreservation() const;         //Les getters 
    Date datereservation() const;
    salle sallereservation() const;


};














#endif