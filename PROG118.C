//to find the sum of first N odd numbers
#include<stdio.h>
#include<conio.h>
void main()
{int x=1,sum=0,c,n;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 for(c=1,x=1;c<=n;c=c+1,x=x+2)
 sum=sum+x;
 printf("total sum=%d",sum);
 getch();
}