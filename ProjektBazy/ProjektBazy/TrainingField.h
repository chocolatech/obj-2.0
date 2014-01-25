#ifndef TRAININGFIELD_H
#define TRAININGFIELD_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Building.h"
#include"Supply.h"
#include"Location.h"

using namespace std;

class TrainingField : public Building
{
public:
	int* Bullet;
	Location Site;
public:
	TrainingField::TrainingField(int x, int y);
	void Print();
	void PrintAssignment();
	vector<Supply*> TakeSupplies();
};
#endif