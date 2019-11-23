#include <iostream>
#include <string>
#include "FavThing.h"
#include "FavThingList.h"
using namespace std;

int main()
{
	FavThingList ft;
	int choice = 0;
	string path;
	cout << endl;
	cout << "   --------------------------------------------------------------------   " << endl;
	cout << "  *** We are going to keep track of one of your Favourite Things *** " << endl;
	cout << "          ***  Welcome To Your Favourite Thing List  ***        " << endl;
	cout << "   --------------------------------------------------------------------  " << endl;
	cout << endl;
	
	do {
		cout << "1. Read List" << endl;
		cout << "2. Add Item" << endl;
		cout << "3. Show List" << endl;
		cout << "4. Save List" << endl;
		cout << "5. Exit " << endl;
		cout << "Enter Choice:" << endl;
		cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "Enter proper Path of file you want to read: ";
				cin >> path;
				ft.read_From_File(path);
				break;
			case 2:
				ft.AddNewItem();
				break;
			case 3:
				ft.showList();
				break;
			case 4:
				cout << " Enter Path of file in which you want to write: ";
				cin >> path;
				ft.write_To_File(path);
				break;
			case 5:
				break;

			default:
				cout << "please enter valid number " << endl;
				break;
			}// end swithch
	
		
	} while (choice != 5);

	//End of DO-While Statment...


	cout << endl;
	system("pause");
	return 0;

}// end of main Function...