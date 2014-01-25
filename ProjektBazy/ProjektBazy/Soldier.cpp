#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Soldier.h"

using namespace std;

Soldier::Soldier(string Name, string Surname)
{
	this->Name = Name;
	this->Surname = Surname;
}

void Soldier::Print()
{
	cout <<"Zolnierz "<<Name<<" "<<Surname<< endl;
	
};

void Soldier::ShowInventory()
{
	cout << "Amuncja: " << Backpack.size() << endl;
};

void Soldier::Train()
{
	if (Backpack.size() == 0 || Backpack.size()<(Ammo::MaxQuantity/4))
	{
		string exception = this->Surname + " " + this->Name + " " + "Masz za malo nabojow! Uzupelnij zapasy. \n";
		cout << exception;
		return;
	}
	else
	{
		int count = Backpack.size() - Ammo::MaxQuantity / 4;
		for (int i = 0; i < count; i++)
		{
			Backpack.pop_back();
		}
	}
	cout << "Zostalo ci " << Backpack.size() << " nabojow" << endl;
};

void Soldier::GetSupplies(vector<Supply*>Supplylist)
{
	for (int i = 0; i < Ammo::MaxQuantity; i++)
	{
		Backpack.push_back(Supplylist[i]);
		
	}
};

void Soldier::PrintAssignment(){};

int Soldier::GetRequiredSupplies()
{
	int count=Ammo::MaxQuantity - Backpack.size();
	return count;
};