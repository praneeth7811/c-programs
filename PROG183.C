// w a c p to demonstrate pointers

#include<stdio.h>
#include<conio.h>
void main()
{
 char  ch='x';
 int i=10;
 float f=2.5; clrscr();
 printf("address of ch is :%u  \n",  &ch);
 printf("address of i is :%u  \n",  &i);
 printf("address of f is :%u  \n",  &f);
 printf("value of ch is :%c  \n",  *(&ch));
 printf("value of ch is :%d  \n",  *(&i));
 printf("value of ch is : %f  \n",*(&f));
 printf("value of ch is : %c  \n",ch);
 printf("value of i is  : %d  \n",i);
 printf("value of i is :%f  \n",f);
 getch();
}


