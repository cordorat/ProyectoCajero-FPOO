#ifndef CUENTA_H
#define CUENTA_H
#include "Cliente.h"
#include "Exception.h"

class Cuenta
{
	public:
		Cuenta();
		Cuenta(int numero, Cliente * miCliente);
		~Cuenta();
		int getNumero();
		long getSaldo();
		long valorConsignar(long valor);
		long valorRetirar(long valor, long nuevoSaldo);
		Cliente * getMiCliente();
	private:
		int numero;
		long saldo;
		Cliente * miCliente;
};

#endif
