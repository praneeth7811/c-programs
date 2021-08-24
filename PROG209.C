// w a c p to implement static keyword

#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
 increment();
 increment();
 increment();
 getch();
}
increment()
{
 static int a;
 a=a+1;
 printf("%d \t",a);
}
