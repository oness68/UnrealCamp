#include<iostream>

using namespace std;


int main()
{
	int n;

	cin >> n;

	for (int item = 1; item <= 9; item++)
	{
		cout << n << " * " << item << " = " << n * item << endl;
	}




	return 0;
}