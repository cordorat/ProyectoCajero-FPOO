#ifndef RETIRO_H
#define RETIRO_H
#include "Cuenta.h"

class Retiro
{
	public:
		Retiro();
		Retiro(long monto, Cuenta * miCuenta);
		~Retiro();
		long getMonto();
		Cuenta * getMiCuenta();
	private:
		long monto;
		Cuenta * miCuenta;
};

#endif
