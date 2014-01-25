#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<cstdlib>
#include<cstring>
#include<vector>

#include"Supply.h"
#include"Building.h"


using namespace std;

class Building;
class Employee
{
public:
	string Name;
	string Surname;
	vector<Supply*> Backpack;
	Building* SleepingAssignment;
	Building* SupplyAssignment;

public:
	virtual void Print()=0;
	virtual void ShowInventory();
	virtual void GetSupplies(vector<Supply*>Supplylist) = 0;
	virtual void Train() = 0;
	virtual int GetRequiredSupplies()=0;
};
#endif