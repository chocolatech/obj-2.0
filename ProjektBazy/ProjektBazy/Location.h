#ifndef LOCATION_H
#define LOCATION_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

using namespace std;

class Location
{
public:
	int x;
	int y;
	
public:
	Location::Location();
	Location(int x, int y);
	Location* Get();
	void Set(int x, int y);
};
#endif