//to  find income tax with out using slab system
#include<stdio.h>
#include<conio.h>
void main()
{float i,t;clrscr();
 printf("enter income");
 scanf("%f",&i);
 if(i<=10000.0) t=0.00;
 else if(i>10000.0&&i<40000.0)  t=(i*5.0)/100.0;
 else if(i>40000.0&&i<100000.0) t=(i*10.0)/100.0;
 else                           t=(i*15.0)/100.0;
 printf("tax=%f",t);
 getch();
}