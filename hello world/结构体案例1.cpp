#include<iostream>
using namespace std;

//结构体指针
// 结构体
struct Student
{
	// 姓名
	string sName;
	// 分数
	int score;
};

struct Teacher
{
	// 姓名
	string tName;
	// 学生数组
	struct Student sArray[5];
};

void allocateSpace(struct Teacher tArray[], int len) {
	string nameSeed = "ABCDE";
	// 赋值
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
		cout << "老师：" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "studentname:" << tArray[i].sArray[j].sName <<
				"studentscore:" << tArray[i].sArray[j].score << endl;
		}
	}
}

int mainal1() {
	// 随机数种子
	srand((unsigned int)time(NULL));
	// 创建三名老师数组
	struct Teacher tArray[3] = {};
	// 通过函数给3明老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	// 打印
	printInfo(tArray, len);

	system("pause");
	return 0;
}

