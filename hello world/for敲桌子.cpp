#include<iostream>
using namespace std;

int mainaaa() {

	/*for (int i = 1; i < 101; i++)
	{
		if (i%10==7|| i / 10 ==7 || i%7==0)
		{
			cout << "������" << i << endl;
		}
		else {
			cout << i << endl;
		}
	}*/

	// ��ӡ��ͼ
	/*for (int j = 1; j < 10; j++)
	{
	for (int i = 1; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;
	}*/

	// �˷���
	for (int j = 1; j < 10; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			cout << i << "*" << j << "=" << i * j << " ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}