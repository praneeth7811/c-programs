//to find the biggest of 10 numbers using arrays
#include<stdio.h>
#include<conio.h>
void main()
{int big,a[10],c;clrscr();
 for(c=1;c<=10;c=c+1)
 {
  printf("enter a no:");
  scanf("%d",&a[c]);
 }
 big=a[1];
 for(c=2;c<=10;c=c+1)
 if(a[c]>big) big=a[c];
 printf("biggest number=%d",big);
 getch();
}