#include <iostream>
#include "Tarjeta.h"
#include "Cuenta.h"
#include "Cliente.h"
#include "Retiro.h"
#include "Banco.h"
#include "Cajero.h"
#include "Exception.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	try{

		Banco * unBanco = new Banco ("Bancolombia");

		/////////////////////////////////////////////////////////////////
	
		Cliente * unCliente1 = new Cliente (3232, "David", "Cordoba");
		unBanco -> agregarClientes(unCliente1);

		Cuenta * unaCuenta1 = new Cuenta(13423434, unCliente1);
		unBanco -> agregarCuentas(unaCuenta1);
		
		Tarjeta * unaTarjeta1 = new Tarjeta(40935501, 2425, unaCuenta1);
		unBanco -> agregarTarjetas(unaTarjeta1);
		/////////////////////////////////////////////////////////////////
	
		Cliente * unCliente2 = new Cliente (3233, "Juan", "Perdomo");
		unBanco -> agregarClientes(unCliente2);
	
		Cuenta * unaCuenta2 = new Cuenta(1231412412, unCliente2);
		unaCuenta2 -> valorConsignar(100000);
		unBanco -> agregarCuentas(unaCuenta2);
	
		Tarjeta * unaTarjeta2 = new Tarjeta(40935502, 2426, unaCuenta2);
		unBanco -> agregarTarjetas(unaTarjeta2);
	
		/////////////////////////////////////////////////////////////////
	
		Cliente * unCliente3 = new Cliente (3234, "Pedro", "Manizales");
		unBanco -> agregarClientes(unCliente3);
			
		Cuenta * unaCuenta3 = new Cuenta(534534, unCliente3);
		unBanco -> agregarCuentas(unaCuenta3);
	
		Tarjeta * unaTarjeta3 = new Tarjeta(40935503, 2426, unaCuenta3);
		unBanco -> agregarTarjetas(unaTarjeta3);
	
		/////////////////////////////////////////////////////////////////
	
		Cliente * unCliente4 = new Cliente (3235, "Hector", "Castro");
		unBanco -> agregarClientes(unCliente4);
	
		Cuenta * unaCuenta4 = new Cuenta(4452342, unCliente4);
		unBanco -> agregarCuentas(unaCuenta4);
	
		Tarjeta * unaTarjeta4 = new Tarjeta(40935504, 2427, unaCuenta4);
		unBanco -> agregarTarjetas(unaTarjeta4);
		
		/////////////////////////////////////////////////////////////////
	
		Cliente * unCliente5 = new Cliente (3236, "Esteban", "Ortiz");
		unBanco -> agregarClientes(unCliente5);
	
		Cuenta * unaCuenta5 = new Cuenta(1231251, unCliente5);
		unBanco -> agregarCuentas(unaCuenta5);
	
		Tarjeta * unaTarjeta5 = new Tarjeta(40935505, 2428, unaCuenta5);
		unBanco -> agregarTarjetas(unaTarjeta5);
		
		/////////////////////////////////////////////////////////////////
	
		Cajero * unCajero = new Cajero (unBanco);
		
		unCajero -> hacerRetiro();
		
	
		delete unCliente1;
		delete unaCuenta1;
		delete unaTarjeta1;	
		delete unCliente2;
		delete unaCuenta2;
		delete unaTarjeta2;
		delete unCliente3;
		delete unaCuenta3;
		delete unaTarjeta3;	
		delete unCliente4; 
		delete unaCuenta4;
		delete unaTarjeta5;	
		delete unCajero;
		delete unBanco;
		
		
		cout << "Fin del programa.\n" << endl;
	} catch (Exception * exc) {
        cout << "ERROR : " << exc->getMessage();
    }

	system ("pause");
	return 0;
}
