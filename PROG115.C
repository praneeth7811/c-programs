//to find the sum of odd numbers upto 100
#include<stdio.h>
#include<conio.h>
void main()
{int n=1,sum=0;clrscr();
 for(n=1;n<=100;n=n+2)
 sum=sum+n;
 printf("total sum=%d",sum);
 getch();
}