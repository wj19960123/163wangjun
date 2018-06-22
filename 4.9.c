#include <stdio.h>
int main()
{
	int n;
	int l=0;
	int a;
	printf("请输入一个整数\n");
	scanf("%d", &n);
	a=n;
	while(a)
	{ 
		a=a/10;
		l++;
	}
	printf("位数：%d\n",l);
	a=n;
	printf("每一位数字为\n");
	while(a)
	{
		printf("%d,", a%10);
		a/=10;
	}
	a=n;
        printf("逆序数:");
	while(a)
	{
		printf("%d", a%10);
		a/=10;
	}
	printf("\n");
	return 0;
}

