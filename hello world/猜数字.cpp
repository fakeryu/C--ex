#include<iostream>
using namespace std;

int maijn() {

	// 添加随机数种子 作用利用当前系统时间生成随机数 防止每次随机数一样

	srand((unsigned int)time(NULL));

	// 1.生成随机数
	
	int num = rand() % 100 + 1; // rand()%100 +1 生成0+1~99+1随机数
	//cout << num << endl;
	// 
	// 2.猜测数字
	int val = 0; //输入
	cout << "输入" << endl;

	// 3.判断
	while (true)
	{
		cin >> val;

		if (val > num)
		{
			cout << "大了" << endl;
		}
		else if (val < num)
		{
			cout << "小了" << endl;
		}
		else {
			cout << "对了" << endl;
			break;
		}
	}

	//猜对 退出
	//猜错 提示结果大或小

	system("pause");

	return 0;
}