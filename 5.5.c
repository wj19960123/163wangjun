#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{int s,n;
 int fs(int n);
 printf ("please write a number.\n");
 scanf ("%d",&n);
 s=fs(n);
 printf("s=%d\n",s);
	return 0;
}
 int fs(int n)
 {int f,i,a,t; 
      i=n;
	  a=2;
 if(i<=0)
 {
 f=0;
 }
 
 else if(i==1)
      f=2;
	   else{for (t=2;i>1;i--)
          {
        	a=a*10+t;
          }
             f=fs(n-1)+a ;
	   } 
			 return(f);
 }

