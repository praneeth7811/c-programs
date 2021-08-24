//to find the sum of any two numbers using user defined functions
// type 3

#include<stdio.h>
#include<conio.h>
void cube(int x)
{
 printf("cube value=%d",x*x*x);
}
void main()
{int a;clrscr();
 printf("enter any two numbers");
 scanf("%d",&a);
 cube(a);
 getch();
}
