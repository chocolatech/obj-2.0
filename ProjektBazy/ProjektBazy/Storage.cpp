#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Storage.h"

using namespace std;

Storage::Storage(int x, int y)
{
	Location l = Location(x, y);
	this->Site = l;
}

void Storage::Print()
{

};

void Storage::PrintAssignment()
{
	for (int i = 0; i < Assigned.size(); i++)
	{
		Assigned[i]->Print();
		cout << endl;
		Assigned[i]->ShowInventory();
		cout << "-------------------------------------" << endl;
	}
};
vector<Supply*> Storage::TakeSupplies()
{
	//limit to Max
	return SupplyList;
};