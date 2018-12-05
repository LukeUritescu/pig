#include "pch.h"
#include "User.h"
#include <cstdlib>
#include <ctime>
#include <random>
#include <stdlib.h>
#include <iostream>




void User::decision() {
	if (getInput() == 1)
	{
		Roll();
	}
	else {}
}

void User::setScore(int s) {
	score = s + score;
}

int User::getScore() {
	return score;
}

void User::setTurnScore(int ts) {
	turnScore = ts;
}

int User::getTurnScore() {
	return turnScore;
}

void User::setInput() {
	
}
	
int User::getInput() {
	return input;
}

void User::setRandomNumber() {
	randomNum = (rand() % 6) + 1;
}

int User::getRandomNumber() {
	return randomNum;
}

void User::Roll() {
	setRandomNumber();
	if (randomNum == 1) {
		std::cout << "You rolled a 1, you lose all your points this turn" << std::endl;
	}
	else {
		turnScore = turnScore + randomNum;
		std::cout << "You rolled a " << randomNum << std::endl;
	}
}

void User::everyFunction() 
{
	setInput();
	decision();
	pig();
}

void User::pig() {
	if (getRandomNumber() == 1) {
		turnScore = 0;
	}
}

void User::Hold() {
	endTurn();
}

void User::endTurn() {
	setScore(turnScore);
	turnScore = 0;
}