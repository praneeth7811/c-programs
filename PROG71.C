// to print fibinonci series up to 100 0,1,1,2,3,5,8,13,21........
#include<stdio.h>
#include<conio.h>
void main()
{int a=0,b=1,c;clrscr();
  printf("%d\t%d\t",a,b);
  c=a+b;
  while(c<=100)
 {
  printf("%d\t",c);
  a=b;
  b=c;
  c=a+b;
 }
 getch();
}