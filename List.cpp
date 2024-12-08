#include "List.h"
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <fstream>
#include <iostream>

//Lists count function, takes a vector and returns a map.
map<string, int> List::count(vector<string> inputVector)
{

    //creates a map called itemRecord which consists of strings and ints.
    map<string, int> itemRecord;

    //for loop, starting at 0 and iterates until reaches the input vectors size.
    for (int i = 0; i < inputVector.size(); i++) 
    {

        //If itemRecord doesnt have any occurrences of the string currently being interated through
        // from input file.
        if (itemRecord.count(inputVector.at(i)) == 0) 
        {
            //adds the current string to itemRecord with a value of 1.
            itemRecord.emplace(inputVector.at(i), 1);
        }

        //else there is an occurrence of input files current string in itemRecord.
        else 
        {
            //increases the amount of the times the current string has been seen in the input file.
            itemRecord.at(inputVector.at(i)) = itemRecord.at(inputVector.at(i)) + 1;
        }
    }

    //returns the map itemRecord.
    return itemRecord;

}

//Public function of List called input File, Returns a vector of strings.
vector<string> List::inputFile()
{

    //creates a instance of ifstream called input file.
    ifstream inputFile;

    //attempts to open "CS210_Project_Three_Input_File.txt"
    inputFile.open("CS210_Project_Three_Input_File.txt");

    //creates a vector of strings called list.
    vector<string> list;

    // Check if the file is successfully opened.
    if (inputFile.is_open()) 
    {
        //creates a string variable called line.
        std::string line;

        // Read each line from the file.
        while (std::getline(inputFile, line)) 
        {
            //add line into list
            list.push_back(line);
        }

        //close inputFile once all lines are read.
        inputFile.close(); // Close the file
        
    }

    //else inputFiles didnt open.
    else 
    {
        //throws error openeing file and pauses.
        cerr << "Error opening file!" << endl;
        system("pause");
    }

    //returns vector list
    return list;
    
}

//public backup function which takes a map of strings and ints.
void List::backup(map<string, int> itemRecord)
{
    //creates an ofstream instance called backup.
    ofstream backup;

    //creates / opens the file "frequency.dat"
    backup.open("frequency.dat");

    // for every item in item record.
    for (const auto& item : itemRecord) 
    {
        // write the name and number of occurrences to the backup.
        backup << item.first << " " << item.second << endl;

    }
}
