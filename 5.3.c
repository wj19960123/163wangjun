#include <stdio.h>
int main()
 {
  int  p,r,n,m,a;
  printf("����������������n,m:");
  scanf("%d,%d,",&n,&m);
  if (n<m)
   {
    a=n;
    n=m;
    m=a;
   }
  p=n*m;
  while(m)  
   {
    r=n%m;
    n=m;
    m=r;
   }
  printf("���ǵ����Լ��Ϊ:%d\n",n);
  printf("���ǵ���С������Ϊ:%d\n",p/n);
  return 0;
}

