//to print the series 1,3,6,10,15,21.......100
#include<stdio.h>
#include<conio.h>
void main()
{int x=1,i=2;clrscr();
 while(x<=100)
 {
  printf("%d\t",x);
  x=x+i;
  i=i+1;
 }
 getch();
}
