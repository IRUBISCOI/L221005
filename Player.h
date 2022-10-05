#pragma once
#include "Character.h"

class FPlayer : public FCharacter
{
public:
	FPlayer(); //Constructor
	~FPlayer(); //Destructor

	void Collect();
};

