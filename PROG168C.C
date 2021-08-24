//to find the sum and product of any three numbers using user defined functions
// type 3

#include<stdio.h>
#include<conio.h>
void sum(int x,int y,int z)
{
 printf("sum=%d \n",x+y+z);
}
void product(int x,int y,int z)
{
 printf("product=%d",x*y*z);
}
void main()
{int a,b,c;clrscr();
 printf("enter any three numbers");
 scanf("%d%d%d",&a,&b,&c);
 sum(a,b,c);
 product(a,b,c);
 getch();
}
