#include<iostream>
using namespace std;

// 常量的定义方式
//1. #define 宏常量
//2. const 修饰的变量

//1. #define宏常量
#define Day 7

// 标识符命名
// 1. 标识符不可以是关键字 2.标识符是由字母数字下划线构成 3. 标识符第一个字符只能是字母或下划线 4.标识符是区分大小写的


int main2() {

	// 变量
	int a = 10;

	//cout << "a=" << a << endl;
	cout << "一周有" << Day << "天" << endl;

	// 2.const修饰
	const int month = 12;

	// 1.短整型(-32768 ~ 32768)
	short num1 = 10;

	// 2.整型
	int num2 = 10;

	// 3.长整型
	long num3 = 10;

	// 4.长长整型

	long long num4 = 10;

	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
	cout << "num3:" << num3 << endl;
	cout << "num4:" << num4 << endl;

	system("pause");


	return 0;
}