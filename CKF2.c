#include<stdio.h>
/*int main()
* //���һ����������Խ���֮�͡�
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
//1,дһ���ӷ�������������a b��������ǵĺ͡�
/*int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = 0;
	sum = a + b;
	printf("%d", sum);
	return 0;
}*/
//2,ʵ��2�����ĶԵ���
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
//3,��֪ĳ��Ʒ����Ϊ30������Ϊx������Ʒ���ܼ�Ǯ���ú궨����Ʒ���ۡ�
/*int main()
{
	int x = 0, c = 0;
	//scanf("%d", &x);
	c = x * 30;
	printf("%d", c);
	return 0;
}*/
//4,����һ����λ������������ֵİ�λ��ʮλ����λ������֮����һ���ո������
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
//5-��̴Ӽ�������һ��ѧ�������ųɼ����������ѧ�����ܳɼ���ƽ���ɼ�
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






