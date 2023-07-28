#include <iostream>
#include <tchar.h>
int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int Pontuacao = 1350; 
	std::cout << "********INICIO DO JOGO********" << std::endl;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "Endereço que Numvidas Ocupa na Memória RAM: " << &NumVidas<< "\n";
	std::cout << "Endereço que Score Ocupa na Memória RAM: " << &Pontuacao << "\n";
	std::cout << "********DURANTE O JOGO********" << std::endl;
	Pontuacao = Pontuacao + 150;
	NumVidas = NumVidas - 1;
	std::cout << "Vidas jogador: "<< NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;

	system("PAUSE");

}