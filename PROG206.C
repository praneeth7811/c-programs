// call by reference
#include<stdio.h>
#include<conio.h>
void fun(int *x,int *y)
{
 printf("\n before changing function call values  x=%d\t y=%d",*x,*y);
 *x=100;
 *y=200;
 printf("\n after changing function call values x=%d\t y=%d",*x,*y);
}
void main()
{int a,b;clrscr();
 printf("enter any two no:");
 scanf("%d%d",&a,&b);
 printf("\n before function call a=%d\t b=%d ",a,b);
 fun(&a,&b);
 printf("\n after function call a=%d\t b=%d ",a,b);
 getch();
}