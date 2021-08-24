// to find the product of 10 numbers
#include<stdio.h>
#include<conio.h>
void main()
{long int x,c,p=1;clrscr();
 for(c=1;c<=10;c=c+1)
 {printf("enter a no:");
  scanf("%ld",&x);
  p=p*x;
 }
 printf("product=%ld",p);
 getch();
}