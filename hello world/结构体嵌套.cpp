#include<iostream>
using namespace std;

// Ƕ�׽ṹ��
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

struct Teacher {
	int id;
	string name;
	int age;
	struct Student stu;
};

int mainqt() {

	// �����ṹ�����
	struct Teacher t;
	t.id = 10000;
	t.name = "��";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << t.stu.name << endl;



	system("pause");
	return 0;
}

