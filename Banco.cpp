#include "Banco.h"
#include "Exception.h"

Banco::Banco()
{
	this->nombre = "";
}

Banco::Banco(string nombre)
{
	this->nombre = nombre;
	
	this->listaClientes = new list<Cliente *>();
	this->listaCuentas = new list<Cuenta *>();
	this -> listaTarjetas = new list<Tarjeta *>();
}

Banco::~Banco()
{

    list<Cliente*>::iterator itCliente = this->listaClientes->begin();
    for (; itCliente != listaClientes->end(); itCliente++){
    	delete (*itCliente);
	}
        
    delete this->listaClientes;
    
    list<Cuenta*>::iterator itCuenta = this->listaCuentas->begin();
    for (; itCuenta != listaCuentas->end(); itCuenta++){
    	delete (*itCuenta);
	}
        
    delete this->listaCuentas;

    list<Tarjeta*>::iterator itTarjeta = this->listaTarjetas->begin();
    for (; itTarjeta != listaTarjetas->end(); itTarjeta++){
    	delete (*itTarjeta);
	}
    delete this->listaTarjetas;
}

string Banco::getNombre()
{
	return this -> nombre;
}
void Banco::agregarClientes(Cliente * c) {
	
	list<Cliente*>::iterator it = this->listaClientes->begin() ;
	Cliente * objeto = NULL;
	while ( it != this->listaClientes->end () ) {
		objeto = * it ;
		if(objeto->getNuip() == c->getNuip())
			throw new Exception("El cliente ya se encuentra registrado");
		it ++ ;
	}
	
	this->listaClientes->push_back(c);
}

Cliente* Banco::buscarCliente(short nuip){
	list<Cliente*>::iterator it = this->listaClientes->begin() ;
	Cliente * objeto = NULL;
	while ( it != this->listaClientes->end () ) {
		objeto = * it ;
		if(objeto->getNuip() == nuip)
			return objeto;
		it ++ ;
	}
	throw new Exception("No se encontro el cliente con el codigo especificado");
}

void Banco::agregarCuentas(Cuenta * c) {
	
	list<Cuenta*>::iterator it = this->listaCuentas->begin() ;
	Cuenta * objeto = NULL;
	while ( it != this->listaCuentas->end () ) {
		objeto = * it ;
		if(objeto->getNumero() == c->getNumero())
			throw new Exception("La cuenta ya se encuentra registrado");
		it ++ ;
	}
	
	this->listaCuentas->push_back(c);
}

Cuenta * Banco::buscarCuenta(long numero){
	list<Cuenta*>::iterator it = this->listaCuentas->begin() ;
	Cuenta * objeto = NULL;
	while ( it != this->listaCuentas->end() ) {
		objeto = * it ;
		if(objeto->getNumero() == numero)
			return objeto;
		it ++ ;
	}
	throw new Exception("No se encontro la cuenta con el numero especificado");
}


void Banco::agregarTarjetas(Tarjeta * t) {
	
	list<Tarjeta*>::iterator it = this->listaTarjetas->begin() ;
	Tarjeta * objeto = NULL;
	while ( it != this->listaTarjetas->end () ) {
		objeto = * it ;
		if(objeto->getNumero() == t->getNumero())
			throw new Exception("La Tarjeta ya se encuentra registrado");
		it ++ ;
	}
	this->listaTarjetas->push_back(t);
}


Tarjeta * Banco::buscarTarjeta(long numero, int contrasena){
	list<Tarjeta*>::iterator it = this->listaTarjetas->begin() ;
	Tarjeta * objeto = NULL;
	while ( it != this->listaTarjetas->end() ) {
		objeto = * it ;
		if(objeto->getNumero() == numero){
			return objeto;
		}
		it ++ ;
	}
	throw new Exception("No se encuentra una tarjeta con ese numero. ");
}





