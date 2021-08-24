//to print natural numbers upto 100 by using do while statement
#include<stdio.h>
#include<conio.h>
void main()
{int x=1;clrscr();
 do
 {
  printf("%d\t",x);
  x=x+1;
 }
 while(x<=100);
 getch();
}