#include "Tarjeta.h"

Tarjeta::Tarjeta()
{
	this->numero=0;
	this->clave=0;
}

Tarjeta::Tarjeta(long numero, short clave, Cuenta * miCuenta)
{
	this->numero=numero;
	this->clave=clave;
	this -> miCuenta = miCuenta;
}

Tarjeta::~Tarjeta()
{
}

long Tarjeta::getNumero(){
	return this->numero;
}

short Tarjeta::getClave(){
	return this->clave;
}

Cuenta * Tarjeta::getMiCuenta(){
	return this -> miCuenta;
}
