/* w a c p to add two numbers using pointers*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 int b;
 int r;
 int *pa=&a;
 int *pb=&b;
 int *pr=&r;clrscr();
 printf("Enter the first number:");
 scanf("%d",pa);
 printf("Enter the second number:");
 scanf("%d",pb);
 *pr=*pa + *pb;
 printf("first number is:  %d\n",*pa);
 printf("second number is:  %d\n",*pb);
 printf("addition is: %d\n",*pr);
 getch();
}
