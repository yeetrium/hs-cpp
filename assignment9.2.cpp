//Luis Nunez, C++ 14/15, Assignment#9.2

#include "winbgim.h"

void DrawLinesI ();
void DrawLinesII ();
void DrawLinesIII ();
void DrawLinesIV ();
void DrawTriangles ();
void DrawCircles ();
void DrawCirclesII ();

int main ()
{
    initwindow(640,480);
    DrawLinesI();
    DrawLinesII();
    DrawLinesIII();
    DrawLinesIV();
    DrawTriangles();
    for (int nNum = 1; nNum <=10; nNum++)
    {
       DrawCircles();
       DrawCirclesII();
    }
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
       setcolor(CYAN);
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
       setcolor(CYAN);
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
       setcolor(CYAN);
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
       setcolor(CYAN);
       line (320,nLineY,nLineX,240);
       nLineY = nLineY - 10;
       nLineX = nLineX + 10;
    }
}
void DrawTriangles ()
{

    int nPointX = 0;
    while (nPointX<=300)

    {
       int naPoints[] = {0,0,nPointX,240,0,480};
       delay(1);
       setcolor(RED);
       setfillstyle(1,RED);
       fillpoly(3,naPoints);
       nPointX++;
    }

    int nPointY = 0;
    while (nPointY<=220)
    {
       int naPointsII[] = {0,0,320,nPointY,640,0};
       delay(1);
       setcolor(BLUE);
       setfillstyle(1,BLUE);
       fillpoly(3,naPointsII);
       nPointY++;
    }

    int nPointXTwo = 640;
    while (nPointXTwo>=340)
    {
       int naPointsIII[] = {640,0,nPointXTwo,240,640,480};
       delay(1);
       setcolor(YELLOW);
       setfillstyle(1,YELLOW);
       fillpoly(3,naPointsIII);
       nPointXTwo--;
    }

    int nPointYTwo = 480;
    while (nPointYTwo>=260)
    {
       int naPointsIV[] = {640,480,320,nPointYTwo,0,480};
       delay(1);
       setcolor(GREEN);
       setfillstyle(1,GREEN);
       fillpoly(3,naPointsIV);
       nPointYTwo--;
    }
}
void DrawCircles ()
{
    for (int nRadius = 0; nRadius<=700; nRadius = nRadius + 10)
    {
	   delay(45);
       setcolor(GREEN);
       circle(300,240,nRadius);
       setcolor(YELLOW);
       circle(320,220,nRadius);
       setcolor(BLUE);
       circle(340,240,nRadius);
       setcolor(RED);
       circle(320,260,nRadius);
    }
}
void DrawCirclesII ()
{
    for (int nRadius = 0; nRadius<=700; nRadius = nRadius + 10)
    {
	   delay(45);
       setcolor(BLACK);
       circle(300,240,nRadius);
       setcolor(BLACK);
       circle(320,220,nRadius);
       setcolor(BLACK);
       circle(340,240,nRadius);
       setcolor(BLACK);
       circle(320,260,nRadius);
    }
}
