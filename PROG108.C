// to find the product of n numbers
#include<stdio.h>
#include<conio.h>
void main()
{long int n,x,c=1,p=1;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 for(c=1;c<=n;c=c+1)
 {printf("enter a no:");
  scanf("%ld",&x);
  p=p*x;
 }
 printf("product=%ld",p);
 getch();
}