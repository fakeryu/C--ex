#include<iostream>
using namespace std;

// 函数的声明
// 比较函数，实现两个整型数字及逆行比较，返回较大的值

// 声明   声明可以多次 但是定义只能一次
int max(int a, int b);


// 函数定义 如果没有声明，需要在main前

int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

// 形参改变不会影响实参
void swap(int n1,int n2) {

	int temp = n1;
	n1 = n2;
	n2 = temp;

}

int mainde() {
	int a = 10;
	int b = 20;

	int sum = add(a, b);

	cout << sum << endl;


	system("pause");
	return 0;
}

//定义
int max(int a, int b) {
	return a > b ? a : b;
}