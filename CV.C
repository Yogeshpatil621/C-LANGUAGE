#include<stdio.h>
void swap(int,int);
void main()
{
int a=10;
int b=20;
clrscr();

printf("Before swaping value in main a=%d,b=%d\n",a,b);
swap(a,b);
printf("After swapping value in main a=%d,b=%d\n",a,b);
getch();
}
void swap( int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("After swapping value in fucation a=%d,b=%d\n",a,b);
getch();
}
