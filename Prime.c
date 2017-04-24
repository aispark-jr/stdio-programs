#include<stdio.h>
void main()
{
 int a,b=2;
 printf("Enter a positive number:");
 scanf("%d",&a);
 if(a%9!=0)
 {
  if(a!=2)
  {
   if(a%b==0)
   {
    printf("The number you have typed is composite.\n");
   }
   else
   {
    while(b<a)
    {
     if(a%b==0)
     {
      printf("The number you have typed is composite.\n");
      b=a;
     }
     else
     {
      b++;
     }
    }
    printf("The number you have typed is prime.\n");
   }
  }
  else
  {
   printf("The number you have typed is prime.\n");
  }
 }
 else
 {
  printf("The number you have typed is composite.\n");
 }
}
