// Slake Bytes
// demo progrma of structure size

#include<stdio.h>
#include<conio.h>
void main()
{struct demo
 {
  char ch;
  int i;
 };
 struct demo s; clrscr();
 printf("Size of int=%d \n size of char=%d\nsize of struct=%d",sizeof(s.i),sizeof(s.ch),sizeof(s));
 getch();
}
