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

	//// ����ڷκ��� �Է� �ޱ�
	//cout << "���̾Ƹ���� ũ�⸦ �Է��ϼ��� (���� ����): ";
	//cin >> n;

	//// �Է°� ����
	//if (n <= 0) {
	//	cout << "�߸��� �Է��Դϴ�. ���� ������ �Է��ϼ���." << endl;
	//	return 1;
	//}

	//// ���̾Ƹ�� ��� ���
	//for (int i = 1; i <= n; ++i) {
	//	// ���� ���
	//	for (int j = 1; j <= n - i; ++j) {
	//		cout << " ";
	//	}
	//	// �� ���
	//	for (int k = 1; k <= 2 * i - 1; ++k) {
	//		cout << "*";
	//	}
	//	cout << endl; // �� �ٲ�
	//}

	//// ���̾Ƹ�� �ϴ� ���
	//for (int i = n - 1; i >= 1; --i) {
	//	// ���� ���
	//	for (int j = 1; j <= n - i; ++j) {
	//		cout << " ";
	//	}
	//	// �� ���
	//	for (int k = 1; k <= 2 * i - 1; ++k) {
	//		cout << "*";
	//	}
	//	cout << endl; // �� �ٲ�
	//}

	return 0;
}