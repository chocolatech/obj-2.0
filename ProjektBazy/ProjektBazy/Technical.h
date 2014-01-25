#ifndef TECHNICAL_H
#define TECHNICAL_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Employee.h"
#include"Supply.h"
#include"CleaningKit.h"

using namespace std;

class Technical : public Employee
{
public:
	Technical::Technical(string Name, string Surname);
	void Print();
	void ShowInventory();
	void Train();
	void GetSupplies(vector<Supply*>Supplylist);
	void PrintAssignment();
	int GetRequiredSupplies();
};
#endif