#include<stdio.h>
#include<conio.h>
void main()
{int x=2;clrscr();
 y:printf("%d\t",x);
 x=x+2;
 if(x<=300) goto y;
 getch();
}