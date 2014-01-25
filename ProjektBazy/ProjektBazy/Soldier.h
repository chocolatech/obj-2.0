#ifndef SOLDIER_H
#define SOLDIER_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Employee.h"
#include"Supply.h"
#include"Ammo.h"

using namespace std;

class Soldier: public Employee
{
public:
	Soldier::Soldier(string Name, string Surname);
	void Print();
	void ShowInventory();
	void Train();
	void GetSupplies(vector<Supply*>Supplylist);
	void PrintAssignment();
	int GetRequiredSupplies();
};
#endif