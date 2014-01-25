#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Infirmary.h"

using namespace std;

Infirmary::Infirmary(int x, int y)
{
	Location l = Location(x, y);
	this->Site = l;
}

void Infirmary::Print()
{

};

void Infirmary::PrintAssignment()
{
	for (int i = 0; i < Assigned.size(); i++)
	{
		Assigned[i]->Print();
		cout << endl;
		Assigned[i]->ShowInventory();
		cout << "-------------------------------------" << endl;
	}

};

vector<Supply*> Infirmary::TakeSupplies()
{
	//limit to Max
	return SupplyList;
};