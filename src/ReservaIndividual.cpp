#include "../include/ReservaIndividual.hpp"

#include <map>
#include <set>
#include <iterator>
#include <iostream>

ReservaIndividual::~ReservaIndividual(){}

ReservaIndividual::ReservaIndividual(int codigo, DtFechaHora checkIn, DtFechaHora checkOut, DtFechaHora fechaRealizada, TipoEstado estado, float costo, Habitacion* hab, Huesped* hues){
	codigo = codigo ;
	checkIn = checkIn ;
	checkOut = checkOut ;
	fechaRealizada = fechaRealizada ;
	estado = estado ;
	costo = costo ;
	
} 

ReservaIndividual::setearValoresIndividual(float precio){
	precio = precio;
}

#endif
