#include <iostream>
#include <tchar.h>
int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int Pontuacao = 1350; 
	std::cout << "********INICIO DO JOGO********" << std::endl;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "Endere�o que Numvidas Ocupa na Mem�ria RAM: " << &NumVidas<< "\n";
	std::cout << "Endere�o que Score Ocupa na Mem�ria RAM: " << &Pontuacao << "\n";
	std::cout << "********DURANTE O JOGO********" << std::endl;
	Pontuacao = Pontuacao + 150;
	NumVidas = NumVidas - 1;
	std::cout << "Vidas jogador: "<< NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;

	system("PAUSE");

}