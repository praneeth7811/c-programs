#include<stdio.h>
#include<conio.h>
void main()
{long int ba,ta,da,hra,ts,it,pf,lic,ded,ns;clrscr();
 printf("enter ba amount");scanf("%ld",&ba);
 printf("enter ta amount");scanf("%ld",&ta);
 printf("enter da amount");scanf("%ld",&da);
 printf("enter hra amount");scanf("%ld",&hra);
 ts=ba+ta+da+hra;
 printf("enter it amount");scanf("%ld",&it);
 printf("enter pf amount");scanf("%ld",&pf);
 printf("enter lic amount");scanf("%ld",&lic);
 ded=it+pf+lic;
 ns=ts-ded;
 printf("totalsalary=%ld\ndeduction=%ld\nNetsalary=%ld",ts,ded,ns);
 getch();
}