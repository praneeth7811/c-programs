//to print even numbers from 1000 to 800 by using do while statement
#include<stdio.h>
#include<conio.h>
void main()
{int x=1000;clrscr();
 do
 {
  printf("%d\t",x);
  x=x-2;
 }
 while(x>=800);
 getch();
}