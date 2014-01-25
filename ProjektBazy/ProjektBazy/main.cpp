#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Base.h"
#include"Employee.h"
#include"Soldier.h"
#include"Medical.h"
#include"Technical.h"
#include"Barrack.h"
#include"Infirmary.h"
#include"Storage.h"
#include"TrainingField.h"

using namespace std;



int main()
{
	//komunikat powitalny
	cout << "Witaj w bazie." << endl;

	//inicjalizacja danych
	Base myBase(4, 7, "West Point");
	Barrack barracks(3, 7);
	Infirmary infimary(2,7);
	Storage storage(1,7);

	TrainingField tf(1, 3);
	
	Soldier s1("Adam", "Kowalski");
	Soldier s2("Karol", "Nowak");
	Soldier s3("Anna", "Hartman");
	Soldier s4("Jan", "Grzelak");
	Soldier s5("Piotr", "Kolodziej");

	Medical m1("Katarzyna", "Drab");
	Medical m2("Marzena", "Drab");
	Medical m3("Piotr", "Kubis");

	Technical t1("Andrzej", "Janas");
	Technical t2("Karol", "Kot");
	Technical t3("Zygmunt", "Tyk");

	myBase.Employees.push_back(&s1);
	myBase.Employees.push_back(&s2);
	myBase.Employees.push_back(&s3);
	myBase.Employees.push_back(&m1);
	myBase.Employees.push_back(&m2);
	myBase.Employees.push_back(&m3); 
	myBase.Employees.push_back(&t1);
	myBase.Employees.push_back(&t2);
	myBase.Employees.push_back(&t3);

	barracks.Assigned.push_back(&s1);
	barracks.Assigned.push_back(&s2);
	barracks.Assigned.push_back(&s3);
	barracks.Assigned.push_back(&s4);
	barracks.Assigned.push_back(&s5);

	infimary.Assigned.push_back(&m1);
	infimary.Assigned.push_back(&m2);
	infimary.Assigned.push_back(&m3);

	storage.Assigned.push_back(&t1);
	storage.Assigned.push_back(&t2);
	storage.Assigned.push_back(&t3);

	//menu
	cout << "1. Wyswietl dane bazy" << endl;
	cout << "2. Wyjscie" << endl;
	cout << "3. Wypisz zawartosc plecakow zolnierzy z barakow:" << endl;
	cout << "4. Wypisz zawartosc plecakow medykow z ambulatorium:" << endl;
	cout << "5. Wypisz zawartosc plecakow technikow z magazynu:" << endl;
	cout << "6. Wyslij zolnierzy na cwiczenia" << endl;

	int choice=0;

	cin >> choice;

	switch (choice)
	{
	case 1:
		myBase.Print();
		break;
	case 2:
		return 0;
	case 3:
		barracks.PrintAssignment();
		break;
	case 4:
		infimary.PrintAssignment();
		break;
	case 5:
		storage.PrintAssignment();
		break;
	default:
		break;
	}

	system("Pause");
	return 0;
}