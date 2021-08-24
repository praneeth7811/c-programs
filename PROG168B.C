//to find the sum and product of any three numbers using user defined functions
// type 2

#include<stdio.h>
#include<conio.h>
int sum(int x,int y,int z);
int product(int x,int y,int z);
void main()
{int a,b,c,s,p;clrscr();
 printf("enter any three numbers");
 scanf("%d%d%d",&a,&b,&c);
 s=sum(a,b,c);
 p=product(a,b,c);
 printf("sum=%d \n product=%d",s,p);
 getch();
}
int sum(int x,int y,int z)
{
 return(x+y+z);
}
int product(int x,int y,int z)
{
 return(x*y*z);
}