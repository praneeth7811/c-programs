//to print even numbers from 2000 to 1800
#include<stdio.h>
#include<conio.h>
void main()
{int x=2000;clrscr();
 while(x>=1800)
 {
  printf("%d\t",x);
  x=x-2;
 }
 getch();
}