#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<snap.h>
void main()
{
int count=50;
clrscr();
while(count--)
{
sound(10*random(100));
delay(75);
nosound();
textattr(randow(16)+'a'+BLINK);
cprintf("*");
}
getch();
}