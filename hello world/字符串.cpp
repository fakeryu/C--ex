#include<iostream>
// #include<string>
using namespace std;

int mains() {

	// 1.C风格字符串
	// 注意事项 char 字符串名[] = ""
	char str[] = "hello world";
	cout << str << endl;

	// 2.C++风格字符串
	string str2 = "hello world";
	cout << str2 << endl;

	system("pause");

	return 0;
}