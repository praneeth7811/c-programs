//to find the product of odd numbers upto 10
#include<stdio.h>
#include<conio.h>
void main()
{long int x,p=1;clrscr();
 for(x=1;x<=10;x=x+2)
 p=p*x;
 printf("product=%ld",p);
 getch();
}