#include "PetCenter.h"
PetCenter::PetCenter() {
	//pets = new vector<Pet*>();
}
void PetCenter::addPet(string name, int age, string species, string breed){
	pets.push_back(new Pet(name, age, species));
	pets.push_back(new Dog(name, age, species, breed));
	
}

void PetCenter::removePet() {
	pets.pop_back();
}
void PetCenter::displayPetInfo() {
	setlocale(LC_ALL, "RU");
	for (auto pet : pets) {
		cout << "Имя: " << (*pet).name << endl;
		cout << "Возраст: " << (*pet).age << endl;
		cout << "Вид: " << (*pet).species << endl;
		cout << "Порода: ";
			auto pet2 = dynamic_cast <Dog*>(pet);
		.breed << endl;
		cout << endl;
	}

	}