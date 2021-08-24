// natural,odd,even numbers by using the selected choice
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int n,x;char ch;x: clrscr();
 gotoxy(33,1); printf("1.natural numbers");
 gotoxy(33,2); printf("2.odd numbers");
 gotoxy(33,3); printf("3.even numbers");
 gotoxy(33,4); printf("4.exit");
 gotoxy(33,5); printf("enter any choice[ ]");
 gotoxy(50,5); ch=getch();clrscr();
 if(ch=='4') goto y;
 if(ch=='1'||ch=='2'||ch=='3')
 {
   printf("enter n value");
   scanf("%d",&n);
 }
 switch(ch)
 {
  case '1' :
      {
	for(x=1;x<=n;x=x+1)
	 printf("%d\t",x);
      }break;
  case '2' :
      {
       for(x=1;x<=n;x=x+2)
	printf("%d\t",x);
      }break;
  case '3' :
      {
       for(x=2;x<=n;x=x+2)
       printf("%d\t",x);
      }break;
  default  : printf("wrong choice");break;
 }
 gotoxy(1,12);printf("press any key to continue......");
 getch();
 goto x;
 y:
}
