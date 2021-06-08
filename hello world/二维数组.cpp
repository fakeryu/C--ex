#include<iostream>
using namespace std;

int maingr() {

	// 二维数组

	// 1. 数据类型 数组名[行数][列数];
	int arr[2][3];
	
	// 2. 数据类型 数组名[行数][列数]={{1，2},{3，4}}
	int arr2[2][3] = {
		{1,2,3},
		{4,5,6}
	};

    // 3. 数据类型 数组名[行数][列数]={1，2,3，4}
	int arr3[2][3] = {
	1,2,3,4,5,6
	};

	// 4. 数据类型 数组名[][列数]={1，2,3，4}
	int arr4[][3] = {
	1,2,3,4,5,6
	};

	// 二维数组名称用途
	//1.查看占内存空间大小
	int arrt[2][3] = {
	{1,2,3},
	{4,5,6}
	};
	// 行
	cout << "二维数组行数为:" << sizeof(arr) / sizeof(arr[0])<< endl; //sizeof(arr[0]) 一行占空间
	// 列
	cout << "二维数组列数为:" << sizeof(arr[0]) / sizeof(arr[0][0])<< endl; //sizeof(arr[0]) 第一个元素占空间

	//1.查看首地址
	cout << "二维数组首地址为:" << (int)arr << endl;
	cout << "二维数组第一行首地址为:" << (int)arr[0] << endl;
	cout << "二维数组第二行首地址为:" << (int)arr[1] << endl;



	// 案例
	int grade[3][3] = { 100,100,100,90,50,100,60,70,80 };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += grade[i][j];
			  cout << grade[i][j]<<" ";
		}
		cout <<"总分" <<sum << endl;
	}

	system("pause");

	return 0;
}