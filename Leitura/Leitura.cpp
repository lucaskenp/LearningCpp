#include <iostream>
#include <windows.h>

int main(){

	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";

	while (!GetAsyncKeyState(VK_RETURN) & 1) {
		for (int i = 0x30; i <= 0x5A; i++) {

			//digitou algo entre 48 e 90
			if (GetAsyncKeyState(i) & 1) {

				if (i >= 0x41 && i <= 0x5A && ((GetKeyState(VK_CAPITAL) & 1) == 0) && ((GetAsyncKeyState(VK_SHIFT) & 1) == 0)) {
					SenhaDigitada += ((char)(i +32));
		
				}
				else {
					SenhaDigitada += (char)i;
					
				}
				std::cout << "*";
				Sleep(50);
			}
			else if (GetAsyncKeyState(VK_BACK) & 1)
			{
				SenhaDigitada.erase(SenhaDigitada.size() - 1);
				system("cls");
				std::cout << "Digite a senha de acesso: ";
				for (int i = 0; i < SenhaDigitada.size(); i++)
				{
					std::cout << '*';
				}
				Sleep(50);
			}
		}

	}

	if (SenhaDigitada == SenhaDeAcesso) 
	{
		std::cout << "\nSenha correta";
	}
	else {
		std::cout << "\nSenha incorreta";

	}
	
}