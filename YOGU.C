#include<stdio.h>
union unionjop
{
char name[20];
float salary;
int workerno;
}
ujop;
struct structjop
{
char name[20];
float salary;
int workerno;
}sjop;
void main()
{
clrscr();
printf("size of union:%s bytes",sizeof(ujop));
printf("\nsize of struct:%s byts",sizeof(sjop));
getch();
}