// Program demonstrating nested structures:
#include<stdio.h>
#include<conio.h>
void main()
{
struct date
{
 int day;
 int month;
 int year;
};
struct employee
{
 int empno;
 char ename[30];
 float sal;
 struct date doj; //A Structure variable declared as a member
};
 struct employee e; clrscr();
 printf("Enter employee number,ename,pay and date of joioning \n");
 scanf("%d",&e.empno);
 fflush(stdin);
 scanf("%s",&e.ename);
 scanf("%f",&e.sal);
 scanf("%d",&e.doj.day);
 scanf("%d",&e.doj.month);
 scanf("%d",&e.doj.year);
 printf("The following are the employee details:\n");
 printf("Employee Number: %d\n",e.empno);
 printf("Employee Name: %s\n",e.ename);
 printf("Employee Salary: %f\n",e.sal);
 printf("Employee Data of joining :%d-%d-%d\n",e.doj.day,e.doj.month,e.doj.year);
 getch();
}
