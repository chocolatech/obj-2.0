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
		EmployeesInTraining[i]->Train();

		//powrót ¿o³nierza do bazy
		tf->Assigned.pop_back();
	}
};

void Base::Print()
{
	cout << "Jestes w bazie \"" << Name <<"\" "<< endl;
	cout << "Polozenie bazy to " << this->Site.x << ", " << this->Site.y << endl;
	HeadCount();
};

void Base::Ressuply()
{
	//dla ka¿dego zolnierza z listy przypisanych
	for (int i = 0; i < Employees.size(); i++)
	{
		//pobierz wymagana ilosc zaopatrzenia z budynku
		int count=Employees[i]->GetRequiredSupplies();
		vector<Supply*> Sup;
		for (int i = 0; i < count; i++)
		{
			Employees[i]->SupplyAssignment->TakeSupplies();
//			Sup.push_back();
		}
		//przekaz zolnierzowi zaopatrzenie
	}
};

void Base::AddEmployee(Employee* E, Building* SleepB, Building* SupplyB)
{
	E->SleepingAssignment = SleepB;
	E->SupplyAssignment = SupplyB;
	SleepB->Assigned.push_back(E);
	SupplyB->Assigned.push_back(E);
	this->Employees.push_back(E);
};