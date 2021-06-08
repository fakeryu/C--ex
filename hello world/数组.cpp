#include<iostream>
using namespace std;

int mainarr() {

	// 数组

	////1.数据类型 数组名[ 数组长度 ];
	//int arr[5];
	//arr[0] = 10;
	//arr[1] = 20;
	//arr[2] = 30;
	//arr[3] = 40;
	//arr[4] = 50;

	////2.数据类型 数组名[ 数组长度 ]={ 1，2，3};
	//// 如果初始化没全部填写，会用0补全
	//int arr[5] = { 10,20,30 };

	////3.数据类型 数组名[ ]={ 1，2，3};
	//int arr[] = { 10,20,30,40,50 };


	int arr[5] = { 10,20,30,40,50 };
	cout << "整个数组占用空间" << sizeof(arr) << endl;
	cout << "每个元素占用空间" << sizeof(arr[0]) << endl;
	cout << "元素个数" << sizeof(arr)/sizeof(arr[0]) << endl;

	// 数组首地址
	cout << "数组首地址" << arr << endl; // 16进制
	cout << "数组首地址" << (int)arr << endl; // 转十进制
	cout << "数组第一个元素地址" << (int)&arr[0] << endl;
	cout << "数组第二个元素地址" << (int)&arr[1] << endl;

	// 数组名是常量 不可赋值;
	//arr = 100;

	// 找最大元素
	int arr2[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr2[i]>max)
		{
			max = arr2[i];
		}
	}
	cout << "最重的" << max << endl; 

	// 实现reverse 元素逆置
	int arr3[5] = { 1,3,2,5,4 };
	int end = sizeof(arr3) / sizeof(arr3[0]) - 1;
	for (int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++)
	{
		int temp = arr3[i];
		if (i < end)
		{
			arr3[i] = arr3[end];
			arr3[end] = temp;
			end--;
		}
		cout << arr3[i] << endl;
	}

	// 冒泡
	
	int arrm[] = { 1,3,5,6,7,3,2,1,4 };
	// 总共排序轮数位 元素个数 - 1
	for (int i = 0; i < 9 - 1; i++)
	{
		// 内层循环对比 次数= 元素个数 -当前轮数-1
		for (int j = 0; j < 9-i-1; j++)
		{
			if (arrm[j]> arrm[j+1])
			{
				int temp = arrm[j];
				arrm[j] = arrm[j + 1];
				arrm[j + 1] = temp;
				
			}
		}
	}
	for (int j = 0; j < 9; j++)
	{
		cout << arrm[j]<<" ";
	}
	cout << endl;

	system("pause");

	return 0;
}