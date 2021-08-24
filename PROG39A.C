#include<stdio.h>
#include<conio.h>
void main()
{int a,b,small;clrscr();
 printf("enter any two no:.");
 scanf("%d%d",&a,&b);
 small=(a<b)?a:b;
 printf("%d is small",small);
 getch();
}
