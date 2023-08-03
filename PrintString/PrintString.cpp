#include <iostream>


int main() {

	std::string Texto{"Testando o print de string"};

	std::cout << Texto << ", utilizando cout \n";

	std::printf("%s , utilizando printf\n", Texto.c_str());

}