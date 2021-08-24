// to find the multiplication of 2*3 & 3*4  matrix
#include<stdio.h>
#include<conio.h>
void main()
{int a[2][3],b[3][4],m[2][4],r,c,x;clrscr();
 printf("enter first 2*3 matrix:  \n");
 for(r=0;r<=1;r=r+1)
 for(c=0;c<=2;c=c+1)
 scanf("%d",&a[r][c]);
 printf("ener second 3*4 matrix:  \n");
 for(r=0;r<=2;r=r+1)
 for(c=0;c<=3;c=c+1)
 scanf("%d",&b[r][c]);
 for(r=0;r<=1;r=r+1)
 for(c=0;c<=3;c=c+1)
 {
  m[r][c]=0;
  for(x=0;x<=2;x=x+1)
  m[r][c]=m[r][c]+a[r][x]*b[x][c];
 }
 printf("the result matrix is:  \n");
 for(r=0;r<=1;r=r+1)
 {
  for(c=0;c<=3;c=c+1)
  printf("%d\t",m[r][c]);
  printf("\n");
 }
 getch();
}