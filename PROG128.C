#include<stdio.h>
#include<conio.h>
void main()
{float a,b,c;char ch;x: clrscr();
gotoxy(33,1);printf("MAIN MENU");
gotoxy(33,2);printf("---------");
gotoxy(33,3);printf("1.ADDITION");
gotoxy(33,4);printf("2.SUBTRATION");
gotoxy(33,5);printf("3.MULTIPLICATION");
gotoxy(33,6);printf("4.DIVISION");
gotoxy(33,7);printf("5.EXIT");
gotoxy(30,9);printf("CHOICE ANY ONE[ ]");
gotoxy(45,9);ch=getch();clrscr();
if(ch=='5') goto y;
if(ch=='1'||ch=='2'||ch=='3'||ch=='4')
{
 printf("enter any two no:");
 scanf("%f%f",&a,&b);
}
switch(ch)
{
 case '1':c=a+b;printf("addition=%f",c);break;
 case '2':c=a-b;printf("subtraction=%f",c);break;
 case '3':c=a*b;printf("multiplication=%f",c);break;
 case '4':c=a/b;printf("division=%f",c);break;
 default :printf("wrong choice");break;
}
gotoxy(1,24);printf("press any key to continue");
getch();
goto x;
y:
}