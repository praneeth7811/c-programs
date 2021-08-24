#include<stdio.h>
#include<conio.h>
void main()
{float basic,ta,da,hra,ts;clrscr();
 printf("enter basic amount");
 scanf("%f",&basic);
 ta=basic*10.0/100.0;
 da=basic*15.0/100.0;
 hra=basic*30.0/100.0;
 ts=basic+ta+da+hra;
 printf("ta=%f\nda=%f\nhra=%f\ntotal salary=%f",ta,da,hra,ts);
 getch();
}
