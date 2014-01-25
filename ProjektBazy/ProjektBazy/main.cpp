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
#include"Arsenal.h"

using namespace std;



int main()
{
	//komunikat powitalny
	cout << "Witaj w bazie." << endl;

	//inicjalizacja danych
	Base myBase(4, 7, "West Point");
	Barrack barracks(3, 7);
	Infirmary infirmary(2,7);
	Storage storage(1,7);
	Arsenal arsenal(2, 3);
	TrainingField tf(1, 3);
	
	Soldier s1("Adam", "Kowalski");
	Soldier s2("Karol", "Nowak");
	Soldier s3("Anna", "Hartman");
	Soldier s4("Jan", "Grzelak");
	Soldier s5("Piotr", "Kolodziej");
	Soldier s6("Karolina", "Walczak");

//przyk³adowy supply dla ¿o³nierza
	Ammo a1;
	Supply s = a1;
	s1.Backpack.push_back(&s);

	Medical m1("Katarzyna", "Drab");
	Medical m2("Marzena", "Drab");
	Medical m3("Piotr", "Kubis");

	Technical t1("Andrzej", "Janas");
	Technical t2("Karol", "Kot");
	Technical t3("Zygmunt", "Tyk");

	myBase.Buildings.push_back(&barracks);
	myBase.Buildings.push_back(&arsenal);
	myBase.Buildings.push_back(&infirmary);
	myBase.Buildings.push_back(&storage);
	myBase.Buildings.push_back(&tf);

	myBase.AddEmployee(&s1, &barracks, &arsenal);
	myBase.AddEmployee(&s2, &barracks, &arsenal);
	myBase.AddEmployee(&s3, &barracks, &arsenal);
	myBase.AddEmployee(&s4, &barracks, &arsenal);
	myBase.AddEmployee(&s5, &barracks, &arsenal);
	myBase.AddEmployee(&s6, &barracks, &arsenal);

	myBase.AddEmployee(&m1, &barracks, &infirmary);
	myBase.AddEmployee(&m2, &barracks, &infirmary);
	myBase.AddEmployee(&m3, &barracks, &infirmary);
	myBase.AddEmployee(&t1, &barracks, &storage);
	myBase.AddEmployee(&t2, &barracks, &storage);
	myBase.AddEmployee(&t3, &barracks, &storage);

	
	
	int choice = 0;

	do
	{
	//menu
	cout << "1. Wyswietl dane bazy" << endl;
	cout << "2. Wyjscie" << endl;
	cout << "3. Wypisz zolnierzy z barakow i ich wyposazenie:" << endl;
	cout << "4. Wypisz medykow z ambulatorium i ich wyposazenie:" << endl;
	cout << "5. Wypisz technikow z magazynu i ich wyposazenie:" << endl;
	cout << "6. Wyslij zolnierzy na cwiczenia" << endl;

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
			infirmary.PrintAssignment();
			break;
		case 5:
			storage.PrintAssignment();
			break;
		case 6:
			myBase.SendToTraining(myBase.Employees, &tf);
			break;
		default:
			break;
		}
	} 
	while (choice != 2);
	system("Pause");
	return 0;
}