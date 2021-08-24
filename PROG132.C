//to read and display 5 numbers from last to first using arrays
#include<stdio.h>
#include<conio.h>
void main()
{int a[5],c;clrscr();
 printf("enter any 5 values  \n");
 for(c=1;c<=5;c=c+1)
 {
  printf("enter a no:");
  scanf("%d",&a[c]);
 }
 printf("the given values are \n");
 for(c=5;c>=1;c=c-1)
 printf("%d\t",a[c]);
 getch();
}