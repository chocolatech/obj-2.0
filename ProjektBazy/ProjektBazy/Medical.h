#ifndef MEDICAL_H
#define MEDICAL_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Employee.h"
#include"Supply.h"
#include"MedKit.h"

using namespace std;

class Medical : public Employee
{
public:
	Medical::Medical(string Name, string Surname);
	void Print();
	void ShowInventory();
	void Train();
	void GetSupplies(vector<Supply*>Supplylist);
	void PrintAssignment();
	int GetRequiredSupplies();
};
#endif