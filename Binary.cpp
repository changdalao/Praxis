#include<iostream>
using namespace std;

//求二进制中1的个数
//1.移位判断，计数加加
int BitCount1(int num)
{
	int count = 0;
	while (num != 0)
	{
		if ((num & 0x01) == 1)
			count++;
		num=num >> 1;
	}
	return count;
}
//2.快速法
int BitCount(int num)
{
	int count = 0;
	while (num != 0)
	{
		num = num & (num - 1);
		count++;
	}
	return count;
}
int main()
{
	cout << BitCount(7) << endl;
	system("pause");
	return 0;
}
