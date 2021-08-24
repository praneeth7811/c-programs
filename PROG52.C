#include<stdio.h>
#include<conio.h>
void main()
{
float pr,cr,nu,ba;clrscr();
printf("enter pervious reading:");
scanf("%f",&pr);
printf("enter the current reading:");
scanf("%f",&cr);
nu=fabs(pr-cr);
if(nu<=100)  ba=nu*1.20;
else if(nu>100&&nu<=400) ba=nu*2.80;
else ba=nu*6.80;
printf("no.of units=%f,\nbalance amount=%f",nu,ba);
getch();
}