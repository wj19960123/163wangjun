#include <stdio.h>
 #include <math.h>
int main()
 {
  float a,x1,x2;
  printf("������һ������:");
  scanf("%f",&a);
  x1=a/2;
  x2=(x1+a/x1)/2;
  do
   {x1=x2;
    x2=(x1+a/x1)/2;
   }while(fabs(x1-x2)>=1e-5);
  printf("����ƽ����Ϊ %5.2f  is %8.5f\n",a,x2);
  return 0;
 }

