#include<stdio.h>
#include<conio.h>
void main()
{int x=100;clrscr();
 y:printf("%d\t",x);
 x=x-1;
 if(x<=200) goto y;
 getch();
}