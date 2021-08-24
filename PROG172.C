// to find the sum of any two integers by using the header file head2.h

#include<stdio.h>
#include<conio.h>
#include"HEAD2.h"
void main()
{int a,b,s;clrscr();
 printf("enter any number");
 scanf("%d%d",&a,&b);
 s=sum(a,b);
 printf("sum=%d",s);
 getch();
}
