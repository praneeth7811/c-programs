// w a c p to swap the given two numbers

#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{
 int t;
 t=*x;
 *x=*y;
 *y=t;
}
void main()
{int a,b;clrscr();
 printf("enter a no:");
 scanf("%d %d",&a,&b);
 printf("before swaping a=%d \t b=%d \n",a,b);
 swap(&a,&b);
 printf("after swapping a=%d \t b=%d",a,b);
 getch();
}