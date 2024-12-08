#include "Menu.h"
#include <map>
#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

//Menus search function, takes a map of strings an ints
void Menu::Search(map<string, int> itemRecord)
{
    //clears current console
    system("cls");

    //initializes a string variable called name
    string name;

    //asks for user input.
    cout << "Enter Item Name : ";

    //sets name to user input
    cin >> name;

    //if itemRecord contains what the user inputted.
    if (itemRecord.count(name) != 0) {
        //outputs the item and amount of occurrences
        cout << name << ": " << itemRecord.at(name) << endl;
    }

    //else output item not found.
    else
    {
        cout << "Item not found." << endl;
    }

    //pause and clear the console.
    system("pause");
    system("cls");
}

//Menus list function, takes a map of strings and ints.
void Menu::list(map<string, int> itemRecord)
{
    //clears the current console.
    system("cls");

    // for the number of items in itemRecord
    for (const auto& item : itemRecord) {

        //output itemRecords current item followed by its number and end the line.
        cout << item.first << " " << item.second << endl;
    }

    //pause followed by clear console
    system("pause");
    system("cls");
}

//public function listHistogram, takes a map of strings and ints.
void Menu::listHistogram(map<string, int> itemRecord)
{
    //for the number of items in item record
    for (const auto& item : itemRecord) {

        //initializes a string called histogram
        string histogram;

        //for the mount of occurances of an item in itemRecord
        for (int i = 0; i < item.second; i++) {

            //add a "*" to the histogram
            histogram.append("*");

        }
        //out put the current items name and histogram.
        cout << item.first << " " << histogram << endl;
    }

    //pause and clear console.
    system("pause");
    system("cls");
}


//Menus menu function, takes a map of strings and ints.
void Menu::menu(map<string, int> itemRecord)
{
    //initializes an int called selection to 0
    int selection = 0;

    // while selection does not equal exit selection.
    while (selection != 4) {

        //clear the console
        system("cls");

        // out put the selectable options.
        cout << "Select an Option" << endl << "1 : Search by Name" << endl << "2 : List All" << endl << "3 : List Histogram" << endl << "4 : Exit" << endl;

        // set selection as user inputted selection.
        cin >> selection;

        //if user selected search, start search function.
        if (selection == 1)
        {
            Menu::Search(itemRecord);
        }
        //if user selection list, start list function.
        if (selection == 2)
        {
            Menu::list(itemRecord);
        }
        //if user selected list histogram, start listHistogram function.
        if (selection == 3)
        {
            Menu::listHistogram(itemRecord);
        }

    }
}
