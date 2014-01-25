#ifndef BARRACK_H
#define BARRACK_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Building.h"
#include"Supply.h"
#include"Location.h"
#include"Employee.h"

using namespace std;

class Barrack : public Building
{
public:
	Location Site;
public:
	Barrack::Barrack(int x, int y);
	void Print();
	void PrintAssignment();
	vector<Supply*> TakeSupplies();
};
#endif