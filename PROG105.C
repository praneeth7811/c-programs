// to find the sum of 10 numbers
#include<stdio.h>
#include<conio.h>
void main()
{int x,c,sum=0;clrscr();
 for(c=1;c<=10;c=c+1)
 {printf("enter a no:");
  scanf("%d",&x);
  sum=sum+x;
 }
 printf("sum=%d",sum);
 getch();
}