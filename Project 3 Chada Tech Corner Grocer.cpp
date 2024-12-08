// Project 3 Chada Tech Corner Grocer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "List.h"
#include "Menu.h"
#include <vector>


using namespace std;

//main function, program starts and ends here.
int main()
{
    //initializes an instance of List called fromFile.
    List fromFile;

    //backs up the item record.
    fromFile.backup(fromFile.count(fromFile.inputFile()));

    //initializes an instance of Menu called menu.
    Menu menu;

    //uses the Menus menu function with the input itemRecord.
    menu.menu(fromFile.count(fromFile.inputFile()));

    //exits the program with code 0
    return 0;

}
