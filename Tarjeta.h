#ifndef TARJETA_H
#define TARJETA_H
#include "Cuenta.h"

class Tarjeta
{
	public:
		Tarjeta();
		Tarjeta(long numero, short clave, Cuenta * miCuenta);
		~Tarjeta();
		long getNumero();
		short getClave();
		Cuenta * getMiCuenta();
	private:
		long numero;
		short clave;
		Cuenta * miCuenta;
};

#endif
