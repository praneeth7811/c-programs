// w a c p to convert a given lowercase string into an uppercase string
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void print_upper(char x[]);
void main()
{char s[80];clrscr();
 printf("enter a string in lower case: \n");gets(s);
 print_upper(s);
 printf("string in upper case: %s \n",s);
 getch();
}
void print_upper(char x[])
{
 register int i;
 for (i=0;x[i]!='\0';i=i+1)
 {
  x[i]=toupper(x[i]);
 }
}