#include<iostream>
using namespace std;

//���������1�ĸ���
//1.��λ�жϣ������Ӽ�
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
//2.���ٷ�
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