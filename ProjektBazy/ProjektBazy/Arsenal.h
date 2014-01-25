#ifndef ARSENAL_H
#define ARSENAL_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Building.h"
#include"Supply.h"
#include"Location.h"

using namespace std;

class Arsenal : public Building
{
public:
	int* Bullet;
	Location Site;
public:
	Arsenal::Arsenal(int x, int y);
	void Print();
	void PrintAssignment();
	vector<Supply*> TakeSupplies();
};
#endif