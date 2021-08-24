//to print odd numbers from 1000 to 900
#include<stdio.h>
#include<conio.h>
void main()
{int x=999;clrscr();
 while(x>=900)
 {
  printf("%d\t",x);
  x=x-2;
 }
 getch();
}