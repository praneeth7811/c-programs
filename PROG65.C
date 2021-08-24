//to print even numbers upto n
#include<stdio.h>
#include<conio.h>
void main()
{int x=2,n;clrscr();
 printf("enter n value");
 scanf("%d",&n);
  while(x<=n)
 {
  printf("%d\t",x);
  x=x+2;
 }
 getch();
}