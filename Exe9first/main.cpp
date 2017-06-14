/*MenyBuganim_302490610    BaruchRothkoff 311603252*/
#include<iostream>
#include <cassert>
#include"Animal.h"
#include"Tiger.h"
#include "Giraffe.h"
#include "Zoo.h"
#include"Bat.h"
using namespace std;

int Animal::counter = 0;

int main() {
	{
		Tiger Kresp("Jhon", "Crespo", 27.2, "Tiger", 27, 120);
		Kresp.print();

		Giraffe redKing("Jhon222", "Crespo111", 27.22, "Giraffe", 20, 70);
		redKing.print();

		Bat KingKong("Jhon212", "Crespo212", 27.22, "Bat", 20, "RudVan");
		KingKong.print();

	}
	system("pause");
	return 0;
}