#ifndef INFIRMARY_H
#define INFIRMARY_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Building.h"
#include"Supply.h"
#include"Location.h"
#include"Employee.h"

using namespace std;

class Infirmary : public Building
{
public:
	Location Site;
public:
	Infirmary::Infirmary(int x, int y);
	void Print();
	void PrintAssignment();
	vector<Supply*> TakeSupplies();
};
#endif