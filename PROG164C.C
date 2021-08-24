//to find the sum of any two numbers using user defined functions
// type 3

#include<stdio.h>
#include<conio.h>
void sum(int x,int y)
{
 printf("sum=%d",x+y);
}
void main()
{int a,b;clrscr();
 printf("enter any two numbers");
 scanf("%d%d",&a,&b);
 sum(a,b);
 getch();
}
