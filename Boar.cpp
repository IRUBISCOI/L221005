#include "Boar.h"
#include <iostream>

using namespace std;


FBoar::FBoar()
{
	Type = "Boar";
	Gold = 0;
	HP = 0;
	Direction = 0;

	cout << "Boar ������" << endl;
}

FBoar::~FBoar()
{
	cout << "Boar �Ҹ���" << endl;
}
