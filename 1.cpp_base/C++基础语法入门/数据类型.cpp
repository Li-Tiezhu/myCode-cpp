#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	cout << "请输入一个整数：" << endl;
	int begin=100,b;
	int shuiXianHua = 0;
	cout << "三位数的水仙花数有：" << endl;
	while (begin <= 999)
	{
		b = begin;
		shuiXianHua = 0;
		while (b != 0)
		{
			shuiXianHua += pow((b % 10), 3);
			b /= 10;
		}
		if (shuiXianHua == begin)
			cout << begin << "\r" << endl;
		begin++;
	}
	cout << "\n" << endl;
	system("pause");
}