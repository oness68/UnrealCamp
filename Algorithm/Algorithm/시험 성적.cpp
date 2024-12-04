#include <iostream>

using namespace std;

int main()
{
	int item;

	cin >> item;
	
	if (100 >= item && item >= 90)
		cout << "A";
	else if (89 >= item && item >= 80)
		cout << "B";
	else if (79 >= item && item >= 70)
		cout << "C";
	else if (69 >= item && item >= 60)
		cout << "D";
	else
		cout << "F";

	return 0;
}

