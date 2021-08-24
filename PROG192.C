// multiple pointer for one variable
#include<stdio.h>
#include<conio.h>
void main()
{int a;
 int *p=&a;
 int *q=&a;
 int *r=&a;clrscr();
 printf("enter a no:");
 scanf("%d",&a);
 printf("%d \n",*p);
 printf("%d \n",*q);
 printf("%d \n",*r);
 getch();
}
