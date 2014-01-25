#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Employee.h"
#include"Base.h"

using namespace std;

Base::Base(int x, int y, string Name)
{
	this->Site = Location(x, y);

	this->Name = Name;
}

void Base::HeadCount()
{
	cout <<"Aktualnie osob w bazie "<< this->Employees.size()<<endl;
	cout << "Osoby obecne w bazie:" << endl;

	for (int i = 0; i < Employees.size(); i++)
	{
		Employees[i]->Print();
		cout << endl;
		cout << "-------------------------------------" << endl;
	}

	cout << "Budynki w bazie " << this->Buildings.size() << endl;

	for (int i = 0; i < Buildings.size(); i++)
	{
		Buildings[i]->Print();
		cout << endl;
		cout << "-------------------------------------" << endl;
	}

};

void Base::SendToTraining(vector<Employee*>EmployeesInTraining, TrainingField* tf)
{
//for each ¿o³nierza
	for (int i = 0; i < EmployeesInTraining.size(); i++)
	{

		//wysy³amy ¿o³nierza na training

		tf->Assigned.push_back(EmployeesInTraining[i]);
		//uruchamiany cykl szkoleniowy
		//EmployeesInTraining[i]->

		//powrót ¿o³nierza do bazy
	}
};

void Base::Print()
{
	cout << "Jestes w bazie \"" << Name <<"\" "<< endl;
	cout << "Polozenie bazy to " << this->Site.x << ", " << this->Site.y << endl;
	HeadCount();
};