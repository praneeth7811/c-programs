//program demonstrating arrays within structure.

#include<stdio.h>
#include<conio.h>
void main()
{ struct student
 {
	int rno;
  	char name[20]; /* array is declared as member*/
	int m[3];
	int tot;
	int avg;
 };
struct student s;
int i; clrscr();

/* reading student details*/
 printf("Enter roll no:"); scanf("%d",&s.rno);
 printf("Enter name:");fflush(stdin);scanf("%s",s.name);
 printf("Enter marks in three subjects:");
 for(i=0;i<3;i=i+1)
 {
  scanf("%d",&s.m[i]);
 }
/* calculating total and average marks*/
s.tot=0;
for(i=0;i<3;i=i+1)
{
 s.tot=s.tot+s.m[i]);
}
s.avg=s.tot/3;

/* Printing student details */
 printf("\n student details are:\n");
 printf("Roll no=%d \n",s.rno);
 printf("Name=%s \n",s.name);
 printf("Marks in three subjects:");
 for(i=0;i<3;i=i+1)
 {
  printf("%d ",s.m[i]); 
 }
 printf("\ntotal=%d\n",s.tot);
 printf("\nAverage=%d \n",s.avg);
getch();
}
