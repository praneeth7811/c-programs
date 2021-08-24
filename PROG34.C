#include<stdio.h>
#include<conio.h>
void main()
{int x=900;clrscr();
 y:printf("%d\t",x);
 x=x-2;
 if(x>=500) goto y;
 getch();
}