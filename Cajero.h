#ifndef CAJERO_H
#define CAJERO_H
#include <iostream>
#include <list>
#include <string>
#include "Banco.h"
#include "Retiro.h"

using namespace std;

class Cajero
{
	public:
		Cajero(Banco * miBanco);
		~Cajero();
		Banco * getMiBanco();
		
		void agregarRetiros(Retiro *);
		
		void hacerRetiro();


	private:
		Banco * miBanco;
		list<Retiro *> * listaRetiros;
		
};

#endif
