//to find sales man commisiion with out slab system
#include<stdio.h>
#include<conio.h>
void main()
{float s,c;clrscr();
 printf("enter sales");
 scanf("%f",&s);
 if(s<=1000.0) c=(s*10.0)/100.0;
 else if(s>1000&&s<5000)  c=(s*15.0)/100.0;
 else c=(s*20.0)/100.0;
 printf("commision=%f",c);
 getch();
}