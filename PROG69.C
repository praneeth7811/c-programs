// to print the below series 1,3,6,10,12,15,19........200
#include<stdio.h>
#include<conio.h>
void main()
{int x=1,i=2;clrscr();
 while(x<=200)
 {
  printf("%d\t",x);
  x=x+i;
  if (i==2) i=3;
  else if(i==3) i=4;
  else (i=2);
 }
 getch();
}