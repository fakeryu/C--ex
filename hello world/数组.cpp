#include<iostream>
using namespace std;

int mainarr() {

	// ����

	////1.�������� ������[ ���鳤�� ];
	//int arr[5];
	//arr[0] = 10;
	//arr[1] = 20;
	//arr[2] = 30;
	//arr[3] = 40;
	//arr[4] = 50;

	////2.�������� ������[ ���鳤�� ]={ 1��2��3};
	//// �����ʼ��ûȫ����д������0��ȫ
	//int arr[5] = { 10,20,30 };

	////3.�������� ������[ ]={ 1��2��3};
	//int arr[] = { 10,20,30,40,50 };


	int arr[5] = { 10,20,30,40,50 };
	cout << "��������ռ�ÿռ�" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ�ÿռ�" << sizeof(arr[0]) << endl;
	cout << "Ԫ�ظ���" << sizeof(arr)/sizeof(arr[0]) << endl;

	// �����׵�ַ
	cout << "�����׵�ַ" << arr << endl; // 16����
	cout << "�����׵�ַ" << (int)arr << endl; // תʮ����
	cout << "�����һ��Ԫ�ص�ַ" << (int)&arr[0] << endl;
	cout << "����ڶ���Ԫ�ص�ַ" << (int)&arr[1] << endl;

	// �������ǳ��� ���ɸ�ֵ;
	//arr = 100;

	// �����Ԫ��
	int arr2[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr2[i]>max)
		{
			max = arr2[i];
		}
	}
	cout << "���ص�" << max << endl; 

	// ʵ��reverse Ԫ������
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

	// ð��
	
	int arrm[] = { 1,3,5,6,7,3,2,1,4 };
	// �ܹ���������λ Ԫ�ظ��� - 1
	for (int i = 0; i < 9 - 1; i++)
	{
		// �ڲ�ѭ���Ա� ����= Ԫ�ظ��� -��ǰ����-1
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