#include<stdio.h>
#include<conio.h>
void main()
{int x=500;clrscr();
 y:printf("%d\t",x);
 x=x+2;
 if(x<=600) goto y;
 getch();
}