#include<iostream>
using namespace std;

int mainss() {
	
	// ѡ��ṹ ����if���
	// �û���������������������600����Ϊ����һ����ѧ������Ļ�����

	//// 1.�û��������
	//int score = 0;
	//cout << "���������" << endl;
	//cin >> score;
	////2 .��ӡ�û��������
	//cout << "���������Ϊ:" << score << endl;

	////3. �ж��Ƿ����600
	//if (score>600)
	//{
	//	cout << "��ϲ����һ��" << endl;
	//}

	// whileѭ��
	// ��ӡ0~9
	int num = 0;
	while (num<=9)
	{
		cout << "��ӡ:"<< num << endl;
		num++;
	}


	system("pause");

	return 0;
}