//to find the cube value of a given number using user defined functions
// type 1

#include<stdio.h>
#include<conio.h>
int cube(int x)
{
 int y;
 y=x*x*x;
 return y;
}
void main()
{int a,b;clrscr();
 printf("enter any number");scanf("%d",&a);
 b=a*a*a;
 printf("cube value=%d",b);
 getch();
}