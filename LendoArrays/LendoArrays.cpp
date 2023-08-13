#include <iostream>
#include <vector>

int main() {

	int Numeros[] = { 1,2,3,4,5,6,7,8,9,0 };

	for (int num : Numeros) {
		std::cout << num;
	}

	std::cout << "\n";


	for (auto num : Numeros) {
		std::cout << num;
	}
	std::cout << "\n";

	std::vector <int> numeros;


	std::cout<< "Size vetor numeros " << numeros.size();

	std::cout << "\n";

	for (auto i : {1, 2, 3, 4, 5}) {
		std::cout << "indice: " << i;
		std::cout << "\n";
		numeros.push_back(i);
	}

	std::cout << "\n";
	
	for (auto i : { 0, 1, 2, 3, 4 }) {
		std::cout << numeros[i];
		std::cout << "\n";
	}
}