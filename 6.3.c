#include <stdio.h>
int main()
{
int a[3][3],sum1=0;
int i,j,sum;
  printf("enter data:\n");
  for (i=0;i<3;i++)
    for (j=0;j<3;j++)
     scanf("%3d",&a[i][j]);
  for (i=0,j=2;i<3;i++)
    {
    sum1=sum1+a[i][i]+a[i][j--];
	}
    sum=sum1-a[1][1];
  printf("sum=%6d\n",sum);
  return 0;
}

