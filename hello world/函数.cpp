#include<iostream>
using namespace std;

// ����������
// �ȽϺ�����ʵ�������������ּ����бȽϣ����ؽϴ��ֵ

// ����   �������Զ�� ���Ƕ���ֻ��һ��
int max(int a, int b);


// �������� ���û����������Ҫ��mainǰ

int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

// �βθı䲻��Ӱ��ʵ��
void swap(int n1,int n2) {

	int temp = n1;
	n1 = n2;
	n2 = temp;

}

int mainde() {
	int a = 10;
	int b = 20;

	int sum = add(a, b);

	cout << sum << endl;


	system("pause");
	return 0;
}

//����
int max(int a, int b) {
	return a > b ? a : b;
}