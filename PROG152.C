// to convert the string from lowercase to uppercase
#include<stdio.h>
#include<conio.h>
void main()
{char s[100];clrscr();
 printf("enter a string:");gets(s);
 strupr(s);
 printf("upper case string is: ");puts(s);
 getch();
}