// pig.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "AI.h"
#include "User.h"
#include "Player.h"
#include "Rules.h"

#include <ctime>
#include <random>

int main()
{
	srand(time(NULL));
	Player player;
	AI computer;
	player.everyFunction();
	std::cout << player.getScore() << std::endl;
	/*computer.decision();
	std::cout << computer.getScore() << std::endl;*/
}
