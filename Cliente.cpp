#include "Cliente.h"

Cliente::Cliente()
{
}

Cliente::Cliente(long nuip, string nombre, string apellido)
{
	this -> nuip = nuip;
	this -> nombre = nombre;
	this -> apellido = apellido;
}

Cliente::~Cliente()
{
}

long Cliente::getNuip(){
	return this -> nuip;
}

string Cliente::getNombre(){
	return this -> nombre;
}

string Cliente::getApellido(){
	return this -> apellido;
}




