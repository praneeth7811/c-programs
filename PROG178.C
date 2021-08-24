//to find the sum of n numbers using header file head4.h

#include<stdio.h>
#include<conio.h>
#include"head4.h"
void main()
{int n,s;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 s=sum(n);
 printf("the sum=%d",s);
 getch();
}