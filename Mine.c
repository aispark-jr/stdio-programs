#include<stdio.h>
void main()
{
 int a,b,c,d,e;
 printf("Instructions:\n In the game if you have to move right type '6', left '4', up '8', down '2'\n The things shown in 'o' this symbol contains minerals\n The things shown in '|','/','_' these symbols are obstacles. Avoid them. If you touch any of that you will lose");
 printf("\n You can move only till the plus signs\n Observe the keys you are typing because if you fail to click the right key you will lose\n To start the game type '5'");
 scanf("%d",&a);
 do
 {
  if(a==5)
  {
   printf("   Score:0\n");
   printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
   printf("|                                   |\n");
   printf("|                    ___            |\n");
   printf("|                    |+|          __|\n");
   printf("|                    |o|          |+|\n");
   printf("|____________________| |__________| |\n");
   printf("X________+|___________+_______|+|__+|\n");
   printf("|+|     | |                   | |   |\n");
   printf("| |     | |                   |o|   |\n");
   printf("|o|     | |                   | |   |\n");
   printf("| |_____| |                   | |___|\n");
   printf("|+     o +|                   |+  o+|\n");
   printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
   scanf("%d",&b);
   if(b==6)
   {
    printf("\n   Score:0\n");
    printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
    printf("|                                   |\n");
    printf("|                    ___            |\n");
    printf("|                    |+|          __|\n");
    printf("|                    |o|          |+|\n");
    printf("|____________________| |__________| |\n");
    printf("|________X|___________+_______|+|__+|\n");
    printf("|+|     | |                   | |   |\n");
    printf("| |     | |                   |o|   |\n");
    printf("|o|     | |                   | |   |\n");
    printf("| |_____| |                   | |___|\n");
    printf("|+     o +|                   |+  o+|\n");
    printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
    scanf("%d",&b);
    if(b==2)
    {
     printf("\n   Score:0\n");
     printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
     printf("|                                   |\n");
     printf("|                    ___            |\n");
     printf("|                    |+|          __|\n");
     printf("|                    |o|          |+|\n");
     printf("|____________________| |__________| |\n");
     printf("|________+|___________+_______|+|__+|\n");
     printf("|+|     | |                   | |   |\n");
     printf("| |     | |                   |o|   |\n");
     printf("|o|     | |                   | |   |\n");
     printf("| |_____| |                   | |___|\n");
     printf("|+     o X|                   |+  o+|\n");
     printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
     scanf("%d",&b);
     if(b==4)
     {
      printf("\n   Score:200\n");
      printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
      printf("|                                   |\n");
      printf("|                    ___            |\n");
      printf("|                    |+|          __|\n");
      printf("|                    |o|          |+|\n");
      printf("|____________________| |__________| |\n");
      printf("|________+|___________+______+|+|__+|\n");
      printf("|+|     | |                   | |   |\n");
      printf("| |     | |                   |o|   |\n");
      printf("|o|     | |                   | |   |\n");
      printf("| |_____| |                   | |___|\n");
      printf("|X       +|                   |+  o+|\n");
      printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
      scanf("%d",&b);
      if(b==8)
      {
       printf("\n   Score:400\n");
       printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
       printf("|                                   |\n");
       printf("|                    ___            |\n");
       printf("|                    |+|          __|\n");
       printf("|                    |o|          |+|\n");
       printf("|____________________| |__________| |\n");
       printf("|________+____________+_______|+|__+|\n");
       printf("|X|     | |                   | |   |\n");
       printf("| |     | |                   |o|   |\n");
       printf("| |     | |                   | |   |\n");
       printf("| |_____| |                   | |___|\n");
       printf("|+       +|                   |+  o+|\n");
       printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
       scanf("%d",&b);
       if(b==2)
       {
        printf("\n   Score:400\n");
        printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
        printf("|                                   |\n");
        printf("|                    ___            |\n");
        printf("|                    |+|          __|\n");
        printf("|                    |o|          |+|\n");
        printf("|____________________| |__________| |\n");
        printf("|________+____________+_______|+|__+|\n");
        printf("|+|     | |                   | |   |\n");
        printf("| |     | |                   |o|   |\n");
        printf("| |     | |                   | |   |\n");
        printf("| |_____| |                   | |___|\n");
        printf("|X       +|                   |+  o+|\n");
        printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
        scanf("%d",&b);
        if(b==6)
        {
         printf("\n   Score:400\n");
         printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
         printf("|                                   |\n");
         printf("|                    ___            |\n");
         printf("|                    |+|          __|\n");
         printf("|                    |o|          |+|\n");
         printf("|____________________| |__________| |\n");
         printf("|________+____________+_______|+|__+|\n");
         printf("|+|     | |                   | |   |\n");
         printf("| |     | |                   | |   |\n");
         printf("| |     | |                   | |   |\n");
         printf("| |_____| |                   | |___|\n");
         printf("|+       X|                   |+  o+|\n");
         printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
         scanf("%d",&b);
         if(b==8)
         {
          printf("\n   Score:400\n");
          printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
          printf("|                                   |\n");
          printf("|                    ___            |\n");
          printf("|                    |+|          __|\n");
          printf("|                    |o|          |+|\n");
          printf("|____________________| |__________| |\n");
          printf("|________X____________+_______|+|__+|\n");
          printf("|+|     | |                   | |   |\n");
          printf("| |     | |                   |o|   |\n");
          printf("| |     | |                   | |   |\n");
          printf("| |_____| |                   | |___|\n");
          printf("|+       +|                   |+  o+|\n");
          printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
          scanf("%d",&b);
          if(b==6)
          {
           printf("\n   Score:400\n");
           printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
           printf("|                                   |\n");
           printf("|                    ___            |\n");
           printf("|                    |+|          __|\n");
           printf("|                    |o|          |+|\n");
           printf("|____________________| |__________| |\n");
           printf("|_________|___________X_______|+|__+|\n");
           printf("| |     | |                   | |   |\n");
           printf("| |     | |                   |o|   |\n");
           printf("| |     | |                   | |   |\n");
           printf("| |_____| |                   | |___|\n");
           printf("|         |                   |+  o+|\n");
           printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
           scanf("%d",&b);
           if(b==8)
           {
            printf("\n   Score:600\n");
            printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
            printf("|                                   |\n");
            printf("|                    ___            |\n");
            printf("|                    |X|          __|\n");
            printf("|                    | |          |+|\n");
            printf("|____________________| |__________| |\n");
            printf("|_________|___________+________+|__+|\n");
            printf("| |     | |                   | |   |\n");
            printf("| |     | |                   |o|   |\n");
            printf("| |     | |                   | |   |\n");
            printf("| |_____| |                   | |___|\n");
            printf("|         |                   |+  o+|\n");
            printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
            scanf("%d",&b);
            if(b==2)
            {
             printf("\n   Score:600\n");
             printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
             printf("|                                   |\n");
             printf("|                    ___            |\n");
             printf("|                    |+|          __|\n");
             printf("|                    | |          |+|\n");
             printf("|____________________| |__________| |\n");
             printf("|_________|___________X________+|__+|\n");
             printf("| |     | |                   | |   |\n");
             printf("| |     | |                   |o|   |\n");
             printf("| |     | |                   | |   |\n");
             printf("| |_____| |                   | |___|\n");
             printf("|         |                   |+  o+|\n");
             printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
             scanf("%d",&b);
             if(b==6)
             {
              printf("\n   Score:600\n");
              printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
              printf("|                                   |\n");
              printf("|                    ___            |\n");
              printf("|                    | |          __|\n");
              printf("|                    | |          |+|\n");
              printf("|____________________| |__________| |\n");
              printf("|_________|___________________|X|__+|\n");
              printf("| |     | |                   | |   |\n");
              printf("| |     | |                   |o|   |\n");
              printf("| |     | |                   | |   |\n");
              printf("| |_____| |                   | |___|\n");
              printf("|         |                   |+  o+|\n");
              printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
              scanf("%d",&b);
              if(b==2)
              {
               printf("\n   Score:800\n");
               printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
               printf("|                                   |\n");
               printf("|                    ___            |\n");
               printf("|                    | |          __|\n");
               printf("|                    | |          |+|\n");
               printf("|____________________| |__________| |\n");
               printf("|_________|___________________|+|__+|\n");
               printf("| |     | |                   | |   |\n");
               printf("| |     | |                   | |   |\n");
               printf("| |     | |                   | |   |\n");
               printf("| |_____| |                   | |___|\n");
               printf("|         |                   |X  o+|\n");
               printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
               scanf("%d",&b);
               if(b==6)
               {
                printf("\n   Score:1000\n");
                printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
                printf("|                                   |\n");
                printf("|                    ___            |\n");
                printf("|                    | |          __|\n");
                printf("|                    | |          |+|\n");
                printf("|____________________| |__________| |\n");
                printf("|_________|___________________|+___+|\n");
                printf("| |     | |                   | |   |\n");
                printf("| |     | |                   | |   |\n");
                printf("| |     | |                   | |   |\n");
                printf("| |_____| |                   | |___|\n");
                printf("|         |                   |+   X|\n");
                printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
                scanf("%d",&b);
                if(b==4)
                {
                 printf("\n   Score:1000\n");
                 printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
                 printf("|                                   |\n");
                 printf("|                    ___            |\n");
                 printf("|                    | |          __|\n");
                 printf("|                    | |          |+|\n");
                 printf("|____________________| |__________| |\n");
                 printf("|_________|___________________|+___+|\n");
                 printf("| |     | |                   | |   |\n");
                 printf("| |     | |                   | |   |\n");
                 printf("| |     | |                   | |   |\n");
                 printf("| |_____| |                   | |___|\n");
                 printf("|         |                   |X   +|\n");
                 printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
                 scanf("%d",&b);
                 if(b==8)
                 {
                  printf("\n   Score:1000\n");
                  printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
                  printf("|                                   |\n");
                  printf("|                    ___            |\n");
                  printf("|                    | |          __|\n");
                  printf("|                    | |          |+\n");
                  printf("|____________________| |__________| |\n");
                  printf("|_________|___________________|X___+|\n");
                  printf("| |     | |                   | |   |\n");
                  printf("| |     | |                   | |   |\n");
                  printf("| |     | |                   | |   |\n");
                  printf("| |_____| |                   | |___|\n");
                  printf("|         |                   |+   +|\n");
                  printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
                  scanf("%d",&b);
                  if(b==6)
                  {
                   printf("\n   Score:1000\n");
                   printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
                   printf("|                                   |\n");
                   printf("|                    ___            |\n");
                   printf("|                    | |          __|\n");
                   printf("|                    | |          |+\n");
                   printf("|____________________| |__________| |\n");
                   printf("|_________|___________________| |__X|\n");
                   printf("| |     | |                   | |   |\n");
                   printf("| |     | |                   | |   |\n");
                   printf("| |     | |                   | |   |\n");
                   printf("| |_____| |                   | |___|\n");
                   printf("|         |                   |     |\n");
                   printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
                   scanf("%d",&b);
                   if(b==8)
                   {
                    printf("\n   Score:1000\n");
                    printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|\n");
                    printf("|                                   |\n");
                    printf("|                    ___            |\n");
                    printf("|                    | |          __|\n");
                    printf("|                    | |          |X\n");
                    printf("|____________________| |__________| |\n");
                    printf("|_________|___________________| |___|\n");
                    printf("| |     | |                   | |   |\n");
                    printf("| |     | |                   | |   |\n");
                    printf("| |     | |                   | |   |\n");
                    printf("| |_____| |                   | |___|\n");
                    printf("|         |                   |     |\n");
                    printf("|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|");
                    scanf("%d",&b);
                    if(b==6)
                    {
                     printf("\n\n\n\nYYY        YYY   OO      UU        UU\n");
                     printf(" YYY     YYY   OO  OO    UU        UU\n");
                     printf("    YY  YY   OO      OO  UU        UU\n");
                     printf("      YY     OO      OO  UU        UU\n");
                     printf("      YY     OO      OO  UU        UU\n");
                     printf("      YY     OO      OO  UU        UU\n");
                     printf("      YY       OO  OO      UU    UU\n");
                     printf("      YY         OO          UUUU\n\n");
                     printf("HH     HH      AAA  VV           VV  EEEEEEEEEE\n");
                     printf("HH     HH     AA AA  VV         VV   EE\n");
                     printf("HH     HH    AA   AA  VV       VV    EE\n");
                     printf("HHHHHHHHH   AA     AA  VV     VV     EEEEEEE\n");
                     printf("HH     HH   AAAAAAAAA   VV   VV      EE\n");
                     printf("HH     HH   AA     AA    VV VV       EE\n");
                     printf("HH     HH   AA     AA     VVV        EEEEEEEEEE\n\n\n");
                     printf("WW           WW       OO       NN     NN\n");
                     printf("WW           WW     OO  OO     NNN    NN\n");
                     printf("WW           WW   OO      OO   NNNN   NN\n");
                     printf("WW    WWW    WW   OO      OO   NN NN  NN\n");
                     printf("WW   WW WW   WW   OO      OO   NN  NN NN\n");
                     printf("WW  WW   WW  WW   OO      OO   NN   NNNN\n");
                     printf("WW WW     WW WW     OO  OO     NN    NNN\n");
                     printf("WWW         WWW       OO       NN     NN\n\n");
                     a=-200;
                    }
                    else
                    {
                     printf("You have lost\n");
                     a=-200;
                    }
                   }
                   else
                   {
                    printf("You have lost\n");
                    a=-200;
                   }
                  }
                  else
                  {
                   printf("You have lost\n");
                   a=-200;
                  }
                 }
                 else
                 {
                  printf("You have lost\n");
                  a=-200;
                 }
                }
                else
                {
                 printf("You have lost\n");
                 a=-200;
                }
               }
               else
               {
                printf("You have lost\n");
                a=-200;
               }
              }
              else
              {
               printf("You have lost\n");
               a=-200;
              }
             }
             else
             {
              printf("You have lost\n");
              a=-200;
             }
            }
            else
            {
             printf("You have lost\n");
             a=-200;
            }
           }
           else
           {
            printf("You have lost\n");
            a=-200;
           }
          }
          else
          {
           printf("You have lost\n");
           a=-200;
          }
         }
         else
         {
          printf("You have lost\n");
          a=-200;
         }
        }
        else
        {
         printf("You have lost\n");
         a=-200;
        }
       }
       else
       {
        printf("You have lost\n");
        a=-200;
       }
      }
      else
      {
       printf("You have lost\n");
       a=-200;
      }
     }
     else
     {
      printf("You have lost\n");
      a=-200;
     }
    }
    else
    {
     printf("You have lost\n");
     a=-200;
    }
   }
   else
   {
    printf("You have lost\n");
    a=-200;
   }
  }
  else
  {
   printf(" To start type '5'\n");
   scanf("%d",&a);
  }
 }while(a>-200);
}
