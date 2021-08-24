// w a c p to demonstrate pointer to structure

#include<stdio.h>
#include<conio.h>
void main()
{
 struct student
 {
  int rno;
  int m1,m2,m3;
  int tot,avg;
 };
 struct student s,*p;  clrscr();
 p=&s;
 p->rno=100;
 p->m1=10;
 p->m2=20;
 p->m3=30;
 p->tot=p->m1+p->m2+p->m3;
 p->avg=p->tot/3;
 printf("Following are the student details\n");
 printf("student rno:%d \n",p->rno);
 printf("sub1 marks:%d \n",p->m1);
 printf("sub2 marks:%d \n",p->m2);
 printf("sub3 marks:%d \n",p->m3);
 printf("Total marks:%d \n", p->tot);
 printf("Average marks: %d \n", p->avg);
 getch();
}
