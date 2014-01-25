#ifndef SUPPLY_H
#define SUPPLY_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

using namespace std;

class Supply
{
public:
	static int MaxQuantity;

public:
	Supply::Supply();
	virtual void Print();
};
#endif