/*
w a c p to defines a structure called an "employee" with the following members 
eno,ename,basic,da,hra,pf,gross and netsalary. Read the details of two employees
from user and calculate gross and net salaries.[da=90%,hra=30%,pf=12%].
*/
#include<conio.h>
#include<stdio.h>
void main()
{//defining a structure
 struct employee
 {
  int eno;
  char ename[30];
  float basic;
  float da;
  float hra;
  float pf;
  float gross;
  float net;
 };
 //declaration of structure variables
 struct employee e1,e2; clrscr();

//reading the details of first employee
 printf("Enter the following details of first employee:\n");
 printf("Enter employee no:");   scanf("%d",&e1.eno);
 printf("Enter employee name:"); scanf("%s",e1.ename);
 printf("Enter employee basic amount:"); scanf("%f",&e1.basic);

//reading the details of second employee
 printf("Enter the following details of second employee:\n");
 printf("Enter employee no:"); scanf("%d",&e2.eno);
 printf("Enter employee name:");scanf("%s",e2.ename);
 printf("Enter employee basic amount:");scanf("%f",&e2.basic);

//caliculating gross and net salaries of first employee
  e1.da=e1.basic * 90/100;
  e1.hra=e1.basic * 30/100;
  e1.pf=e1.basic * 12/100;
  e1.gross=e1.basic+e1.da+e1.hra;
  e1.net=e1.gross-e1.pf;

//caliculating gross and net salaries of second employee
  e2.da=e2.basic * 90/100;
  e2.hra=e2.basic * 30/100;
  e2.pf=e2.basic * 12/100;
  e2.gross=e2.basic+e2.da+e2.hra;
  e2.net=e2.gross-e2.pf;

//displaying the first Employee details
  printf("The following are the first employee details:\n");
  printf("Employee number=%d\n",e1.eno);
  printf("Employee name=%s\n",e1.ename);
  printf("Basic=%f\n",e1.basic);
  printf("Da=%f\n",e1.da);
  printf("Hra=%f\n",e1.hra);
  printf("Pf=%f\n",e1.pf);
  printf("gross=%f\n",e1.gross);
  printf("netsalary=%f\n",e1.net);

//displaying the Second Employee details
  printf("The following are the Second employee details:\n");
  printf("Employee number=%d\n",e2.eno);
  printf("Employee name=%s\n",e2.ename);
  printf("Basic=%f\n",e2.basic);
  printf("Da=%f\n",e2.da);
  printf("Hra=%f\n",e2.hra);
  printf("Pf=%f\n",e2.pf);
  printf("gross=%f\n",e2.gross);
  printf("Net salary=%f\n",e2.net);
getch();
}
