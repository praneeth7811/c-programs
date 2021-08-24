//to print the fabonacci  series upto 100 by using do while statement
#include<stdio.h>
#include<conio.h>
void main()
{int a=0,b=1,c;clrscr();
 printf("%d\t%d\t",a,b);
 c=a+b;
 do
 {
  printf("%d\t",c);
  a=b;
  b=c;
  c=a+b;
 }
 while(c<=100);
 getch();
}