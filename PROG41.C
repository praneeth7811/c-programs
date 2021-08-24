#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c;clrscr();
 printf("enter any three no:.");
 scanf("%d%d%d",&a,&b,&c);
 if(a<b&&a<c) printf("%d is small",a);
 else if(b<c) printf("%d is small",b);
 else printf("%d is small",c);
 getch();
}