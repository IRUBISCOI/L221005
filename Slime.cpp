#pragma once

#include "Slime.h"
#include <iostream>

using namespace std;

FSlime::FSlime()
{
	Type = "Slime";
	Gold = 0;
	HP = 0;
	Direction = 0;

	cout << "Slime ������" << endl;
}

FSlime::~FSlime()
{
	cout << "Slime �Ҹ���" << endl;
}
