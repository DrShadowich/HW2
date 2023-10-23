#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Pet.h"
#include "Dog.h"
using namespace std;
class PetCenter
{
private:
	vector <Pet*> pets;
public:
	PetCenter();
	void addPet(string name, int age, string species, string breed);
	void removePet();
	void displayPetInfo();
};

