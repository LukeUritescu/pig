#include "pch.h"
#include "Player.h"
#include <cstdlib>
#include <ctime>
#include <random>
#include <stdlib.h>
#include <iostream>


void Player::setInput() {
	std::cout << "Enter 1 to roll, or 2 to hold(ending your turn)" << std::endl;
	std::cin >> input;
}

