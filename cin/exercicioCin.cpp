#include <iostream>
#include <iomanip> // necess�rio para o setprecision
using namespace std;
int main() {
	setlocale(LC_ALL, "portuguese");

	float num1, num2, num3;
	float media = 0.0;
	char Resposta;
	do {
		cout << "Digite o primeiro n�mero: ";
		cin >> num1;

		cout << "Digite o segundo n�mero: ";
		cin >> num2;

		cout << "Digite o terceiro n�mero: ";
		cin >> num3;

		media = (num1 + num2 + num3) / 3;

		cout << "N�mero digitados: " << num1 << ", " << num2 << " e " << num3 << "\n";
		cout << "M�dia dos n�meros: " << fixed << setprecision(3) << media << "\n";
		cout << "Digite S se deseja continuar calculando a m�dia de outros n�meros \n";
		cout << "Caso queira sair, digite N\n";
		cin >> Resposta;
		cout << "\n";
	} while (Resposta == 'S' || Resposta == 's');// sai do loop

	cout << "Saindo do programa";
	system("PAUSE");

	return 0;
}