#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Technical.h"

using namespace std;

Technical::Technical(string Name, string Surname)
{
	this->Name = Name;
	this->Surname = Surname;
}

void Technical::Print()
{
	cout << "Technik " << Name << " " << Surname << endl;
};

void Technical::ShowInventory()
{
	cout << "Narzedzia: " << Backpack.size() << endl;
};


void Technical::Train()
{
	if (Backpack.size() == 0 || Backpack.size()<(CleaningKit::MaxQuantity / 4))
	{
		string exception = this->Surname + " " + this->Name + " " + "Masz za malo narzedzi! Uzupelnij zapasy. \n";
		cout << exception;
		return;
	}
	else Backpack.size() - CleaningKit::MaxQuantity / 4;
	cout << "Zostalo ci " << Backpack.size() << " narzedzi" << endl;
};

void Technical::GetSupplies(vector<Supply*>Supplylist)
{
	for (int i = 0; i < CleaningKit::MaxQuantity; i++)
	{
		Backpack.push_back(Supplylist[i]);

	}
};

void Technical::PrintAssignment(){};