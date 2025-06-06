#include "Cajero.h"

Cajero::Cajero(Banco * miBanco)
{
	this -> miBanco = miBanco;
	this -> listaRetiros = new list<Retiro*> ();
}

Cajero::~Cajero()
{
}

Banco * Cajero::getMiBanco(){
	return this -> miBanco;
}


void Cajero::agregarRetiros(Retiro * r) {
	
	list<Retiro*>::iterator it = this->listaRetiros->begin() ;
	Retiro * objeto = NULL;
	while ( it != this->listaRetiros->end () ) {
		objeto = * it ;
		if(objeto->getMonto() != r->getMonto())
			this->listaRetiros->push_back(r);
		it ++ ;
	}
}

void Cajero::hacerRetiro(){
	try{
			long numTarjeta;
			short contrasena;
			long monto;
	
			cout<< "Digite el numero de su tarjeta: ";
			cin >> numTarjeta;
	
			cout<< "\nDigite la clave de su tarjeta: ";
			cin >> contrasena;
			
    		Tarjeta * t = miBanco->buscarTarjeta(numTarjeta, contrasena);
    		
    		if (t -> getClave() != contrasena){
    			throw new Exception ("La contrasena es incorrecta. ");
			}
    		
    		cout << "\nSu saldo actual es: " << t -> getMiCuenta() -> getSaldo()<< "\n" <<endl;
    		
    		cout <<"\nIngrese el monto que va a retirar de la cuenta: ";
    		cin >> monto;
    		
    		
    		long nuevoSaldo;
    		long montoRetiro = t -> getMiCuenta()->valorRetirar(monto, nuevoSaldo);
    		
    		Retiro * nuevoRetiro = new Retiro (monto, t->getMiCuenta());
    		agregarRetiros(nuevoRetiro);
    		
    		cout << "\nEl cliente "<< t -> getMiCuenta() -> getMiCliente() -> getNombre() <<" "<< t -> getMiCuenta() -> getMiCliente() -> getApellido() << " con numero de cuenta: #" << t -> getMiCuenta() -> getNumero() <<" ahora tiene un nuevo saldo de: " << t-> getMiCuenta() -> getSaldo() << "\n" << endl;
    		
        	

		} catch (Exception * exc){
			cout << "\nERROR: " << exc -> getMessage();
		}
}
