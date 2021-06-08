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

int mainjgzz() {

	// 创建结构体变量
	struct Student s = { "长三",18,100 };
	// 通过指针指向结构体变量
	struct Student *p = &s;

	// 通过指针访问结构体变量中数据  需要”->“操作符访问
	cout << p->age <<endl;



	system("pause");
	return 0;
}

