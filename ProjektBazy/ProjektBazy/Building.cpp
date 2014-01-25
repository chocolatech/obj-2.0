#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Building.h"

using namespace std;


void Building::Print(){};

void Building::PrintAssignment(){};

vector<Supply*> Building::TakeSupplies()
{
	return SupplyList;
};