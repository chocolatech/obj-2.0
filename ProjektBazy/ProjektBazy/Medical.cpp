#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Medical.h"

using namespace std;

Medical::Medical(string Name, string Surname)
{
	this->Name = Name;
	this->Surname = Surname;
}

void Medical::Print()
{
	cout << "Medyk " << Name << " " << Surname << endl;
};

void Medical::ShowInventory()
{
	cout << "Apteczki: " << Backpack.size() << endl;
};

void Medical::Train()
{
	if (Backpack.size() == 0 || Backpack.size()<(MedKit::MaxQuantity / 4))
	{
		string exception = this->Surname + " " + this->Name + " " + "Masz za malo apteczek! Uzupelnij zapasy. \n";
		cout << exception;
		return;
	}
	else Backpack.size() - MedKit::MaxQuantity / 4;
	cout << "Zostalo ci " << Backpack.size() << " apteczek" << endl;
};

void Medical::GetSupplies(vector<Supply*>Supplylist)
{
	for (int i = 0; i < MedKit::MaxQuantity; i++)
	{
		Backpack.push_back(Supplylist[i]);

	}
};

void Medical::PrintAssignment(){};

int Medical::GetRequiredSupplies()
{
	int count = MedKit::MaxQuantity - Backpack.size();
	return count;
};