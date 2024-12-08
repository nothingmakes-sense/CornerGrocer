#pragma once
#include <map>
#include <string>
#include <vector>
#include <map>

using namespace std;

//Creates a List class
class List
{
public:

	//Public function count, counts how many times an item appears.
	map<string, int> count(vector<string> inputVector);

	//public function inputFile, opens and returns the input file.
	static vector<string> inputFile();

	//public function backup. Backs up the counted input file.
	void backup(map<string, int> itemRecord);

private:


};

