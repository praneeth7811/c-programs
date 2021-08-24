#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,d,small;clrscr();
 printf("enter any four no:.");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 small=(a<b&&a<c&&a<d)?a:(b<c&&b<d)?b:(c<d)?c:d;
 printf("%d is small",small);
 getch();
}
