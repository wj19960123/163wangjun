#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int m,n,s,a;
	 int fs(int n);
	 int judge(int m);
	  a=0;
	  n=judge(m);
	  printf("请输入一个大于0的整数。\n");
	  scanf("%d",&n);
	  for(n;n>0;n--)
	  {a=fs(n);
	   s=s+a;
	  }
	  printf("%d",s);
	return 0;
 }
 int judge(int m)
 {
 	int j,k;
 	printf("请输入一个大于0的整数。\n");
	 scanf("%d",&m);
	 if(m<=0)
	 {j=m;
	 k=judge(m);
	 }
	 return(j);
 }
 int fs(int n)
 {
 	int f;
 	if(n==1)
	 f=1;
	 else f=fs(n-1)*n;
	 return(f);
 }
