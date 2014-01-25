#ifndef BASE_H
#define BASE_H


#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Location.h"
#include"Employee.h"
#include"Building.h"
#include"TrainingField.h"

using namespace std;

class Base
{
public:
	string Name;
	vector<Employee*>Employees;
	vector<Building*>Buildings;
	Location Site;

public:
	Base(int x, int y, string Name);
	void HeadCount();
	void SendToTraining(vector<Employee*>EmployeesInTraining, TrainingField* tf);
	void Print();
};
#endif