#include<stdio.h>
void main()
{
 int a,b,c;
 printf("No. of rows to be printed:");
 scanf("%d",&a);
 for(b=1;b<=a;b++)
 {
  printf("\n");
  for(c=a-b;c>0;c--)
  {
   printf(" ");
  }
  for(c=1;c<=(b*2)-1;c++)
  {
   printf("+");
  }
 }
 for(b=a;b>0;b--)
 {
  printf("\n");
  for(c=b;c<=a;c++)
  {
   printf(" ");
  }
  for(c=2;c<(b*2)-1;c++)
  {
   printf("+");
  }
 }
}
