#include<iostream>
using namespace std;

// 1.����ѧ���������ͣ����� ���� ����
// �Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
// �﷨ struct ��������  {  ��Ա�б�  }
struct Student
{
	//��Ա�б�
	
	// ����
	string name;
	// ����
	int age;
	// ����
	int score;
} s3; //˳�㴴���ṹ�����

// 2.ͨ��ѧ�����ʹ�������ѧ��
int mainjg() {

	// 2.1  struct Student s1;
	struct Student s1;  // ����ʱ struct����ʡ�� ������ʱ����
	// ��s1���Ը�ֵ,ͨ�����ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "name:" << s1.name <<"age:" << s1.age << "score:" << s1.score << endl;

	// 2.2  struct Student s2={ ... }; �ӳ�ʼֵ
	struct Student s2 = { "����",19,80 };
	cout << "name:" << s2.name << "age:" << s2.age << "score:" << s2.score << endl;

	// 2.3  �ڶ���ṹ��ʱ˳�㴴���ṹ�����
	s3.name = "��1";
	s3.age = 20;
	s3.score = 90;
	cout << "name:" << s3.name << "age:" << s3.age << "score:" << s3.score << endl;


	system("pause");
	return 0;
}

