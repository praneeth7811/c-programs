#include<stdio.h>
#include<conio.h>
void main()
{int x=1;clrscr();
 y:printf("%d\t",x);
 x=x+1;
 if(x<=100) goto y;
 getch();
}