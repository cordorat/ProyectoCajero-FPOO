#ifndef BANCO_H
#define BANCO_H
#include <string>
#include "Cliente.h"
#include "Cuenta.h"
#include "Tarjeta.h"
#include <list>

using namespace std;

class Banco
{
	public:
		Banco();
		Banco(string nombre);
		~Banco();
		string getNombre();
		
		void agregarClientes(Cliente *);
		Cliente * buscarCliente(short nuip);
		
		void agregarCuentas(Cuenta *);
		Cuenta * buscarCuenta(long numero);
		
		void agregarTarjetas(Tarjeta *);
		Tarjeta * buscarTarjeta(long numero, int contrasena);
	
	private:
		string nombre;
		
		list<Cliente *> * listaClientes;
		list<Cuenta *> * listaCuentas;
		list<Tarjeta*> * listaTarjetas;
};

#endif
