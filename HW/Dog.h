#pragma once
#include "Pet.h"
class Dog : public Pet
{
public:
	string breed;
	Dog(string name, int age, string species, string breed);
};

