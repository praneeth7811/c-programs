//to print natural numbers upto n by using do while statement
#include<stdio.h>
#include<conio.h>
void main()
{int x=1,n;clrscr();
 printf("enter n value:");
 scanf("%d",&n);
 do
 {
  printf("%d\t",x);
  x=x+1;
 }
 while(x<=n);
 getch();
}