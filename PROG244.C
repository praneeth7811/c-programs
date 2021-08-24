// w a c p to demonstrate pointer to structure  using typedef

#include<stdio.h>
#include<conio.h>
struct student
{
 char name[20];
 int sno;
 float marks;
};
void main()
{struct student stu;
 struct student *ptr;clrscr();
 ptr=&stu;
 printf("enter student name,slno. and marks details:\n");
 scanf("%s %d %f \n",stu.name,&stu.sno,&stu.marks);
 printf("name :%s \n",ptr->name);
 printf("sno=%d \n",ptr->sno);
 printf("marks:%f \n",ptr->marks);
 getch();
}
