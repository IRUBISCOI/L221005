#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

using namespace std;


int main()
{
	FPlayer* MyPlayer = new FPlayer();

	MyPlayer->Move();

	FGoblin* Goblin = new FGoblin();
	Goblin->Move();

	FSlime* Slime = new FSlime();
	Slime->Move();

	FBoar* Boar = new FBoar();
	Boar->Move();

	delete MyPlayer;
	MyPlayer = nullptr;

	delete Goblin;
	Goblin = nullptr;

	delete Slime;
	Slime = nullptr;

	delete Boar;
	Boar = nullptr;

	return 0;
}