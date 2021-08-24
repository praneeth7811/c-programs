//to find the given number is odd or even
#include<stdio.h>
#include<conio.h>
void main()
{int x;clrscr();
 printf("enter a no:.");
 scanf("%d",&x);
 if(x%2==0) printf("%d is even",x);
 else printf("%d is odd",x);
 getch();
}