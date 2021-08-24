#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c;clrscr();
 printf("enter any three no:.");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b&&a>c) printf("%d is big",a);
 else if(b>c) printf("%d is big",b);
 else printf("%d is big",c);
 getch();
}