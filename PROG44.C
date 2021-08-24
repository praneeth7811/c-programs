#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,d;clrscr();
 printf("enter any four no:.");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a<b&&a<c&&a<d) printf("%d is small",a);
 else if(b<c&&b<d) printf("%d is small",b);
 else if(c<d) printf("%d is small",c);
 else printf("%d is small",d);
 getch();
}