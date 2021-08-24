//to find the sum of even numbers upto 100
#include<stdio.h>
#include<conio.h>
void main()
{int n,sum=0;clrscr();
 for(n=2;n<=100;n=n+2)
 sum=sum+n;
 printf("total sum=%d",sum);
 getch();
}