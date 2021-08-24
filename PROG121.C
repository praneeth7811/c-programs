//to find the sum of even numbers upto N
#include<stdio.h>
#include<conio.h>
void main()
{int x=2,sum=0,c,n;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 for(x=2;x<=n;x=x+2)
 sum=sum+x;
 printf("total sum=%d",sum);
 getch();
}