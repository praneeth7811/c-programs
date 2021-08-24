//to print the series 1,4,9,16,25......100
#include<stdio.h>
#include<conio.h>
void main()
{int x=1,y;clrscr();
 y=x*x;
 while(y<=100)
 {
  printf("%d\t",y);
  x=x+1;
  y=x*x;
 }
 getch();
}