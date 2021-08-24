#include<stdio.h>
#include<conio.h>
void main()
{int x=1,n;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 y:printf("%d\t",x);
 x=x+1;
 if(x<=n) goto y;
 getch();
}