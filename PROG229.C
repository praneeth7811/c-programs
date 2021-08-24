/* w a p addition of two complex numbers using structures*/
#include<stdio.h>
#include<conio.h>
void main()
{struct complex
 {float real;
  float img;
 };
 struct complex A,B,C; clrscr();
 printf("Enter First complex number\n"); scanf("%f%f",&A.real,&A.img);
 printf("Enter second complex number\n"); scanf("%f%f",&B.real,&B.img);

 C.real=A.real+B.real;
 C.img =A.img+B.img;

 printf("Addition is=%f + %f i \n",C.real,C.img);
getch();
}
