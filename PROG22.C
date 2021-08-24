#include<stdio.h>
#include<conio.h>
void main()
{float basic,ta,da,hra,ts,pf,it,lic,ded,ns;clrscr();
 printf("enter basic amount");
 scanf("%f",&basic);
 ta=basic*5.0/100.0;
 da=basic*10.0/100.0;
 hra=basic*20.0/100.0;
 ts=basic+ta+da+hra;
 pf=basic*5.0/100.0;
 it=basic*30.0/100.0;
 lic=basic*8.0/100.0;
 ded=pf+it+lic;
 ns=ts-ded;
 printf("net salary=%f",ns);
 getch();
}
