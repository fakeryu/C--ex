#include<iostream>
using namespace std;

int main4() {

	//1.�ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;
	//2.�ַ��ͱ�����ռ�ڴ��С
	cout << "��ռ�ڴ��С:" << sizeof(char) << endl;

	//3.�ַ��ͱ�����������
	// char ch2 = "b"; // Ҫ�õ�����
	// char ch2 = 'abcdef'; // ֻ����һ���ַ�

	//4.�ַ��ͱ�����ӦASCII����
	// a-97 
	// A-65
	cout << (int)ch << endl;

	system("pause");

	return 0;
}