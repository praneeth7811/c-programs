// to find the sum of n numbers
#include<stdio.h>
#include<conio.h>
void main()
{int x,c,n,sum=0;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 for(c=1;c<=n;c=c+1)
 {printf("enter a no:");
  scanf("%d",&x);
  sum=sum+x;
 }
 printf("sum=%d",sum);
 getch();
}