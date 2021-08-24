//to find the sum of first 100 even numbers
#include<stdio.h>
#include<conio.h>
void main()
{int n=1,sum=0,c;clrscr();
 for(c=1,n=2;c<=100;c=c+1,n=n+2)
 sum=sum+n;
 printf("total sum=%d",sum);
 getch();
}