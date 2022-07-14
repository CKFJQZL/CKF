#include<stdio.h>
/*int main()
* //输出一个矩阵的主对角线之和。
{//ckf
	int i, j;
	int a[4][4];
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 4;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int sum = 0;
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 4;j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
				break;
			}
		}
	}
	printf("%d", sum);
	return 0;
}*/
//1,写一个加法程序，输入整数a b，输出他们的和。
/*int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = 0;
	sum = a + b;
	printf("%d", sum);
	return 0;
}*/
//2,实现2个数的对调。
/*int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
	return 0;
}*/
//3,已知某商品单价为30，数量为x。求商品的总价钱。用宏定义物品单价。
/*int main()
{
	int x = 0, c = 0;
	//scanf("%d", &x);
	c = x * 30;
	printf("%d", c);
	return 0;
}*/
//4,输入一个三位数，输出该数字的百位，十位，个位，数字之间用一个空格隔开。
/*int main()
{
	int a, b, c, d, e;
	scanf("%d", &a);
	b = a / 100;
	c = a % 100;
	d = c / 10;
	e = c % 10;
	printf("%d %d %d", b, d, e);
	return 0;
}*/
//5-编程从键盘输入一个学生的三门成绩，计算出该学生的总成绩和平均成绩
int main()
{
	int a, b, c, sum;
	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	float h;
	h = sum / 3.00;
	printf("%d %.2f", sum, h);
	return 0;
}






