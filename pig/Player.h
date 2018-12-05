#pragma once
#include "Player.h"

#include "User.h"

#ifndef PIG_PLAYER_H
#define PIG_PLAYER_H

class Player : public User
{
public:
	void setInput() override;
};

#endif // !PIG_PLAYER_H


