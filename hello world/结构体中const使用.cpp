#include<iostream>
using namespace std;

//结构体指针
// 结构体
struct Student
{
	//成员列表

	// 姓名
	string name;
	// 年龄
	int age;
	// 分数
	int score;
};

// 将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStu(const Student *s) {
	//s->age = 15; // const修饰 无法修改 防止 误操作
	cout << endl;
}

int mainconst() {

	// 创建结构体变量
	struct Student s = { "长三",18,100 };

	printStu(&s);

	system("pause");
	return 0;
}

