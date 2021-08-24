//to find the product of first N even numbers
#include<stdio.h>
#include<conio.h>
void main()
{long int c,x,p=1,n;clrscr();
 printf("enter n value");
 scanf("%ld",&n);
 for(c=1,x=2;c<=n;c=c+1,x=x+2)
 p=p*x;
 printf("product=%ld",p);
 getch();
}