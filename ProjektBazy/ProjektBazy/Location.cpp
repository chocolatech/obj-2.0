#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Location.h"

using namespace std;

Location::Location(){}
Location::Location(int x, int y)
{
	Set(x, y);
}

Location* Location::Get()
{
	return this;
};

void Location::Set(int x, int y)
{
	this->x = x;
	this->y = y;
};