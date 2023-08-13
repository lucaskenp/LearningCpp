#include "Conta.h"
#include <iostream>

using namespace std;

bool Conta::Sacar(double valor) {
	if (Saldo < valor) {
		cout << "Saldo insuficiente\n";
		cout << "Seu saldo atual: R$ " << ConsultarSaldo() << "\n";
		return false;
	}
	else {
		Saldo -= valor;
		cout << "Saque de "<< valor <<" feito com sucesso. Seu saldo atual: R$ " << ConsultarSaldo() << "\n";
		return true;
	}
}

void Conta::Depositar(double valor) {
	Saldo += valor;
	cout << "Deposito de : R$ " << valor << " efetuado com sucesso!\n";
}

void Conta::Transferir(Conta& Destino, double valor) {
	if (Saldo < valor) {
		cout << "Saldo insuficiente\n";
		cout << "Seu saldo atual: R$ " << Saldo << "\n";
	}
	else {
		Destino.Depositar(valor);
		Saldo -= valor;
		cout << "\n*******Dados*******\n";
		cout << "Titular: "<<Destino.GetTitular()<<"\n";
		cout << "Banco: "<<Destino.GetBanco()<<"\n";
		cout << "Agencia: "<<Destino.GetAgencia()<<"\n";
		cout << "Conta: "<<Destino.GetNumConta()<<"\n";
		cout << "Transferencia realizada com sucesso!\n";
		cout << "Seu saldo atual: R$" << ConsultarSaldo() <<"\n";
	}
}

double Conta::ConsultarSaldo() {
	return Saldo;
}

std::string Conta::GetBanco() {
	return Banco;
}

int Conta::GetAgencia() {
	return Agencia;
}

int Conta::GetNumConta() {
	return NumConta;
}

std::string Conta::GetTitular() {
	return Titular;
}

void Conta::SetBanco(std::string banco) {
	this->Banco = banco;
}

void Conta::SetNumConta(int numConta) {
	this->NumConta = numConta;
}

void Conta::SetAgencia(int agencia) {
	this->Agencia = agencia;
}

void Conta::SetTitular(std::string titular) {
	this->Titular = titular;
}