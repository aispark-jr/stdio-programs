#include<stdio.h>
void main()
{
 float d=1;
 while(d<1001)
 {
  float a,b,c=0,e,f,g=1;
  printf("________________________________________\n");
  printf("||-------------Calculator-------------||\n");
  printf("||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||\n");
  printf("  a=  ");
  scanf("%f",&a);
  printf("  b=  ");
  scanf("%f",&b);
  printf("  If add type '1'\n  If subtract type '2'\n  If multiply type '3'\n  If divide type '4'\n  If square type '5'\n  If square root type '6'\n  If exit type '7'\n  Enter what you want:");
  scanf("%f",&d);
  if(d==1)
  {
   d=a+b;
   c=d;
   d=1;
  }
  else if(d==2)
  {
   d=a-b;
   c=d;
   d=1;
  }
  else if(d==3)
  {
   d=a*b;
   c=d;
   d=1;
  }
  else if(d==4)
  {
   d=a/b;
   c=d;
   d=0;
  }
  else if(d==5)
  {
   printf("  If a '1'or If b '2':");
   scanf("%f",&e);
   if(e==1)
   {
    d=a*a;
    c=d;
    d=1;
   }
   else
   {
    d=b*b;
    c=d;
    d=1;
   }
  }
  else if(d==6)
  {
   d=1;
   printf("  If a '1' or If b '2':");
   scanf("%f",&f);
   if(f==1)
   {
    while(g<a)
    {
     if(d*d!=a)
     {
      d++;
      g++;
     }
     else
     {
      a=b;
      g=a;
      c=d;
      d=0;
     }
    }
   }
   else
   {
    d=1;
    a=b;
    while(g<a)
    {
     if(d*d!=a)
     {
      d++;
      g++;
     }
     else
     {
      g=a;
      c=d;
      d=0;
     }
    }
   }
  }
  else
   d=1001;
  if(d==1001)
  {
   printf("||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||\n");
   printf("||____________________________________||\n");
   printf("----------------------------------------\n\n\n");
   d++;
  }
  else
  {
   if(d==a)
   {
    printf("   ---------------------------------\n");
    if(f==1)
    {
     printf("      %.2f is not a perfect square",a);
    }
    else
    {
     printf("      %.2f is not a perfect square",b);
    }
    printf("\n   ---------------------------------\n");
    printf("||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||\n");
    printf("||____________________________________||\n");
    printf("--------------------------------------\n\n\n");
    d++;
   }
   else
   {
    printf("  ------------------------------------\n");
    printf("                          %.2f\n",c);
    printf("  ------------------------------------\n");
    printf("||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||\n");
    printf("||____________________________________||\n");
    printf("----------------------------------------\n\n\n");
    d++;
   }
  }
 }
}
