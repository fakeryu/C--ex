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

// �������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStu(const Student *s) {
	//s->age = 15; // const���� �޷��޸� ��ֹ �����
	cout << endl;
}

int mainconst() {

	// �����ṹ�����
	struct Student s = { "����",18,100 };

	printStu(&s);

	system("pause");
	return 0;
}

