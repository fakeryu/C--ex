#include<iostream>
using namespace std;

//�ṹ��ָ��
// �ṹ��
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
	// ��ƽṹ��

	// ����������Ӣ��
	struct Hero heroArray[5] = {
		{"С1",23,"��"},
		{"С2",22,"��"},
		{"С3",20,"��"},
		{"С4",21,"��"},
		{"С5",19,"Ů"},
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	/*for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << "����:" << heroArray[i].age << "�Ա�:" << heroArray[i].sex << endl;
	}*/

	// ����
	bubbleSort(heroArray, len);

	// ��ӡ
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << "����:" << heroArray[i].age << "�Ա�:" << heroArray[i].sex << endl;
	}

	system("pause");
	return 0;
}

