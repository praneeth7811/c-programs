#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{float p,n,r,s,c;clrscr();
 p=7000.0f;
 n=5.0f;
 r=2.0f;
 s=p*n*r/100.0;
 c=p*pow(1+r/100.0,n);
 printf("simle interst=%f\ncompound interst=%f",s,c);
 getch();
}
