//to find the smallest of given 10 numbers by using arrays
#include<stdio.h>
#include<conio.h>
void main()
{int small,a[10],c;clrscr();
 for(c=1;c<=10;c=c+1)
 {
  printf("enter a no:");
  scanf("%d",&a[c]);
 }
 small=a[1];
 for(c=2;c<=10;c=c+1)
 if(a[c]<small) small=a[c];
 printf("smallest number=%d",small);
 getch();
}