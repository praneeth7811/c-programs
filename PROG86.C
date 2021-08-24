//to print natural numbers up to n by using for statement
#include<stdio.h>
#include<conio.h>
void main()
{int x,n;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 for(x=1;x<=n;x=x+1)
 printf("%d\t",x);
 getch();
}