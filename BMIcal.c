#include<stdio.h>
void main()
{
 float a,b,c,d,e,f=0;
 while(f==0)
 {
  printf("Your age: ");
  scanf("%f",&e);
  if(e>12)
  {
    printf("Your height in metres: ");
   scanf("%f",&a);
   while(a>3)
   {
    printf("Sorry, BMI is not applicable for giraffes.\n");
    printf("Your height in 'metres': ");
    scanf("%f",&a);
   }
   while(a==0)
   {
    printf("Do you even exist.\n");
    printf("Your height in metres: ");
    scanf("%f",&a);
   }
   printf("Your weight in kilograms:");
   scanf("%f",&b);
   while(b>700)
   {
    printf("What are you, elephant.\n");
    printf("Your weight in 'kilograms': ");
    scanf("%f",&b);
   }
   while(b<2)
   {
    printf("You are sure that you are not a 2 day old baby, aren't you.\n");
    printf("Your weight in kilograms: ");
    scanf("%f",&b);
   }
   c=a*a;
   d=b/c;
   if(d>25)
   {
    printf("You are overweight. Your BMI value is %.2f.\n",d);
    printf("Try to lose weight. Try to avoid sugarsubstances. Try weight lifting three times per week. Eat protein starch and vegetables. Nutritional diet will be encouraged. But try to keep it balanced and not be undernourished.\n");
    printf("Do you want to quit. Press '1' and then 'Enter'.\nIf not just press 'Enter'.\n");
    scanf("%f",&f);
   }
   else if(d<18.5)
   {
    printf("You are undernourished. Your BMI value is %.2f.\n",d);
    printf("Try to gain weight. Add calories to meals you make. Drink milk. Get your proteins. Eat vegetables with high calories. But try not to be overweight.\n");
    printf("Do you want to quit. Press '1' and then 'Enter'.\nIf not just press 'Enter'.\n");
    scanf("%f",&f);
   }
   else
   {
    printf("You are the perfect human. You are very well nourished. Your BMI value is %.2f. But try to keep up the spirit.\n",d);
    printf("Do you want to quit. Press '1' and then 'Enter'.\nIf not just press 'Enter'.\n");
    scanf("%f",&f);
   }
  }
  else
  {
   printf("Sorry, this is not applicable for growing children.\n");
   printf("Do you want to quit. Press '1' and then 'Enter'.\nIf not just press 'Enter'.\n");
   scanf("%f",&f);
  }
 }
}
