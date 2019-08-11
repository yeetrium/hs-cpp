//Luis Nunez, C++ 14/15, Assignment #8.3
#include "winbgim.h"	

void DrawCircles ();
void DrawCirclesBck ();

int main ()
{
  initwindow(640, 480);
  int nNum = 1;
  while (nNum<=10)
  {
    DrawCircles();
    DrawCirclesBck ();
    nNum++;
  }
  getch();
  closegraph();
  return 0; 
}
void DrawCircles ()
{
  int nRadius = 0;
  while (nRadius<=700)
  {
	delay(20);
    setcolor(RED);
	circle(0,0,nRadius);
    setcolor(GREEN);
    circle(640,0,nRadius);
    setcolor(BLUE);
    circle(0,480,nRadius);
    setcolor(MAGENTA);
    circle(640,480,nRadius);
    nRadius = nRadius + 10;
  }
}
void DrawCirclesBck ()
{
  int nRadius = 0;
  while (nRadius<=700)
  {
	delay(20);
    setcolor(BLACK);
	circle(0,0,nRadius);
    setcolor(BLACK);
    circle(640,0,nRadius);
    setcolor(BLACK);
    circle(0,480,nRadius);
    setcolor(BLACK);
    circle(640,480,nRadius);
    nRadius = nRadius + 10;
  }
}
