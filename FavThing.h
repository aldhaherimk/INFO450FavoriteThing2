#include <iostream>
#include <string>
using namespace std;
#pragma once

class FavThing
{

	// Private data members....
private:
	string title;
	string description;
	string gameStore;
	string type;
	string proficiency;


public:

	FavThing();
	FavThing( string a, string b, string c, string d, string e);

	// Public Setters....
	void setTitle(string title);
	void setDescription(string desc);
	void setGameStore(string gs);
	void setType(string type);
	void setProficiency(string proficiency);

	// Public Getters....
	string getTitle();
	string getDescription();
	string getGameStore();
	string getType();
	string getProficiency();

	// for getting input...
	void getItemInput();
	

	//Friend Function...
	friend ostream & operator << (ostream &os, FavThing & fg);

	

};
