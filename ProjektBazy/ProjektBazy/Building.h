#ifndef BUILDING_H
#define BUILDING_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Supply.h"
#include"Employee.h"
#include"Location.h"

using namespace std;

class Building
{
public:
	vector<Employee*> Assigned;
	vector <Supply*> SupplyList;
	Location Site;

public: 
	virtual void Print()=0;
	virtual void PrintAssignment()=0;
	virtual vector<Supply*> TakeSupplies()=0;
};
#endif