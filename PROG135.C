//to find the product of 10 numbers using arrays
#include<stdio.h>
#include<conio.h>
void main()
{long int p=1,a[10],c;clrscr();
 for(c=1;c<=10;c=c+1)
 {
  printf("enter a no:");
  scanf("%ld",&a[c]);
  p=p*a[c];
 }
 printf("product=%ld",p);
 getch();
}