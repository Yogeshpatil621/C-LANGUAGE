#include<stdio.h>
#include<string.h>
struct person1
{
char name[10];
int citno;
float saraly;
}
person1;
void main()
{
strcpy(person1.name,"Yogesh patil");
person1.citno=1235;
person1.saraly=2000;
clrscr();
printf("Name:%s\n",person1.name);
printf("cityzoneno:%d\n",person1.citno);
printf("saraly:%2.f",person1.saraly);
getch();
}