#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,d,big;clrscr();
 printf("enter any three no:.");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 big=(a>b&&a>c&&a>d)?a:(b>c&&b>d)?b:(c>d)?c:d;
 printf("%d is big",big);
 getch();
}
