#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{float p,n,r,s,c;clrscr();
 printf("enter any p,n,r values");
 scanf("%f%f%f",&p,&n,&r);
 s=p*n*r/100.0;
 c=p*pow(1.0+r/100.0,n);
 printf("simple interst=%f,compound interst=%f",s,c);
 getch();
}
