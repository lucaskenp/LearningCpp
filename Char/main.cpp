#include <iostream>
#include "lib.h"
#include "lib2.h"
using namespace std;

int main() {

	cout << "Resultado soma mat01: " << mat01::Soma(10,20) << "\n" << endl;
	cout << "Resultado soma mat01: " << mat02::Soma(10,20) << "\n" << endl;

	system("PAUSE");
	return 0;
}