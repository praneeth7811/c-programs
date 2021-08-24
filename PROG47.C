// to find the roots of a quadratic equation
#include<stdio.h>
#include<conio.h>
void main()
{float a,b,c,d,x1,x2;clrscr();
 printf("enter a,b,c values");
 scanf("%f%f%f",&a,&b,&c);                  //if d<0 roots are imaginary
 d=b*b-4.0*a*c;                             //if d==0 roots are equal
 if(d<0) printf("roots are imaginary");	    //if d>0 roots are real and distinct
 else if(d==0)
  { x1=-b/(2.0*a);
    printf("the two roots are=%f \n the roots are equal",x1);
  }
  else
  { x1=(-b+sqrt(d))/(2.0*a);x2=(-b-sqrt(d))/(2.0*a);
    printf("roots1=%f\nroots2=%f\nroots are equal and distinct",x1,x2);
  }
  getch();
}