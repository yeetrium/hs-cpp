//Luis Nunez, C++ 14/15, Assignment#11

#include <winbgim.h>
#include <stdlib.h>
#include <time.h>

void Instructions();
void Border();

void HumanMovement();
int nX = 180, nY = 240;
char cKey = 'd';

void ComputerMovement();
int nCompX = 460, nCompY = 240;
char cCompKey = 'l';

int main ()
{
    initwindow(640,480);
    srand(time(NULL));
    Instructions();
    Border();

    do
    {
         if(kbhit())
            cKey = getch();
         delay(1);
         HumanMovement();
         ComputerMovement();
    }while(cKey != 'q');
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
                  break;
         }
              if(getpixel(nX,nY) != BLACK)
              {
                   settextstyle(0, 0, 8);
                   setcolor(CYAN);
                   outtextxy(320,240,"Game Over");
                   getch();
                   cKey = 'q';
              }
              putpixel(nX,nY,WHITE);
}
void ComputerMovement()
{
         switch(cCompKey)
         {

              case 'l':
                  nCompX--;
                  if(getpixel(nCompX-1,nCompY)!=BLACK)

                     {
                        if(getpixel(nCompX,nCompY-1)!=BLACK)
                            cCompKey = 'n';
                        else if(getpixel(nCompX,nCompY+1)!=BLACK)
                            cCompKey = 'u';
                        else if (rand()%2 == 0)
                            cCompKey = 'n';
                        else
                            cCompKey = 'u';
                     }
                  break;
              case 'r':
                  nCompX++;
                  if(getpixel(nCompX+1,nCompY)!=BLACK)

                     {
                        if(getpixel(nCompX,nCompY+1)!=BLACK)
                            cCompKey = 'u';
                        else if(getpixel(nCompX,nCompY-1)!=BLACK)
                            cCompKey = 'n';
                        else if(rand()%2 == 1)
                            cCompKey = 'u';
                        else
                            cCompKey = 'n';
                     }
                  break;
              case 'u':
                  nCompY--;
                  if(getpixel(nCompX,nCompY-1)!=BLACK)

                     {
                        if(getpixel(nCompX+1,nCompY)!=BLACK)
                            cCompKey = 'l';
                        else if(getpixel(nCompX-1,nCompY)!=BLACK)
                            cCompKey = 'r';
                        else if(rand()%2 == 0)
                            cCompKey = 'l';
                        else
                            cCompKey = 'r';
                     }
                  break;
              case 'n':
                  nCompY++;
                  if(getpixel(nCompX,nCompY+1)!=BLACK)

                     {
                        if(getpixel(nCompX-1,nCompY)!=BLACK)
                            cCompKey = 'r';
                        else if(getpixel(nCompX+1,nCompY)!=BLACK)
                            cCompKey = 'l';
                        else if(rand()%2 == 1)
                            cCompKey = 'r';
                        else
                            cCompKey = 'l';
                     }
                  break;
         }
              if(getpixel(nCompX,nCompY) != BLACK)
              {
                   settextstyle(5, 0, 10);
                   setcolor(YELLOW);
                   outtextxy(320,240,"You Win!");
                   getch();
                   cKey = 'q';
              }
              putpixel(nCompX,nCompY,RED);
}
void Border()
{
     setfillstyle(1,COLOR(34,139,34));
   	 bar(0,0,640,10);
     setfillstyle(1,COLOR(34,139,34));
   	 bar(0,0,10,480);
     setfillstyle(1,COLOR(34,139,34));
   	 bar(0,460,640,480);
     setfillstyle(1,COLOR(34,139,34));
   	 bar(630,0,640,480);
}
void Instructions()
{
     settextstyle(3, 0, 8);
     settextjustify(1, 1);
     setcolor(BLUE);
     outtextxy(320, 100, "TRON");
     settextstyle(4, 0, 1);
     setcolor(WHITE);
     outtextxy(320, 200, "Player 1 = White");
     setcolor(RED);
     outtextxy(320, 220, "COM = Red");
     setcolor(GREEN);
     outtextxy(320, 300, "Up=W, Down=S, Right=D, Left=A");
     outtextxy(320, 340, "Press any Key to continue.");
     getch();
     cleardevice();
}
