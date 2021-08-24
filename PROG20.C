#include<stdio.h>
#include<conio.h>
void main()
{long int ba,ta,da,hra,ts,it,pf,lic,ded,ns;clrscr();
 ba=10000;
 ta=700;
 da=1200;
 hra=3000;
 ts=ba+ta+da+hra;
 it=1000;
 pf=500;
 lic=800;
 ded=it+pf+lic;
 ns=ts-ded;
 printf("total salary=%ld\ndeduction=%ld\nNetsalary=%ld",ts,ded,ns);
 getch();
}