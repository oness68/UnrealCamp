#pragma once
#include<string>
using namespace std;
class Actor
{
public:
	Actor(int hp, int ad,string name);
	void SetPosition(int position);
	int GetPosition();
	int GetHP();
	virtual void Damaged(int damage);
	virtual void Attack(Actor* hit);
	virtual void Move(bool _front);
	~Actor();


protected:
	int HP;
	int AD;
	int Position;
	string Name;

};