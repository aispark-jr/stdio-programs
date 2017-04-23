#include<stdio.h>
void main()
{
 int a,b,c,d;
 printf("No. of rows to be printed:");
 scanf("%d",&a);
 a++;
 for(b=1;b<=a;b++)
 {
  printf("\n");
  for(d=1;d<=b-1;d++)
  {
   printf("%d",d);
  }
 }
}
