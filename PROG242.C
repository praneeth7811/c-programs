// program to find total and average of n number of students using an array of structure.

#include<stdio.h>
#include<conio.h>
void main()
{ struct student
 {
  int rno;
  char name[30]; /* array is declared as member*/
  int m1;
  int m2;
  int m3;
  int tot;
  int avg;
 };
// declaration of an array of structures
struct student s[10];
int i,n; clrscr();
printf("Enter no of students:\n");
scanf("%d",&n);
// reading n number of student details
 for(i=0;i<n;i=i+1)
{
 printf("Enter the details of %d student(rno,name,m1,m2,m3):\n",i+1);
 scanf("%d",&s[i].rno);
 fflush(stdin);
 scanf("%s",s[i].name);
 scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
}
// processing  total and average marks of n no. of students
for(i=0;i<n;i++)
{
 s[i].tot=s[i].m1+s[i].m2+s[i].m3;
 s[i].avg=s[i].tot/3;
}
// display the details of n number of student
for(i=0;i<n;i=i+1)
{
 printf("\n The following are the %d  student details are:\n",i+1);
 printf("Roll no=%d \n",s[i].rno);
 printf("Name=%s \n",s[i].name);
 printf("M1=%d\n",s[i].m1);
 printf("M2=%d\n",s[i].m2);
 printf("M3=%d\n",s[i].m3);
 printf("\ntotal=%d\n",s[i].tot);
 printf("\nAverage=%d \n",s[i].avg);
}
getch();
}
