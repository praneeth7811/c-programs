//to convert given string from upper case to lower case by using ascii codes
#include<stdio.h>
#include<conio.h>
void main()
{char s[100];int l;clrscr();
 printf("enter a string:");gets(s);
 for(l=0;s[l]!='\0';++l)
 if(s[l]>=65&&s[l]<=90) s[l]=s[l]+32;
 printf("lower case string is:");puts(s);
 getch();
}