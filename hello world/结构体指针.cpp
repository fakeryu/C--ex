#include<iostream>
using namespace std;

//�ṹ��ָ��
// �ṹ��
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

int mainjgzz() {

	// �����ṹ�����
	struct Student s = { "����",18,100 };
	// ͨ��ָ��ָ��ṹ�����
	struct Student *p = &s;

	// ͨ��ָ����ʽṹ�����������  ��Ҫ��->������������
	cout << p->age <<endl;



	system("pause");
	return 0;
}

