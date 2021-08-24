// to add the given two strings
#include<stdio.h>
#include<conio.h>
void main()
{char s1[100],s2[100],s3[100];clrscr();
 printf("enter first string:");gets(s1);
 printf("enter second string:");gets(s2);
 strcpy(s3,strcat(s1,s2));
 printf("the total string is:");puts(s3);
 getch();
}
