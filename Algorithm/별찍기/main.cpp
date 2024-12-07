#include<iostream>

using namespace std;

int main()
{

	int item;

	cin >> item;

	for (int i = 0; i < item; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}



	return 0;

}