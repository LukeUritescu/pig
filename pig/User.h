#pragma once


#ifndef PIG_USER_H
#define PIG_USER_H
class User
{
public:
	 void setScore(int s);
	 int getScore();
	 void setTurnScore(int ts);
	 int getTurnScore();
	virtual void setInput();
	 int getInput();
	 void decision();
     void Roll();
	 void Hold();
	 void endTurn();
	 void setRandomNumber();
	 int getRandomNumber();
	 void everyFunction();
	 void pig();
	
protected:
	int score = 0;
	int turnScore = 0;
	int input;
	int randomNum;
};
#endif

