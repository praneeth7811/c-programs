//to find the sum of 10 numbers using arrays
#include<stdio.h>
#include<conio.h>
void main()
{int a[10],c,sum=0;clrscr();
 for(c=1;c<=10;c=c+1)
  {
   printf("enter a no:");
   scanf("%d",&a[c]);
   sum=sum+a[c];
  }
  printf("sum=%d",sum);
 getch();
}