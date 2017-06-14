#include<iostream>
#include"Animal.h"
using namespace std;

#ifndef Bat_H
#define Bat_H

class Bat:public Animal	{
private:
	char*food;
public:
	Bat(char*name, char*nick, float age, char*class_animal, float FoodPerDay, char*food);
	Bat(const Bat&copy);
	~Bat();

	char*getFood(){ return food; }

	void eat();
	void sleep();
	void print();
};
#endif // !Bat_H
