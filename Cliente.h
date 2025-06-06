#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>


using namespace std;

class Cliente
{
	public:
		Cliente();
		Cliente(long nuip, string nombre, string apellido);
		~Cliente();
		long getNuip();
		string getNombre();
		string getApellido();
	private:
		long nuip;
		string nombre;
		string apellido;
};

#endif
