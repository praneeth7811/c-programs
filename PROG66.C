//to print the series 1,4,7,10,13.......100
#include<stdio.h>
#include<conio.h>
void main()
{int x=1;clrscr();
  while(x<=100)
 {
  printf("%d\t",x);
  x=x+3;    //here the difference of 2 numbers is 3
 }
 getch();
}