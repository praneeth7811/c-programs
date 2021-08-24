// w a c p to implement block scope,function scope and program scope

#include<stdio.h>
#include<conio.h>
void check();
void main()
{int a=10;clrscr();
 {int a=2;
  printf("%d \t",a);
 }
 a=a+10;
 printf("%d \t",a);
 check();
 getch();
}
void check()
{
 int a=100;
 printf("%d \t",a);
}
