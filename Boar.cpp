#include "Boar.h"
#include <iostream>

using namespace std;


FBoar::FBoar()
{
	Type = "Boar";
	Gold = 0;
	HP = 0;
	Direction = 0;

	cout << "Boar 持失切" << endl;
}

FBoar::~FBoar()
{
	cout << "Boar 社瑚切" << endl;
}
