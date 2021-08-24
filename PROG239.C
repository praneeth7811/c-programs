// w a c p for Comparison of individual members of structures

#include<stdio.h>
#include<conio.h>
struct employee
{
 char grade;
 int basic;
 float allowance;
};

int main()
{
 struct employee e1={'b',5750,818.75};
 struct employee e2={'b',6500,812.5};clrscr();
 if(e1.grade!=e2.grade)
	printf("Employee1 and employee2 are employed on different grades");
 else if((e1.basic+e1.allowance) > (e2.basic+e2.allowance))
	printf("Employee is senior and his total remuneration is Rs %f",(e1.basic+e1.allowance));
 else if((e1.basic+e1.allowance) ==(e2.basic+e2.allowance))
	printf("Employee1 and employee2 get the same total remineration of Rs %f",(e1.basic+e1.allowance));
 else
	printf("Employee2 is senior and his total remuneration is Rs %f",(e2.basic + e2.allowance));
 getch();
}
