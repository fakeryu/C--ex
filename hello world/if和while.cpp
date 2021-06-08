#include<iostream>
using namespace std;

int mainss() {
	
	// 选择结构 单行if语句
	// 用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出

	//// 1.用户输入分数
	//int score = 0;
	//cout << "请输入分数" << endl;
	//cin >> score;
	////2 .打印用户输入分数
	//cout << "您输入分数为:" << score << endl;

	////3. 判断是否大于600
	//if (score>600)
	//{
	//	cout << "恭喜考上一本" << endl;
	//}

	// while循环
	// 打印0~9
	int num = 0;
	while (num<=9)
	{
		cout << "打印:"<< num << endl;
		num++;
	}


	system("pause");

	return 0;
}