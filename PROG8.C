#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{float p,n,r,c;clrscr();
 p=5000.0f;
 n=4.0f;
 r=3.0f;
 c=p*pow(1.0+r/100.0,n);
 printf("compound interst=%f",c);
 getch();
}
