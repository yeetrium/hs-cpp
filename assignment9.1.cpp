//Luis Nunez, C++ 14/15, Assignment#9

#include "winbgim.h"

void DrawLinesI ();
void DrawLinesII ();
void DrawLinesIII ();
void DrawLinesIV ();

int main ()
{
    initwindow(640,480);
    DrawLinesI();
    DrawLinesII();
    DrawLinesIII();
    DrawLinesIV();
    getch();
    closegraph();
    return 0;
}

void DrawLinesI ()
{
    int nLineY = 0, nLineX = 320;
    while (nLineY<=240)
    {
       delay(30);
       setcolor(BLUE);
       line (320,nLineY,nLineX,240);
       nLineY = nLineY + 10;
       nLineX = nLineX + 10;
    }
}
void DrawLinesII ()
{
    int nLineY = 240, nLineX = 560;
    while (nLineY<=480)
    {
       delay(30);
       setcolor(GREEN);
       line (320,nLineY,nLineX,240);
       nLineY = nLineY + 10;
       nLineX = nLineX - 10;

    }
}
void DrawLinesIII ()
{
    int nLineY = 480, nLineX = 320;
    while (nLineY>=240)
    {
       delay(30);
       setcolor(YELLOW);
       line (320,nLineY,nLineX,240);
       nLineY = nLineY - 10;
       nLineX = nLineX - 10;
    }
}
void DrawLinesIV ()
{
    int nLineY = 240, nLineX = 80;
    while (nLineY>=0)
    {
       delay(30);
       setcolor(RED);
       line (320,nLineY,nLineX,240);
       nLineY = nLineY - 10;
       nLineX = nLineX + 10;
    }
}
