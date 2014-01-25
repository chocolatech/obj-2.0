#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Barrack.h"

using namespace std;

Barrack::Barrack(int x, int y)
{
	Location l = Location(x, y);
	this->Site = l;
}

void Barrack::Print()
{
	
};

void Barrack::PrintAssignment()
{
	for (int i = 0; i < Assigned.size(); i++)
	{
		Assigned[i]->Print();
		cout << endl;
		Assigned[i]->ShowInventory();
		cout << "-------------------------------------" << endl;
	}

};

vector<Supply*> Barrack::TakeSupplies()
{
	return SupplyList;
};