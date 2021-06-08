#include<iostream>
using namespace std;

int mainpoin() {

	// 1.定义指针
	int a = 10;

	// 指针定义语法; 数据类型 * 指针变量名；
	int* p;

	// 让指针记录变量a地址
	p = &a; // &取值符

	// 32位都是4个字节不管是声明数据类型
	// 64位都是 8个字节
	cout << "sizeof(p)为" << sizeof(int*) << endl;

	cout << "a`s adress：" << &a << endl;
	cout << "p为" << p << endl;

	// 2.使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加* 代表解引用，找到指针指向的数据
	*p = 1000;
	cout << "*p为" << a << endl;
	cout << "*p为" << *p << endl;

	system("pause");
	return 0;
}

