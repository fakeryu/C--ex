#include<iostream>
using namespace std;

// 1.创建学生数据类型：姓名 年龄 分数
// 自定义数据类型，一些类型集合组成的一个类型
// 语法 struct 类型名称  {  成员列表  }
struct Student
{
	//成员列表
	
	// 姓名
	string name;
	// 年龄
	int age;
	// 分数
	int score;
} s3; //顺便创建结构体变量

// 2.通过学生类型创建具体学生
int mainjg() {

	// 2.1  struct Student s1;
	struct Student s1;  // 创建时 struct可以省略 ，定义时不行
	// 给s1属性赋值,通过访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "name:" << s1.name <<"age:" << s1.age << "score:" << s1.score << endl;

	// 2.2  struct Student s2={ ... }; 加初始值
	struct Student s2 = { "李四",19,80 };
	cout << "name:" << s2.name << "age:" << s2.age << "score:" << s2.score << endl;

	// 2.3  在定义结构体时顺便创建结构体变量
	s3.name = "张1";
	s3.age = 20;
	s3.score = 90;
	cout << "name:" << s3.name << "age:" << s3.age << "score:" << s3.score << endl;


	system("pause");
	return 0;
}

