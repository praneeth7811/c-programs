// to find sum and product of any three numbers using pointers

#include<stdio.h>
#include<conio.h>
void sp(int a,int b,int c,int *x,int *y)
{
 *x=a+b+c;
 *y=a*b*c;
}
void main()
{int a,b,c,s,p;clrscr();
 printf("enter 3 numbers");scanf("%d%d%d",&a,&b,&c);
 sp(a,b,c,&s,&p);
 printf("sum=%d   \n product=%d",s,p);
 getch();
}
