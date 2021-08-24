/* w a c p to demonstrate different the memory location sizes to
   different types of pointer variables  */

#include<stdio.h>
#include<conio.h>
void main()
{int *p;float *q;double *r;clrscr();
 printf("the size of integer pointer is %d\n",sizeof(p));
 printf("the size of float  pointer is %d\n",sizeof(q));
 printf("the size of double pointer is %d\n",sizeof(r));
 printf("the size of character pointer is %d\n",sizeof(char  *));
 getch();
}




