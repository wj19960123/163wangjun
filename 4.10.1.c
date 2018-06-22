#include <stdio.h>
int main()
{
  int i;
  double a,a1,a2,a3,a4,a5;
  a1=100000*0.1;
  a2=a1+100000*0.075;
  a3=a2+100000*0.05;
  a4=a3+100000*0.03;
  a5=a4+400000*0.015;
  printf("请输入利润i:");
  scanf("%d",&i);
  if (i<=100000)
     a=i*0.1;
  else if (i<=200000)
     a=a1+(i-100000)*0.075;
  else if (i<=400000)
     a=a2+(i-200000)*0.05;
  else if (i<=600000)
     a=a3+(i-400000)*0.03;
  else if (i<=1000000)
     a=a4+(i-600000)*0.015;
  else
     a=a5+(i-1000000)*0.01;
  printf("奖金是: %f\n",a);
  return 0;
 }

