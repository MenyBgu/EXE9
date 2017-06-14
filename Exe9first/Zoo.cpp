#include<iostream>
#include<vector>
#include <cassert>
#include"Animal.h"
#include "Zoo.h"
using namespace std;

/*const char*changeName(char*name) {
	char*temp = new char[25];
	assert(temp&&"Heap error.");
	strcpy_s(temp, strlen(name) + 1, name);
	return temp;
}*/

Zoo::Zoo(char*zooName):name(zooName){
}

Zoo::~Zoo(){}

Animal *Zoo::getAnimal(int id) {			//return animal at specific id.
	if (listAnimals.size() == 0) {
		return 0;
	}
	return listAnimals.at[id];
}

void Zoo::addAnimal(Animal*animal) {
	listAnimals.push_back(animal);
}

bool Zoo::removeAnimal(int id) {
	if (listAnimals.at(id)) {
		return true;
	}
	return false;
}

void Zoo::feedAllAnimals()const {
	for (int i = 0; i < listAnimals.size(); i++) {
		listAnimals[i]->eat();
	}
}

void Zoo::sleepAnimals()const {
	for (int i = 0; i < listAnimals.size(); i++) {
		listAnimals[i]->sleep();
	}
}

void Zoo::printZoo()const {
	cout << "Zoo name: " << name << endl;
	for (int i = 0; i < listAnimals.size(); i++) {
		listAnimals[i]->print();
	}
}






