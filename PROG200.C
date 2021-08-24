// w a c p to find the length of a string by defining on user-defined function

#include<stdio.h>
#include<conio.h>
int ustrlen(char x[]);
 
void main()
{char s[100];int l;clrscr();
 printf("Enter a string\n"); gets(s);
 l=ustrlen(s);
 printf("Length of string is:%d\n",l);
 getch();
}
int ustrlen(char x[])
{
 int i,n=0;
  for(i=0;x[i]!='\0';i++)
   {
    n=n+1;
   }
   return n;
}
