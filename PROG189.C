/* w a c p to implement the below program */

#include<stdio.h>
#include<conio.h>
void main()
{
int a;
int b;
int c;
int *p;
int *q;
int *r;clrscr();
a=6;
b=2;
c=6;
p=&b;
q=p;
r=&c;
p=&a;
*q=8;
*r=a + *q + *(&c);
printf("%d %d %d \n",a,b,c);
printf("%d %d %d \n",*p,*q,*r);
getch();
}
