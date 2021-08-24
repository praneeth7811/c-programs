// to find the multiplication of two 2*2 matrix
#include<stdio.h>
#include<conio.h>
void main()
{int a[2][2],b[2][2],m[2][2],r,c,x;clrscr();
 printf("enter first 2*2 matrix:  \n");
 for(r=0;r<=1;r=r+1)
 for(c=0;c<=1;c=c+1)
 scanf("%d",&a[r][c]);
 printf("ener second 2*2 matrix:  \n");
 for(r=0;r<=1;r=r+1)
 for(c=0;c<=1;c=c+1)
 scanf("%d",&b[r][c]);
 for(r=0;r<=1;r=r+1)
 for(c=0;c<=1;c=c+1)
 {
  m[r][c]=0;
  for(x=0;x<=1;x=x+1)
  m[r][c]=m[r][c]+a[r][x]*b[x][c];
 }
 printf("the result matrix is:  \n");
 for(r=0;r<=1;r=r+1)
 {
  for(c=0;c<=1;c=c+1)
  printf("%d\t",m[r][c]);
  printf("\n");
 }
 getch();
}