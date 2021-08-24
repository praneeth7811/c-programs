// to convert the string from uppercase to lowercase
#include<stdio.h>
#include<conio.h>
void main()
{char s[100];clrscr();
 printf("enter a string:");gets(s);
 strlwr(s);
 printf("lower case string is: ");puts(s);
 getch();
}