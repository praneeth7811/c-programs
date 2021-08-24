#include<stdio.h>
#include<conio.h>
void ustrcpy(char x[],char y[]);
void main()
{char a[30],b[30];clrscr();
 printf("enter a no:");gets(b);
 ustrcpy(a,b);
 printf("string a=%s \n",a);
 printf("string b=%s \n",b);
 getch();
}
void ustrcpy(char x[],char y[])
{
 int i;
 for(i=0;y[i]!='\0';i=i+1)
 {
  x[i]=y[i];
 }
 x[i]='\0';
}