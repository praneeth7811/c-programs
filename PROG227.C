/*w.a.p to create a structure called "students" with the members rno,name,m1,m2,m3, total and average.
Declare two number of structure variables of type "students" and read the details of two students
from user and calculate total and average marks.*/

#include<stdio.h>
#include<conio.h>
void main()
{    //structure declaration
 struct student
  {
   int rno;
   char name[30];
   float m1;
   float m2;
   float m3;
   float tot;
   float avg;
  };
  // declaring structure variables
  struct student s1,s2;
  clrscr();
  //reading the details of First student
  printf("ENter the details of first student:\n");
  printf("Enter roll no:");  scanf("%d",&s1.rno);
  fflush(stdin);
  printf("Enter name:");      scanf("%s",s1.name);
  printf("Enter M1 marks:"); scanf("%f",&s1.m1);
  printf("Enter M2 marks:"); scanf("%f",&s1.m2);
  printf("Enter M3 marks:"); scanf("%f",&s1.m3);

  //reading the details of Second student
  printf("ENter the deatils of second student:\n");
  printf("Enter roll no:");     scanf("%d",&s2.rno);
  printf("Enter name:");      scanf("%s",s2.name);
  printf("Enter M1 marks:"); scanf("%f",&s2.m1);
  printf("Enter M2 marks:"); scanf("%f",&s2.m2);
  printf("Enter M3 marks:"); scanf("%f",&s2.m3);
 //calculating total and average marks of first student
 s1.tot=s1.m1+s1.m2+s1.m3;
 s1.avg=s1.tot/3;
 //calculating total and average marks of second student
 s2.tot=s2.m1+s2.m2+s2.m3;
 s2.avg=s2.tot/3;
 //displaying the first student record fields
 printf("The fallowing are the First student details are:\n");
 printf("Roll no=%d\n",s1.rno);
 printf("Name=%s\n",s1.name);
 printf("m1=%f\n",s1.m1);
 printf("M2=%f\n",s1.m2);
 printf("M3=%f\n",s1.m3);
 printf("Total=%f\n",s1.tot);
 printf("Average=%f\n",s1.avg);
 //displaying second record fields
  printf("The fallowing are the second student details are:\n");
 printf("Roll no=%d\n",s2.rno);
 printf("Name=%s\n",s2.name);
 printf("m1=%f\n",s2.m1);
 printf("M2=%f\n",s2.m2);
 printf("M3=%f\n",s2.m3);
 printf("Total=%f\n",s2.tot);
 printf("Average=%f\n",s2.avg);
 getch();
 }
