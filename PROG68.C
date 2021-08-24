//to print the series 1,3,6,8,11,13.......200
#include<stdio.h>
#include<conio.h>
void main()
{int x=1,i=2;clrscr();
 while(x<=200)
 {
  printf("%d\t",x);
  x=x+i;
  if(i==2) i=3;
  else i=2;
 }
 getch();
}
