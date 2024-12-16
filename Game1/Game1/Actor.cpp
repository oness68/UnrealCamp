#include "Actor.h"
#include <iostream>



Actor::Actor(int hp, int ad, string name)
{
	HP = hp;
	AD = ad;
	Name = name;
}

void Actor::SetPosition(int position)
{
	Position = position;
}

int Actor::GetPosition()
{
	return Position;
}

int Actor::GetHP()
{
	return HP;

}

void Actor::Damaged(int damage)
{
	HP -= damage;
}

void Actor::Move(bool front)
{
	if (front)
	{
		Position += 1;

	}
	else
	{
		Position -= 1;

	}
}

void Actor::Attack(Actor* hit)
{
	

	hit->Damaged(AD);
}

Actor::~Actor()
{
	cout << Name << "»ç¸Á" << endl;
}