//to print odd numbers up to n
#include<stdio.h>
#include<conio.h>
void main()
{int x=1,n;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 while(x<=n)
 {
  printf("%d\t",x);
  x=x+2;
 }
 getch();
}