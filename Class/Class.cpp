#include <iostream>

class Magazine {
public:
	std::string name;
	Magazine(std::string pName) :name(pName) {}

};

class Player {
public:
	Magazine* magazine;
	int number;
	std::string name;
	Player(int pNumber, std::string pName):number(pNumber),name(pName){}
	void printValues() {
		std::cout << name << std::endl;
		std::cout << "idade: " << number << std::endl;
	}

	void Load(Magazine* newMag) {
		magazine = newMag;
	}
};



void Display(Player* player) {
	std::cout << player->name << std::endl;
	std::cout << player->magazine->name << std::endl;
}

int main() {

	setlocale(LC_ALL, "portuguese");

	Player player(22, "João");
	player.printValues();

	Player* myPlayer;

	myPlayer = new Player(25, "Maria");

	myPlayer->printValues();

	myPlayer->Load(new Magazine("pistola"));

	Display(myPlayer);


	return 0;
}