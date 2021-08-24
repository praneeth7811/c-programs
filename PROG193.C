//typed pointer
#include<stdio.h>
#include<conio.h>
void main()
{int a=20;
 double b=3.14159;
 int *ip=&a;double *dp;clrscr();
 ip=&a;
 printf(" ``a=%d",*ip);

 dp=&b;
 printf("\n b=%f",*dp);
 getch();
}