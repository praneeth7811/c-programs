#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,big;clrscr();
 printf("enter any three no:.");
 scanf("%d%d%d",&a,&b,&c);
 big=(a>b&&a>c)?a:(b>c)?b:c;
 printf("%d is big",big);
 getch();
}
