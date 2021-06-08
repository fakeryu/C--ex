#include<iostream>
using namespace std;

void swap6(int p1,int p2) {
	int temp =p1;
	p1 =p2;
	p2 = temp;
}

	void swap7(int *p1,int*p2){
		int temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}

	// 参数1数组首地址 参数2 长度
	void bubbleSort(int *arr,int len) {
		for (int i = 0; i < len-1; i++)
		{
			for (int j = 0; j < len-i-1; j++)
			{
				// 如果 j>j+1者交换
				if (arr[j]>arr[j+1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	void printData(int* arr, int len) {
		for (int i = 0; i < len; i++)
		{
			cout << arr[i] << endl;
		}
	}

int mainzzf() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };


	cout << "第一个：" << arr[0] << endl;

	int* p3 = arr;

	cout << "第一个：" << *p3 << endl;

	p3++; //向后移4个字节

	cout << "第二个：" << *p3 << endl;

	cout << "指针遍历数组" << endl;
	int* p2 = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}

	// 指针和函数
	int a = 10;
	int b = 20;
	// 1.值传递
	swap6(a, b);

	// 2.地值传递
	//如果是地址传递，可以改变实参
	swap7(&a, &b);

	// 1 创建数组
	int arr2[10] = { 4,3,6,9,1,2,10,8,7,5 };
	// 数组长度
	int len = sizeof(arr2) / sizeof(arr2[0]);
	// 2.函数，实现冒泡
	bubbleSort(arr2, len);
	// 3.打印排序后数组
	printData(arr2, len);

	system("pause");
	return 0;
}

