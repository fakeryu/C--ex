#include<iostream>
using namespace std;

//�ṹ��ָ��
// �ṹ��
struct Student
{
	// ����
	string sName;
	// ����
	int score;
};

struct Teacher
{
	// ����
	string tName;
	// ѧ������
	struct Student sArray[5];
};

void allocateSpace(struct Teacher tArray[], int len) {
	string nameSeed = "ABCDE";
	// ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		for (int j = 0; j < 5; j++)
		{
			int scored = rand() % 61 + 40;
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			tArray[i].sArray[j].score = scored;
		}
	}

}

void printInfo(struct Teacher tArray[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ��" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "studentname:" << tArray[i].sArray[j].sName <<
				"studentscore:" << tArray[i].sArray[j].score << endl;
		}
	}
}

int mainal1() {
	// ���������
	srand((unsigned int)time(NULL));
	// ����������ʦ����
	struct Teacher tArray[3] = {};
	// ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	// ��ӡ
	printInfo(tArray, len);

	system("pause");
	return 0;
}

