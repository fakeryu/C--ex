#include<iostream>
using namespace std;

// 嵌套结构体
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

struct Teacher {
	int id;
	string name;
	int age;
	struct Student stu;
};

int mainqt() {

	// 创建结构体变量
	struct Teacher t;
	t.id = 10000;
	t.name = "王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << t.stu.name << endl;



	system("pause");
	return 0;
}

