//to find the sum of any two numbers using user defined functions
// type 2

#include<stdio.h>
#include<conio.h>
int sum(int x,int y);
void main()
{int a,b,c;clrscr();
 printf("enter any two numbers");
 scanf("%d%d",&a,&b);
 c=sum(a,b);
 printf("sum=%d ",c);
 getch();
}
int sum(int x,int y)
{
 return(x+y);
}
