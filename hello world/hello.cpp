#include<iostream>
using namespace std;

// �����Ķ��巽ʽ
//1. #define �곣��
//2. const ���εı���

//1. #define�곣��
#define Day 7

// ��ʶ������
// 1. ��ʶ���������ǹؼ��� 2.��ʶ��������ĸ�����»��߹��� 3. ��ʶ����һ���ַ�ֻ������ĸ���»��� 4.��ʶ�������ִ�Сд��


int main2() {

	// ����
	int a = 10;

	//cout << "a=" << a << endl;
	cout << "һ����" << Day << "��" << endl;

	// 2.const����
	const int month = 12;

	// 1.������(-32768 ~ 32768)
	short num1 = 10;

	// 2.����
	int num2 = 10;

	// 3.������
	long num3 = 10;

	// 4.��������

	long long num4 = 10;

	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
	cout << "num3:" << num3 << endl;
	cout << "num4:" << num4 << endl;

	system("pause");


	return 0;
}