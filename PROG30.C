#include<stdio.h>
#include<conio.h>
void main()
{int x=301;clrscr();
 y:printf("%d\t",x);
 x=x+2;
 if(x<=400) goto y;
 getch();
}