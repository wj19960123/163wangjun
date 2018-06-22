#include <stdio.h>
int main()
{
  int i;
  double  a,a1,a2,a3,a4,a5;
  int  Lirun;
  a1=100000*0.1;
  a2=a1+100000*0.075;
  a3=a2+200000*0.05;
  a4=a3+200000*0.03;
  a5=a4+400000*0.015;
  printf("请输入利润i:");
  scanf("%d",&i);
  Lirun=i/100000;
  if (Lirun>10) Lirun=10;
  switch(Lirun)
  {  case 0:a=i*0.1;break;
     case 1:a=a1+(i-100000)*0.075;break;
     case 2:
     case 3:a=a2+(i-200000)*0.05;break;
     case 4:
     case 5:a=a3+(i-400000)*0.03;break;
     case 6:
     case 7:
     case 8:
     case 9:a=a4+(i-600000)*0.015;break;
     case 10:a=a5+(i-1000000)*0.01;
  }
   printf("奖金是 %f\n",a);
   return 0;
 }

