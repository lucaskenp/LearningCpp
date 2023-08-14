#include "Conta.h"
#include <iostream>
#include <string>

int main() {
	Conta ContaCliente01("Bradesco", 31, 22223, "Joao", 15000);
	Conta ContaCliente02("Banco do brasil", 456, 55554, "Lucas",0);

	ContaCliente01.Sacar(1500);

	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(5000);


}