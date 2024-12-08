#include <map>
#include <string>
#include <vector>
#include <map>
using namespace std;

//Class menu which houses the menu functions.
class Menu
{
public:

	//public function search, searches for a specific item and returns the number of occurrences
	void Search(map<string, int> itemRecord);

	//public function list, lists all items and number of occurrences of that item
	void list(map<string, int> itemRecord);

	//public function listHistogram, lists items and a histogram of occurrences
	void listHistogram(map<string, int> itemRecord);

	//public function menu, main selection menu
	void menu(map<string, int> itemRecord);
};

