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
		std::cout << "���¢����," << std::endl;

	}
	std::cout << "���� ���� ���Ȱٴ�?" << std::endl;

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
