#include <stdio.h>
#include <stdlib.h>
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{ int a[N],i,k;
  printf("enter array a:\n"); 
  for (i=0;i<N;i++)
    scanf("%d",&a[i]);
  printf("array a:\n");
  for (i=0;i<N;i++)
    printf("%4d",a[i]);
   printf("\nNow,array a:\n");
   for (i=N-1;i>=0;i--)          
    printf("%4d",a[i]);
  printf("\n");
  return 0;
 }   

