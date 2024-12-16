#include "Enemy.h"
#include<iostream>
Enemy::Enemy(int hp, int ad, std::string name, bool named) : Actor(hp,ad,name)
{
	Named = named;
}

void Enemy::Damaged(int damage)
{
	if (Named)
	{
		std::cout << "¿ïºÎÂ¢À¸¸ç," << std::endl;

	}
	std::cout << "°¨È÷ ³ª¸¦ ¶§·È°Ù´Ù?" << std::endl;

	Actor::Damaged(damage);
}

void Enemy::Move(bool front)
{
	if (front)
	{
		Position--;
	}
	else {
		Position++;
	}
}
