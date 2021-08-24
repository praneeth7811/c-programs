// w a c p to implement register keyword

#include<stdio.h>
#include<conio.h>
void main()
{register int n,x,c=1,sum=0;clrscr();
 printf("enter n values:");
 scanf("%d",&n);
 while(c<=n)
 {
  printf("enter a no:");
  scanf("%d",&x);
  sum=sum+x;
  c=c+1;
 }
 printf("total sum=%d",sum);
 getch();
}


