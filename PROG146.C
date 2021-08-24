//to find transpose of 2*2 matrix
#include<stdio.h>
#include<conio.h>
void main()
{int  a[2][2],r,c;clrscr();
 printf("enter 2*2 matrix     \n");
 for(r=0;r<=1;r=r+1)
 for(c=0;c<=1;c=c+1)
 scanf("%d",&a[r][c]);
 for(c=0;c<=1;c=c+1)
 {
  for(r=0;r<=1;r=r+1)
  printf("%d\t",a[r][c]);
  printf("\n");
 }
 getch();
}