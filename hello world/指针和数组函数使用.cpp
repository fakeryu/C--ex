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

	// ����1�����׵�ַ ����2 ����
	void bubbleSort(int *arr,int len) {
		for (int i = 0; i < len-1; i++)
		{
			for (int j = 0; j < len-i-1; j++)
			{
				// ��� j>j+1�߽���
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


	cout << "��һ����" << arr[0] << endl;

	int* p3 = arr;

	cout << "��һ����" << *p3 << endl;

	p3++; //�����4���ֽ�

	cout << "�ڶ�����" << *p3 << endl;

	cout << "ָ���������" << endl;
	int* p2 = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}

	// ָ��ͺ���
	int a = 10;
	int b = 20;
	// 1.ֵ����
	swap6(a, b);

	// 2.��ֵ����
	//����ǵ�ַ���ݣ����Ըı�ʵ��
	swap7(&a, &b);

	// 1 ��������
	int arr2[10] = { 4,3,6,9,1,2,10,8,7,5 };
	// ���鳤��
	int len = sizeof(arr2) / sizeof(arr2[0]);
	// 2.������ʵ��ð��
	bubbleSort(arr2, len);
	// 3.��ӡ���������
	printData(arr2, len);

	system("pause");
	return 0;
}

