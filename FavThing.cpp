#include <iostream>
#include <string>
#include "FavThing.h"
#include "FavThingList.h"
#pragma once
using namespace std;

//Default Constructor...

FavThing::FavThing(){
	title = "";
	description = "";
	gameStore = "";
	type = "";
	proficiency = "";

}

FavThing::FavThing(string a, string b, string c, string d, string e){
	title = a;
	description = b;
	gameStore = c;
	type = d;
	proficiency = e;
}

void FavThing::setTitle(string a){
	title = a; 
}

void FavThing::setDescription(string b){
	description = b;
}

void FavThing::setGameStore(string c){
	gameStore = c;
}

void FavThing::setType(string d){
	type = d;
}

void FavThing::setProficiency(string e){
	proficiency = e;
}

string FavThing::getTitle(){
	return title;
}

string FavThing::getDescription(){
	return description;
}

string FavThing::getGameStore(){
	return gameStore;
}

string FavThing::getType(){
	return type;
}

string FavThing::getProficiency(){
	return proficiency;
}


FavThingList ft;
void FavThing::getItemInput()
{
	cout << "Enter Title of game " << endl;
	cin >> title;

	// to avoid repitation searchGame method is use.
	while (true){
		if (ft.searchGame(title)){
			break;
		}
		else{
			cout << "Game with this title already Exists.Please Enter another Game Title." << endl;
			cin >> title;
		}
	}
	cout << "Enter game description " << endl;
	cin >> description;

	cout << "Enter game store " << endl;
	cin >> gameStore;

	cout << "Enter game type " << endl;
	cin>> type;

	cout << "Enter proficiency level " << endl;
	cin>> proficiency;
}


ostream& operator<<(ostream &os, FavThing &fg) {
	os << endl;
	os << "Title:               " << fg.getTitle() << "                 " << endl;
	os << "Description:         " << fg.getDescription() << "           " << endl;
	os << "Game is offered by:  " << fg.getGameStore() << "             " << endl;
	os << "GameType is:         " << fg.getType() << "                  " << endl;
	os << "Proficiency Level is " << fg.getProficiency() << "           " << endl;
	os << "--------------------------------------------" << endl;
	return os;
}