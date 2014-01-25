#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Employee.h"

using namespace std;

void Employee::Print(){};
void Employee::ShowInventory(){};
void Employee::GetSupplies(vector<Supply*>Supplylist){};
void Employee::Train(){};
int Employee::GetRequiredSupplies(){ return 0; };