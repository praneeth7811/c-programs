//to find the cube of the given number using user defined functions
// type 2

#include<stdio.h>
#include<conio.h>
int cube(int x);
void main()
{int a,b;clrscr();
 printf("enter a numbers");
 scanf("%d",&a);
 b=cube(a);
 printf("cube value=%d",b);
 getch();
}
int cube(int x)
{
 return(x*x*x);
}