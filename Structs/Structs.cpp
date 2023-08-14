#include <iostream>

struct Data {
	static int contador;
	int id;
	int Dia;
	int Mes;
	int Ano;
	Data() {
		id = contador++;
		std::cout << "construtor de Data("<< id <<") executado \n";
	}
	~Data() {std::cout << "destrutor de Data(" << id << ") executado \n";}
};

int Data::contador = 1;

int main() {
	Data Agenda;

	{
		Data Agenda2;

		Data *Agenda3 = new Data; //esse objeto está na Heap e não na stack
	}

	Data Agenda4;

	return 0;
}