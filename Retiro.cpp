#include "Retiro.h"

Retiro::Retiro()
{
	this -> monto = 0;
}

Retiro::Retiro(long monto, Cuenta * miCuenta)
{
	this -> monto = monto;
	this -> miCuenta = miCuenta;
}

Retiro::~Retiro()
{
}

long Retiro::getMonto(){
	return this -> monto;
}

Cuenta * Retiro::getMiCuenta(){
	return this->miCuenta;
}
