//to find the sum of N numbers using arrays
#include<stdio.h>
#include<conio.h>
void main()
{int sum=0,a[100],c,n;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 for(c=1;c<=n;c=c+1)
 {
  printf("enter a no:");
  scanf("%d",&a[c]);
  sum=sum+a[c];
 }
 printf("sum=%d",sum);
 getch();
}