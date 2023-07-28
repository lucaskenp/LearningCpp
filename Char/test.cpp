#include <iostream>

using namespace std;

int teste() {
	
	int Numero;
	float Numero2;
	char Caractere = '3';
	Numero = 42;
	Numero2 = 55.56f;

	cout<<"Valor numero: "<< Numero << "\n" << endl;
	cout<<"Tamanho variável Numero: " << sizeof(Numero) <<" Bytes \n" << endl;
	cout<<"Endereco carregado na memória: "<< &Numero << "\n" << endl;

	cout << "Valor numero2: " << Numero2 << "\n" << endl;
	cout << "Tamanho variável Numero2: " << sizeof(Numero2) << " Bytes \n" << endl;
	cout << "Endereco carregado na memória: " << &Numero2 << "\n" << endl;

	cout << "Valor caractere: " << Caractere << "\n" << endl;
	cout << "Tamanho variável Caractere: " << sizeof(Caractere) << " Bytes \n" << endl;
	cout << "Endereco carregado na memória: " << (void *) & Caractere << "\n" << endl;

	system("PAUSE");
	return 0;
}