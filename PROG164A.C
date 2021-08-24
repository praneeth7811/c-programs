//to find the sum of any two numbers using user defined functions
// type 1

#include<stdio.h>
#include<conio.h>
int sum(int x,int y)
{int z;
 z=x+y;
 return z;
}
void main()
{int a,b,c;clrscr();
 printf("enter any two numbers");
 scanf("%d%d",&a,&b);
 c=sum(a,b);
 printf("sum=%d",c);
 getch();
}