#include<iostream>
using namespace std;

// �ṹ������
//1.����
struct Student
{
	//��Ա�б�

	// ����
	string name;
	// ����
	int age;
	// ����
	int score;
};

int mainarra() {

	//2.����
	struct Student sArray[3] = 
	{
		 { "��1",19,80 },
		 { "��2",19,80 },
		 { "��3",19,80 }
	};

	//3.���ṹ������Ԫ�ظ�ֵ
	sArray[2].name = "����";
	sArray[2].age = 27;

	//4.�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
	}

	system("pause");
	return 0;
}

