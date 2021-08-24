//to  find income tax with using slab system
#include<stdio.h>
#include<conio.h>
void main()
{float i,t;clrscr();
 printf("enter income");
 scanf("%f",&i);
 if(i<=10000.0) t=0.00;
 else if(i>10000.0&&i<40000.0)  t=(10000.0*0.0)/100.0+((i-10000.0)*5.0)/100.0;
 else if(i>40000.0&&i<100000.0) t=0.0+(30000*5.0)/100.0;
 else t=0.0+(30000.0*5.0)/100.0+(60000.0*10.0)/100.0+((i-100000)*15.0)/100.0;
 printf("tax=%f",t);
 getch();
}