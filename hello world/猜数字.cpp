#include<iostream>
using namespace std;

int maijn() {

	// ������������ �������õ�ǰϵͳʱ����������� ��ֹÿ�������һ��

	srand((unsigned int)time(NULL));

	// 1.���������
	
	int num = rand() % 100 + 1; // rand()%100 +1 ����0+1~99+1�����
	//cout << num << endl;
	// 
	// 2.�²�����
	int val = 0; //����
	cout << "����" << endl;

	// 3.�ж�
	while (true)
	{
		cin >> val;

		if (val > num)
		{
			cout << "����" << endl;
		}
		else if (val < num)
		{
			cout << "С��" << endl;
		}
		else {
			cout << "����" << endl;
			break;
		}
	}

	//�¶� �˳�
	//�´� ��ʾ������С

	system("pause");

	return 0;
}