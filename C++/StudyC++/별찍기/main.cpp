#include<iostream>


using namespace std;


int main()
{
	int scale;
	int center;
	int start, end;
	bool oddnumber=false;
	bool half=false;
	cin >> scale;

	center = scale / 2 ;

	if (scale % 2 == 1)
	{
		center++;
		oddnumber = true;
		start = center;
		end = center;
	}
	else
	{
		oddnumber = false;
		start = center;
		end = center+1;
	}

	for (int i = 0; i < scale ; i++)
	{
		for (int j = 1; j <= scale; j++)
		{

			if (j >= start && j <= end)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		
		if (start == 1)
		{
			half = true;
		}

		if (!half)
		{
			start--;
			end++;
		}
		else
		{
			start++;
			end--;
		}

		cout << endl;
	}
	


	//int n;

	//// 사용자로부터 입력 받기
	//cout << "다이아몬드의 크기를 입력하세요 (양의 정수): ";
	//cin >> n;

	//// 입력값 검증
	//if (n <= 0) {
	//	cout << "잘못된 입력입니다. 양의 정수를 입력하세요." << endl;
	//	return 1;
	//}

	//// 다이아몬드 상단 출력
	//for (int i = 1; i <= n; ++i) {
	//	// 공백 출력
	//	for (int j = 1; j <= n - i; ++j) {
	//		cout << " ";
	//	}
	//	// 별 출력
	//	for (int k = 1; k <= 2 * i - 1; ++k) {
	//		cout << "*";
	//	}
	//	cout << endl; // 줄 바꿈
	//}

	//// 다이아몬드 하단 출력
	//for (int i = n - 1; i >= 1; --i) {
	//	// 공백 출력
	//	for (int j = 1; j <= n - i; ++j) {
	//		cout << " ";
	//	}
	//	// 별 출력
	//	for (int k = 1; k <= 2 * i - 1; ++k) {
	//		cout << "*";
	//	}
	//	cout << endl; // 줄 바꿈
	//}

	return 0;
}