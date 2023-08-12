#include <iostream>

template <typename T>

T soma(T x, T y) {
	return x + y;
}


int main() {

	std::cout << soma<int>(2, 2) << "\n";
	std::cout << soma<float>(2.22, 2.55) << "\n";
	std::cout << soma<double>(2.666667, 2.99999) << "\n";

	return 0;
}