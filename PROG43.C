#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,d;clrscr();
 printf("enter any four no:.");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>b&&a>c&&a>d) printf("%d is big",a);
 else if(b>c&&b>d) printf("%d is big",b);
 else if(c>d) printf("%d is big",c);
 else printf("%d is big",d);
 getch();
}