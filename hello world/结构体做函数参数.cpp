#include<iostream>
using namespace std;

// 嵌套结做函数参数
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

// 打印学生信息函数
// 1.值传递
void printAll(struct Student s) {
	s.age = 100;
	cout << s.name << "子函数 " << s.age << "子函数 " << s.score << endl;
}
// 2.地址传递
void printAll2(struct Student *p) {
	p->age = 180;
	cout << p->name << "指针 " << p->age << "指针 " << p->score << endl;
}

int mainhsz() {

	// 创建结构体变量
	struct Student s;
	s.name = 123;
	s.age = 20;
	s.score = 80;


	printAll(s); //不改变实参
	printAll2(&s);//改变实参
	cout << s.name << " " << s.age << " " << s.score << endl;

	system("pause");
	return 0;
}

