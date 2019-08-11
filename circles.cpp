#include "winbgim.h"
void HumanMovement();
int nX = 320;
int nY = 240;
char cKey = 'd';
void ComputerMovement();
int nCompX = 320;
int nCompY = 360;
char cCompKey = 'l';
void Border();
int main()
{
initwindow(640,480);
Border();
do
{
if(kbhit())
cKey = getch();
delay(20);
HumanMovement();
ComputerMovement();
}while (cKey != 'q');
getch();
closegraph();
return 0;
}
void HumanMovement()
{
switch(cKey)
{
case 'a': case 'A':
nX--;
break;
case 'd': case 'D':
nX++;
break;
case 'w': case 'W':
nY--;
break;
case 's': case 'S':
nY++;
}
if(getpixel(nX,nY) != BLACK)
{
outtextxy(200,340,"Game Over Human Loses");
getch();
cKey = 'q';
}
putpixel(nX, nY, WHITE);

}
void ComputerMovement()
{
switch(cCompKey)
{

case 'l':
nCompX--;
if(getpixel(nCompX-1,nCompY)!=BLACK)
cCompKey = 'u';
break;
case 'r':
nCompX++;
if(getpixel(nCompX+1,nCompY)!=BLACK)
cCompKey = 'u';
break;
case 'u':
nCompY--;
if(getpixel(nCompX,nCompY-1)!=BLACK)
cCompKey = 'r';
break;
case 'b':
nCompY++;
if(getpixel(nCompX,nCompY+1)!=BLACK)
cCompKey = 'l';
}
if(getpixel(nCompX,nCompY) != BLACK)
{
outtextxy(200,340,"Game Over Computer Loses");
getch();
cKey = 'q';
}
putpixel(nCompX, nCompY, GREEN);
putpixel(320,360,GREEN);
}
void Border()
{
setfillstyle(1,WHITE);
bar(0,0,640,30);
setfillstyle(1,WHITE);
bar(0,30,30,480);
setfillstyle(1,WHITE);
bar(610,0,640,480);
setfillstyle(1,WHITE);
bar(0,440,640,480);
}

