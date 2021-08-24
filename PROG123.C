//to find the product of natural numbers upto 10
#include<stdio.h>
#include<conio.h>
void main()
{long int x,p=1;clrscr();
 for(x=1;x<=10;x=x+1)
 {printf("enter a no:");
  scanf("%d",&x);
  p=p*x;
 }
 printf("product=%ld",p);
 getch();
}