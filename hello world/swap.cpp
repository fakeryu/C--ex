#include "swap.h"
#include<iostream>
using namespace std;

// º¯Êý¶¨Òå
void swap2(int n1, int n2) {

	int temp = n1;
	n1 = n2;
	n2 = temp;

	cout << "n1=" << n1 << endl;
	cout << "n2=" << n2 << endl;
}