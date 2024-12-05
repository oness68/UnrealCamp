#include <iostream>

using namespace std;
//문제
//시험 점수를 입력받아 90 ~100점은 A, 80 ~89점은 B, 70 ~79점은 C, 60 ~69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

//입력
//첫째 줄에 시험 점수가 주어진다.시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
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


