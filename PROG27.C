#include<stdio.h>
#include<conio.h>
void main()
{int x=1;clrscr();
 y:printf("%d\t",x);
 x=x+2;
 if(x<=200) goto y;
 getch();
}