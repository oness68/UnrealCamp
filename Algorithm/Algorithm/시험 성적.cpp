#include <iostream>

using namespace std;
//����
//���� ������ �Է¹޾� 90 ~100���� A, 80 ~89���� B, 70 ~79���� C, 60 ~69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

//�Է�
//ù° �ٿ� ���� ������ �־�����.���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.
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


