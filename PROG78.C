//to print odd numbers upto 200 by using do while statement
#include<stdio.h>
#include<conio.h>
void main()
{int x=1;clrscr();
 do
 {
  printf("%d\t",x);
  x=x+2;
 }
 while(x<=200);
 getch();
}