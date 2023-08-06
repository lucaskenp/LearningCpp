#include <iostream>
using std::string;

class AbstractEmployee {
	virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
protected:
	string Name;
private:
	string Company;
	int Age;
public:
	Employee(string name, string company, int age):Name(name),Company(company),Age(age){}
	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}
	void setAge(int age) {
		Age = age;
	}
	int getAge() {
		return Age;
	}
	void IntroduceYourself() {
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;
	}
	void AskForPromotion() {
		if (getAge() > 30) {
			std::cout << Name << " got promoted" << std::endl;
		}
		else
		{
			std::cout << Name << ", sorry no promotion for you!" << std::endl;
		}
	}
};	

class Developer :public Employee {      //public Employee deixa a instância da classe Developer usar os atributos e métodos públicos de Employee
public:
	string FavProgramingLanguage;
	Developer(string name, string company, int age, string favProgramingLanguage) :
		Employee(name, company, age),FavProgramingLanguage(favProgramingLanguage){}
	void FixBug() {
		std::cout << Name << " fixed bug using " << FavProgramingLanguage << std::endl;
	}
};

class Teacher :public Employee {
public:
	string Subject;
	Teacher(string name, string company, int age, string subject) :
		Employee(name, company, age), Subject(subject){}
	void PrepareLesson() {
		std::cout << Name << "is preparing " << Subject << " lesson" << std::endl;
	}
};



int main() {
	Developer d = Developer("Lucas", "Dell", 22, "C++");
	Teacher t = Teacher("Jack", "Cool School", 35, "History");
	t.PrepareLesson();
	t.AskForPromotion();

	return 0;
}