#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#pragma once
#include "FavThing.h"

class FavThingList
{

private:

	int maxSize;
	int currSize;
	FavThing items[100];
	



public:
	FavThingList();

	void AddNewItem();
	void showList();
	int read_From_File(string filename);
	int write_To_File(string filename);
	bool searchGame(string t);
	



};

