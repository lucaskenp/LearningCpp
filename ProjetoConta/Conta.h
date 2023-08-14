#pragma once
#include <iostream>

class Conta
{
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo{ 0.0 };

public:
	Conta(std::string banco, int agencia, int numConta, std::string titular, double saldo);
	~Conta();
	bool Sacar(double valor);
	void Depositar(double valor);
	void Transferir(Conta& Destino, double valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
	void SetNumConta(int numConta);
};