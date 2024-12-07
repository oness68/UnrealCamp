#include<iostream>

using namespace std;

//A+B
// 
//int main()
//{
//	int A, B;
//
//	cin >> A >> B;
//
//	cout << A + B;
//
//	return 0;
//}
//
// 
// A-B
//int main()
//{
//	int A, B;
//
//	cin >> A >> B;
//
//	cout << A - B;
//
//	return 0;
//}

//A/B
int main()
{
	double A, B;

	cin >> A >> B;

	if (A > 0 && B < 10)
	{
		
		cout << fixed;
		cout.precision(12);
		cout << A/B;
	}
	

	return 0;
}