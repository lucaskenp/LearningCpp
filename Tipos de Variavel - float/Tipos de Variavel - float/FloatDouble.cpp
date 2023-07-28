#include <iostream>

int main()
{
	int Numero;
	float Numero2;
	Numero = 45;
	Numero2 = 55.56f;

	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da variavel Numero: " << sizeof(Numero) << std::endl;
	std::cout << "Endereco carregado na memoria: " << &Numero << std::endl;

	std::cout << "Valor Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da variavel Numero: " << sizeof(Numero2) << std::endl;
	std::cout << "Endereco carregado na memoria: " << &Numero2 << std::endl;

	system("PAUSE");
}