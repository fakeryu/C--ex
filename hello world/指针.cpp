#include<iostream>
using namespace std;

int mainpoin() {

	// 1.����ָ��
	int a = 10;

	// ָ�붨���﷨; �������� * ָ���������
	int* p;

	// ��ָ���¼����a��ַ
	p = &a; // &ȡֵ��

	// 32λ����4���ֽڲ�����������������
	// 64λ���� 8���ֽ�
	cout << "sizeof(p)Ϊ" << sizeof(int*) << endl;

	cout << "a`s adress��" << &a << endl;
	cout << "pΪ" << p << endl;

	// 2.ʹ��ָ��
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//ָ��ǰ��* ��������ã��ҵ�ָ��ָ�������
	*p = 1000;
	cout << "*pΪ" << a << endl;
	cout << "*pΪ" << *p << endl;

	system("pause");
	return 0;
}

