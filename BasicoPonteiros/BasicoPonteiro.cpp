#include <iostream>

using namespace std;


void TrocaNumeros(int& Num1, int& Num2) {

	int temp;
	temp = Num1;
	Num1 = Num2;
	Num2 = temp;
}

void TrocaNumerosPtr(int* Num1, int* Num2) {

	int temp;
	temp = *Num1;
	*Num1 = *Num2;
	*Num2 = temp;

}

int main() {

	setlocale(LC_ALL, "portuguese");
	int* ptr{ nullptr };

	int Numero{ 33 };

	cout << "\n Endereço de memória de numero: " << &Numero;

	ptr = &Numero;

	cout << "\n Endereço de memória de ptr: " << ptr;
	
	cout << "\n valor de numero: " << Numero;

	cout << "\n valor de ptr: " << *ptr;

	*ptr = *ptr + 2;

	cout << "\n valor de ptr: " << *ptr;
	cout << "\n valor de numero: " << Numero;

	//não especifica o tipo do ponteiro a ser retornado

	void* ptr2;

	int Numero2{ 50 };

	ptr2 = &Numero2;

	//para retornar um tipo específico -> instancia o ponteiro com um apontamento especifico para um tipo (char *)ptr e depois pega o valor *(char *)ptr

	cout << "\n Numero2 em char: " << *(int*)ptr2;

	char Letra{ 'E' };

	ptr2 = &Letra;

	//para retornar um tipo específico -> instancia o ponteiro com um apontamento especifico para um tipo (char *)ptr e depois pega o valor *(char *)ptr

	cout << "\n Letra em char: " << (int)*(char*)ptr2;    // printa o valor em decimal da letra E na tabela ascii

	int& Ref = Numero;  //Ref não pode referenciar outra variável
	Ref = 2222; //podemos alterar o valor da variável somente atribuindo a variável a um valor sem o *

	int num1 = 30, num2 = 35;
	cout << "\n---------- troca por referencia ----------- " << num1;
	cout << "\nNum1 antes " << num1;
	cout << "\nNum2 antes " << num2;

	TrocaNumeros(num1, num2);

	cout << "\nNum1 depois " << num1;
	cout << "\nNum2 depois " << num2;

	cout << "\n---------- troca por ponteiro ----------- " << num1;
	cout << "\nNum1 antes " << num1;
	cout << "\nNum2 antes " << num2;

	TrocaNumerosPtr(&num1, &num2);

	cout << "\nNum1 depois " << num1;
	cout << "\nNum2 depois " << num2;
}