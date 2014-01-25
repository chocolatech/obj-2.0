#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"TrainingField.h"

using namespace std;

TrainingField::TrainingField(int x, int y)
{
	Location l = Location(x, y);
	this->Site = l;
}

void TrainingField::Print(){};
void TrainingField::PrintAssignment(){};

vector<Supply*> TrainingField::TakeSupplies()
{
	//limit to Max
	return SupplyList;
};