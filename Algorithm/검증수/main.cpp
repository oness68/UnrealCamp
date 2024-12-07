#include<iostream>

using namespace std;


int main()
{
	int a[5];
	int sum=0;
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

	for (int i=0; i < 5; i++)
	{
		a[i] = a[i]*a[i];

		sum += a[i];
	}
	cout << sum % 10;




	return 0;
}