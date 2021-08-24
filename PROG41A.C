#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,small;clrscr();
 printf("enter any three no:.");
 scanf("%d%d%d",&a,&b,&c);
 small=(a<b&&a<c)?a:(b<c)?b:c;
 printf("%d is small",small);
 getch();
}
