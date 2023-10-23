#include "Dog.h"
Dog::Dog(string t_name, int t_age, string t_species, string t_breed) : Pet(t_name, t_age, t_species) {
	name = t_name;
	age = t_age;
	species = t_species;
	breed = t_breed;
}
