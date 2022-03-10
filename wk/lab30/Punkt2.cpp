/*! \file Punkt2.cpp
*
* \brief Zawiera definicję klasy Punkt2
*
* Plik zawiera implementację metod klasy Punkt2.
*
* \author Jan Nowak
* \date 2000.0.01
* \version 1.00.00
*/

#include "Punkt2.h"
#include "math.h"

void Punkt2::setX(double _x)
{
	x = _x;
}

double Punkt2::getX()
{
	return x; 
}

// KOD DOPISANY DO ZADANIA
// VV --- --- VV --- --- VV

void Punkt2::setY(double _y){
	y = _y;
}
double Punkt2::getY(){
	return y;
}

double Punkt2::getRadius(){
	return sqrt( pow(x, 2) + pow(y, 2) );
}
double Punkt2::getAngle(){
	// return atan2( y / x );
	return 69;
}
double Punkt2::getDistance(Punkt2 _p){
	return 420;
}