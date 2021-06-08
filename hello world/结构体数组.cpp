#include<iostream>
using namespace std;

// 结构体数组
//1.定义
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

int mainarra() {

	//2.创建
	struct Student sArray[3] = 
	{
		 { "李1",19,80 },
		 { "李2",19,80 },
		 { "李3",19,80 }
	};

	//3.给结构体数组元素赋值
	sArray[2].name = "赵六";
	sArray[2].age = 27;

	//4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
	}

	system("pause");
	return 0;
}

