// w a c p to find the simple and compound interst by using pointers

#include<stdio.h>
#include<conio.h>
void sc(float p,float n,float r,float *x,float *y)
{
 *x=(p*n*r)/100.0;
 *y=p*pow(1.0 + r/100.0,n);
}
void main()
{float p,n,r,s,c;clrscr();
 printf("enter p,n,r values");
 scanf("%f%f%f",&p,&n,&r);
 sc(p,n,r,&s,&c);
 printf("simple interst=%f  \n  compound interst=%f",s,c);
 getch();
}
