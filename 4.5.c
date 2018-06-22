#include <stdio.h>
int main()
{
  int i,k;                                      
  printf("请输入一个小于1000的整数i:");
  scanf("%d",&i);
  if (i>1000) 
  {printf("输入的数不符合要求，请重新输入一个小于1000的整数i:");
   scanf("%d",&i);
  }
  k=sqrt(i);
  printf("%d的平方根的整数部分是：%d\n",i,k);
  return 0;
}

