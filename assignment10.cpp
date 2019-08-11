//Luis Nunez, C++ 14/15, Assignment#10

#include "winbgim.h"

void InstrucBorderClear();
int main ()
{
    initwindow(640,480);
    InstrucBorderClear();

    int nX = 320;
    int nY = 240;
    char cKey;
    do
    {
         cKey = getch();
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
              case 'e': case 'E':
                  cleardevice();
                  InstrucBorderClear();
                  nX = 320;
                  nY = 240;
                  break;
         }
              putpixel(nX,nY,DARKGRAY);
    }while(cKey != 'q');

    closegraph();
    return 0;
}
void InstrucBorderClear()
{
     setfillstyle(1,COLOR(34,139,34));
   	 bar(0,0,640,50);
     setfillstyle(1,COLOR(34,139,34));
   	 bar(0,50,50,480);
     setfillstyle(1,COLOR(34,139,34));
   	 bar(50,415,640,480);
     setfillstyle(1,COLOR(34,139,34));
   	 bar(590,50,640,430);

     setfillstyle(1,LIGHTGRAY);
   	 bar(50,50,590,415);

     setfillstyle(1,WHITE);
   	 fillellipse(30, 445, 25, 25);
     setfillstyle(1,WHITE);
   	 fillellipse(610, 445, 25, 25);

     settextstyle(5, 0, 3);
     settextjustify(1, 1);
     setcolor(COLOR(255, 215, 0));
     outtextxy(320, 20, "Dood-Li-Doo");

     settextstyle(6, 0, 3);
     settextjustify(1, 1);
     setcolor(RED);
     outtextxy(320, 445, "Up=W, Down=S, Right=D, Left=A");
}
