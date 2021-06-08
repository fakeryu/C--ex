#include<iostream>
using namespace std;

//结构体指针
// 结构体
struct Hero
{
	string name;

	int age;

	string sex;
};

void bubbleSort(struct Hero hArray[], int len) {
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (hArray[j].age > hArray[j + 1].age)
			{
			struct Hero temp = hArray[j];
			hArray[j] = hArray[j+1];
			hArray[j+1] = temp;
			}
		}
	}
}

int main() {
	// 设计结构体

	// 创建数组存放英雄
	struct Hero heroArray[5] = {
		{"小1",23,"男"},
		{"小2",22,"男"},
		{"小3",20,"男"},
		{"小4",21,"男"},
		{"小5",19,"女"},
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	/*for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroArray[i].name << "年龄:" << heroArray[i].age << "性别:" << heroArray[i].sex << endl;
	}*/

	// 排序
	bubbleSort(heroArray, len);

	// 打印
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroArray[i].name << "年龄:" << heroArray[i].age << "性别:" << heroArray[i].sex << endl;
	}

	system("pause");
	return 0;
}

