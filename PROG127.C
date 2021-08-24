// to implement gotoxy function
#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
 gotoxy(33,1);printf("MAIN MENU");
 gotoxy(33,2);printf("---------");
 gotoxy(33,3);printf("1.ADDTION");
 gotoxy(33,4);printf("2.SUBTRACTION");
 gotoxy(33,5);printf("3.MULTIPLICATION");
 gotoxy(33,6);printf("4.DIVISION");
 gotoxy(33,7);printf("5.EXIT");
 gotoxy(30,8);printf("enter any choice[ ]");
 gotoxy(47,8);getch();
 getch();
}