#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Arsenal.h"

using namespace std;

Arsenal::Arsenal(int x, int y)
{
	Location l = Location(x, y);
	this->Site= l;
}

void Arsenal::Print(){};
void Arsenal::PrintAssignment(){};
vector<Supply*> Arsenal::TakeSupplies()
{
	//limit to Max
	return SupplyList;
};