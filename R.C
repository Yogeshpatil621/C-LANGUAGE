#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void rainbow()
{
int gdriver=DETECT,gmode;
int x,y,z;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
printf("\nThis is a Rainbow:");
setbkcolor(BLUE+WHITE);
x=getmaxx()/2;
y=getmaxx()/2;
for(z=20;z<300;z++)
{
delay(100);
setcolor(z/10);
arc(x,y,0,180,z-10);
}
}
int main()
{
rainbow();
return 0;
}