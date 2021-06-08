#include<iostream>
using namespace std;

int mainaaa() {

	/*for (int i = 1; i < 101; i++)
	{
		if (i%10==7|| i / 10 ==7 || i%7==0)
		{
			cout << "敲桌子" << i << endl;
		}
		else {
			cout << i << endl;
		}
	}*/

	// 打印星图
	/*for (int j = 1; j < 10; j++)
	{
	for (int i = 1; i < 10; i++)
	{
		cout << "* ";
	}
	cout << endl;
	}*/

	// 乘法表
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