#include<iostream>
using namespace std;

// Ƕ�׽�����������
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

// ��ӡѧ����Ϣ����
// 1.ֵ����
void printAll(struct Student s) {
	s.age = 100;
	cout << s.name << "�Ӻ��� " << s.age << "�Ӻ��� " << s.score << endl;
}
// 2.��ַ����
void printAll2(struct Student *p) {
	p->age = 180;
	cout << p->name << "ָ�� " << p->age << "ָ�� " << p->score << endl;
}

int mainhsz() {

	// �����ṹ�����
	struct Student s;
	s.name = 123;
	s.age = 20;
	s.score = 80;


	printAll(s); //���ı�ʵ��
	printAll2(&s);//�ı�ʵ��
	cout << s.name << " " << s.age << " " << s.score << endl;

	system("pause");
	return 0;
}

