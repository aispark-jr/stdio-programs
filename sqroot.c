#include<stdio.h>
void main()
{
 int a,b=1,c=1;
 printf("Choose a number:");
 scanf("%d",&a);
 while(c<a)
 {
  if(b*b!=a)
  {
   b++;
   c++;
  }
  else
  {
   a=c;
   b=0;
  }
 }
 if(b==0)
  printf("Square root of the given number is %d.",c);
 else
  printf("%d is not a perfect square.",c);
}
