#include "Cuenta.h"

Cuenta::Cuenta()
{
}

Cuenta::Cuenta(int numero, Cliente * miCliente)
{
	this -> numero = numero;
	this -> saldo = 0;
	this -> miCliente = miCliente;
}

Cuenta::~Cuenta()
{
}

int Cuenta::getNumero(){
	return this -> numero;
}

long Cuenta::getSaldo(){
	return this -> saldo;
}

long Cuenta::valorConsignar(long valor){
	
	if (valor < 0) {
        throw new Exception("No se puede retirar un valor negativo");
    }
    
    if (this->saldo == 0) {
        this->saldo = valor;
    } else {
        this->saldo += valor;
    }
    
    return this->saldo;
}

long Cuenta::valorRetirar(long valor, long nuevoSaldo){
	if (valor == 0){
		return this -> saldo;
	}
	if (valor > saldo){
		throw new Exception ("El saldo de la cuenta es insuficiente. ");
	}
	
	saldo -= valor;
	nuevoSaldo = saldo;
	
	return valor;
}

Cliente * Cuenta::getMiCliente(){
	return this->miCliente; 
}






