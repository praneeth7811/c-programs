/* program to deference pointer variables */
#include<stdio.h>
#include<conio.h>
Void main()
{int a=87;float b=4.5;int *p1=&a;float *p2=&b;
 printf("value of p1 = adress of a = %u  \n",p1);
 printf("value of p2 = adress of b = %u  \n",p2);
 printf("value of a = %d  %d%d \n",a,*p1,*(&a));
 printf("value of b = %f %f %f \n",b,*p2,*(&b));
 printf("adress of p1 = %u \n",&p1);
 print("adress of p2 = %u  \n",&p2);
 getch();
}
