#include <stdio.h>
int main()
{
	int n;
	int l=0;
	int a;
	printf("������һ������\n");
	scanf("%d", &n);
	a=n;
	while(a)
	{ 
		a=a/10;
		l++;
	}
	printf("λ����%d\n",l);
	a=n;
	printf("ÿһλ����Ϊ\n");
	while(a)
	{
		printf("%d,", a%10);
		a/=10;
	}
	a=n;
        printf("������:");
	while(a)
	{
		printf("%d", a%10);
		a/=10;
	}
	printf("\n");
	return 0;
}

