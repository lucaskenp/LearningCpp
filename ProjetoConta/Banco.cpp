#include "Conta.h"
#include <iostream>
#include <string>

int main() {
	Conta ContaCliente01;
	Conta ContaCliente02;

	ContaCliente01.SetBanco("Bradesco");
	ContaCliente01.SetAgencia(31);
	ContaCliente01.SetTitular("Joao");
	ContaCliente01.SetNumConta(22223);
	ContaCliente01.Depositar(15000);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Banco do brasil");
	ContaCliente02.SetAgencia(456);
	ContaCliente02.SetTitular("Lucas");
	ContaCliente02.SetNumConta(55554);


	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(5000);


}