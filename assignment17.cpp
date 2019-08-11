//Luis Nunez, C++ 14/15, Assignment #17

#include <winbgim.h>
#include <stdlib.h>

void EraseBall(int nX, int nY);
void Move(int &nX, int &nY, bool bGoingRght, bool bGoingDwn);
void Bounce(int nX, int nY, bool &bGoingRght, bool &bgoingDwn);
void DrawBall(int nX, int nY);
void DrawPaddle(int nXTwo, int nYTwo);
void ErasePaddle(int nXTwo, int nYTwo);

char cKey;

int main()
{
    initwindow(640,480);
    int nX = 320;
    int nY = 240;
    bool bGoingRght = true;
    bool bGoingDwn = false;
    int nXTwo = 100;
    int nYTwo = 450;
    cKey = getch();
    do
    {
          while(!kbhit())
          {
            EraseBall(nX,nY);
            Move(nX, nY, bGoingRght, bGoingDwn);
            Bounce(nX, nY, bGoingRght, bGoingDwn);
            DrawBall(nX, nY);
            DrawPaddle(nXTwo, nYTwo);
            delay(10);
          }
          cKey = getch();
          ErasePaddle(nXTwo, nYTwo);
          switch(cKey)
          {
              case 'a':
                  nXTwo -= 10;
                  if(nXTwo <= 0)
                     nXTwo = 0;
                  break;
              case 'd':
                  nXTwo += 10;
                  if(nXTwo >= 540)
                     nXTwo = 540;
                  break;
          }
          DrawPaddle(nXTwo, nYTwo);
    }while(cKey != 'q');
    getch();
    closegraph();
    return 0;
}

void EraseBall(int nX, int nY)
{
     setcolor(BLACK);
   	 circle(nX, nY, 20);
}

void Move(int &nX, int &nY, bool bGoingRght, bool bGoingDwn)
{
     if(bGoingRght == true)
        nX += 3;
     else
        nX -= 3;

     if(bGoingDwn == true)
        nY += 3;
     else
        nY -= 3;
}

void Bounce(int nX, int nY, bool &bGoingRght, bool &bGoingDwn)
{
     if(nX <= 0 || getpixel(nX-21,nY)!= BLACK)
        bGoingRght = true;
     else if(nX >= 620 || getpixel(nX+21,nY)!= BLACK)
        bGoingRght = false;

     if(nY <= 0 || getpixel(nX,nY-21)!= BLACK)
        bGoingDwn = true;
     else if(nY >= 460 || getpixel(nX,nY+21)!= BLACK)
        bGoingDwn = false;
}

void DrawBall(int nX, int nY)
{
     setcolor(WHITE);
   	 circle(nX, nY, 20);
}

void DrawPaddle(int nXTwo, int nYTwo)
{
     setfillstyle(1,GREEN);
     bar(nXTwo, nYTwo, nXTwo + 100, nYTwo + 30);
}

void ErasePaddle(int nXTwo, int nYTwo)
{
     setfillstyle(1,BLACK);
   	 bar(nXTwo, nYTwo, nXTwo + 100, nYTwo + 30);
}
