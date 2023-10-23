#include <iostream>
#include "PetCenter.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	string name;
	string species;
	int age;
	PetCenter A;
	cout << "Введите имя питомца: " << endl;
	cin >> name;
	cout << endl << "Введите возраст питомца: " << endl;
	cin >> age;
	cout << endl << "Введите вид питомца: " << endl;
	cin >> species;
	A.addPet(name, age, species);
	cout << endl << "Давайте создадим ещё питомца собаку: " << endl;
	cout << "Введите имя питомца: " << endl;
	cin >> name;
	cout << endl << "Введите возраст питомца: " << endl;
	cin >> age;
	cout << endl << "Введите вид питомца: " << endl;
	cin >> species;
	cout << endl << "Введите породу собаки: " << endl;
	
	A.addPet(name, age, species);
	A.displayPetInfo();

}