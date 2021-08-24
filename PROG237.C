// Copying one structure to another of the same type.

#include<stdio.h>
#include<conio.h>
struct student
{
 int rno;
 int age;
 char gender;
 float ht;
 float wt;
};
void main()
{
 struct student s1={1, 24, 'M',  5.5, 60.5};
 struct student s2;clrscr();
 s2=s1;
 printf("%d %d %c %f %f",s2.rno,s2.age,s2.gender,s2.ht,s2.wt);
 getch();
}
