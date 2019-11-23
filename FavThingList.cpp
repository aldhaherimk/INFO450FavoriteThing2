
#include <string>
#include <fstream>
#include "FavThing.h"
#include "FavThingList.h"
 #include <iostream>

using namespace std;



FavThingList::FavThingList()
{
	maxSize = 0;
	currSize = 0;
	
	
}

bool FavThingList::searchGame(string t) {
	for (int z = 0; z<=maxSize; z++){
		if (items[z].getTitle() == t)
			return false;
	}
	return true;
}

void FavThingList::AddNewItem()
{
	items[maxSize].getItemInput();
	currSize ++;
	maxSize++;
	
}
void FavThingList::showList()
{
	int i;
	for (i = 0; i < maxSize; i++)
	{
	
		cout << items[i];
	}

	cout << "There are " << currSize <<" item in list " << endl;
	cout << endl;
}

int FavThingList::read_From_File(string filename)
{
	ifstream inputFile;
	inputFile.open(filename, ios::in);

	if (!inputFile)
	{
		cout << "ERROR: could not open file" << endl;
		return -2;
		
	}

		//create temp placeholder for items

		string _title;
		string _description;
		string _gameStore;
		string _type;
		string _proficiency;
		string inputstring;

		
		while (!inputFile.eof())
		{
			getline(inputFile, inputstring, ' '); // reading from the file till end 
			
			// if file is empty...
			
			if (inputstring.length() == 0){
				cout << "ERROR : File is empty..";
			}// end if
			
			else if (inputstring.length() >= 1)
			{
				
				_title = inputstring;
				getline(inputFile, _description, ' ');
				getline(inputFile, _gameStore, ' ');
				getline(inputFile, _type, ' ');
				getline(inputFile, _proficiency, ' ');


				// now add data to objects in list
				items[maxSize].setTitle(_title);
				items[maxSize].setDescription(_description);
				items[maxSize].setGameStore(_gameStore);
				items[maxSize].setType(_type);
				items[maxSize].setProficiency(_proficiency);

				maxSize++;
				currSize++;
				
			}// end else-if...
		}
		cout << "Data from the file is copied, select show option to view " << endl;
		
		inputFile.close();
		return 0;
}


int FavThingList::write_To_File(string filename){
	int i;

	// ofstream data type is used , if file is not exists , it will create by it self.
	ofstream outtoFile;
	outtoFile.open(filename, ios::app);

	if (!outtoFile)
	{
		cout << "ERRROR - file open failed!" << endl;
		return -1;
	}

	else
	{

		cout << " New file is created " << endl;
		for (i = 0; i < maxSize; i++)
		{
			outtoFile << items[i].getTitle() << " ";
			outtoFile << items[i].getDescription() << " ";
			outtoFile << items[i].getGameStore() << " ";
			outtoFile << items[i].getType() << " ";
			outtoFile << items[i].getProficiency() << " " << endl;
		}
	}
	outtoFile.close();
	return 0;

}