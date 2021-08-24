// to print the given number into reverse order

#include<stdio.h>
#include<conio.h>
void main()
{int n,rn=0;clrscr();
 printf("enter any number:");
 scanf("%d",&n);
 while(n!=0)
 {
  rn=rn*10+n%10;
  n=n/10;
 }
 printf("reverse order of number is:%d",rn);
 getch();
}