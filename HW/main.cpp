#include <iostream>
#include "PetCenter.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	string name;
	string species;
	int age;
	PetCenter A;
	cout << "������� ��� �������: " << endl;
	cin >> name;
	cout << endl << "������� ������� �������: " << endl;
	cin >> age;
	cout << endl << "������� ��� �������: " << endl;
	cin >> species;
	A.addPet(name, age, species);
	cout << endl << "������� �������� ��� ������� ������: " << endl;
	cout << "������� ��� �������: " << endl;
	cin >> name;
	cout << endl << "������� ������� �������: " << endl;
	cin >> age;
	cout << endl << "������� ��� �������: " << endl;
	cin >> species;
	cout << endl << "������� ������ ������: " << endl;
	
	A.addPet(name, age, species);
	A.displayPetInfo();

}