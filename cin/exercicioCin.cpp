#include <iostream>
#include <iomanip> // necessário para o setprecision
using namespace std;
int main() {
	setlocale(LC_ALL, "portuguese");

	float num1, num2, num3;
	float media = 0.0;
	char Resposta;
	do {
		cout << "Digite o primeiro número: ";
		cin >> num1;

		cout << "Digite o segundo número: ";
		cin >> num2;

		cout << "Digite o terceiro número: ";
		cin >> num3;

		media = (num1 + num2 + num3) / 3;

		cout << "Número digitados: " << num1 << ", " << num2 << " e " << num3 << "\n";
		cout << "Média dos números: " << fixed << setprecision(3) << media << "\n";
		cout << "Digite S se deseja continuar calculando a média de outros números \n";
		cout << "Caso queira sair, digite N\n";
		cin >> Resposta;
		cout << "\n";
	} while (Resposta == 'S' || Resposta == 's');// sai do loop

	cout << "Saindo do programa";
	system("PAUSE");

	return 0;
}