//to find the string is palindrome or not
#include<stdio.h>
#include<conio.h>
void main()
{char s[100],rs[100];clrscr();
 printf("enter a string:");gets(s);
 strcpy(rs,s);
 strrev(rs,s);
 if(!strcmp(rs,s))printf("%s is palidrome",s);
 else printf("%s is not palindrome",s);
 getch();
}
