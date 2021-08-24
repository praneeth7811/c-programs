//w a c p to define an user defined function to concatinate two given strings
#include<stdio.h>
#include<conio.h>
void concat(char[],char[]);
void main()
{char s1[50],s2[30];clrscr();
 printf("\n enter string 1: ");gets(s1);
 printf("\n enter string 2: ");gets(s2);
 concat(s1,s2);
 printf("\n concated string is : %s",s1);
 getch();
}
void concat(char s1[],char s2[])
{
 int i,j;
 i=strlen(s1);
 for(j=0;s2[j]!='\0';i++,j++)
 {
  s1[i]=s2[j];
 }
 s1[i]='\0';
}