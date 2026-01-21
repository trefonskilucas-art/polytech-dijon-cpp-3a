#include "date.h"
#include "salle.h"
#include "reservation.h"
#include"materiel.h"
#include <iostream>

//constructeur de reservation

reservation::reservation(std::string nomreservation, Date datereservation, salle sallereservation): _nomreservation(nomreservation), _datereservation(datereservation), _sallereservation(sallereservation) {
    
}

//Prise de Reservation




// Les getters

std::string reservation::nomreservation() const {return  _nomreservation;}
Date reservation::datereservation() const {return _datereservation;}
salle reservation::sallereservation() const {return _sallereservation;}