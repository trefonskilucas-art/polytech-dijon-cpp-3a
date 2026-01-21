#include "date.h"
#include "salle.h"
#include <iostream>

reservation::reservation(std::string nomreservation, Date datereservation, salle sallereservation): _nomreservation(nomreservation, _datereservation(datereservation), _sallereservation(sallereservation)) {
    
}


// Les getters

std::string materiel::nomreservation() const {return  _nomreservation;}
Date datereservation() const {return _datereservation}
salle sallereservation() const {return _sallereservaiton}