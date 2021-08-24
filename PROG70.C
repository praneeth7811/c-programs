//to print the series 1,4,9,16,25......100
#include<stdio.h>
#include<conio.h>
void main()
{int x=1,i=3;clrscr();
 while(x<=100)
 {
  printf("%d\t",x);
  x=x+i;
  i=i+2;
 }
 getch();
}