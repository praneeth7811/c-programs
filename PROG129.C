// to find simple and compound interst by using the selected choice
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{float p,n,r,s,c;char ch;x: clrscr();
 gotoxy(33,1); printf("1.simple intersts");
 gotoxy(33,2); printf("2.compound intersts");
 gotoxy(33,3); printf("3.exit");
 gotoxy(33,4); printf("enter any choice[ ]");
 gotoxy(50,4); ch=getch();clrscr();
 if(ch=='3') goto y;
 if(ch=='1'||ch=='2')
 {
   printf("enter p,n,r value");
   scanf("%f%f%f",&p,&n,&r);
 }
 switch(ch)
 {
  case '1' : s=p*n*r/100.0;printf("simple interst=%f",s);break;
  case '2' : c=p*pow(1.0+r/100.0,n);printf("compound interst=%f",c);break;
  default  : printf("wrong choice");break;
 }
 gotoxy(1,12);printf("press any key to continue......");
 getch();
 goto x;
 y:
}
