#include<stdio.h>

int main()
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
}