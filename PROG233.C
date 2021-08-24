/* w a p multiplication of two fractions using structures*/

#include<stdio.h>
#include<conio.h>
//global declaration
struct fraction
{
  int numerator;
  int denominator;
};
void main()
{
//local declaration
 struct fraction fr1,fr2,res;clrscr();

//statements
printf("\nEnter first fraction in the form of x/y:");
scanf("%d/%d",&fr1.numerator,&fr1.denominator);

printf("\nEnter second fraction in the form of x/y:");
scanf("%d/%d",&fr2.numerator,&fr2.denominator);

res.numerator = fr1.numerator*fr2.numerator;
res.denominator = fr1.denominator*fr2.denominator;

printf("\nThe result of %d/%d * %d/%d is %d/%d",fr1.numerator,fr1.denominator,fr2.numerator,fr2.denominator,res.numerator,res.denominator);
getch();
}
