#include <stdio.h>
int main()
{
  int i,k;                                      
  printf("������һ��С��1000������i:");
  scanf("%d",&i);
  if (i>1000) 
  {printf("�������������Ҫ������������һ��С��1000������i:");
   scanf("%d",&i);
  }
  k=sqrt(i);
  printf("%d��ƽ���������������ǣ�%d\n",i,k);
  return 0;
}

