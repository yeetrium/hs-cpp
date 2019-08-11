//Luis Nunez, C++ 14/15, Assignment #8.1
#include "winbgim.h"	

void DrawCircles ();
void DrawCirclesBck ();

int main ()
{
  initwindow(640, 480);
  DrawCircles();
  DrawCirclesBck ();
  getch();
  closegraph();
  return 0; 
}
void DrawCircles ()
{
  for (int nRadius = 0; nRadius<=700; nRadius = nRadius + 10)
  {
	delay(50);
    setcolor(RED);
	circle(0,0,nRadius);
    setcolor(GREEN);
    circle(640,0,nRadius);
    setcolor(BLUE);
    circle(0,480,nRadius);
    setcolor(MAGENTA);
    circle(640,480,nRadius);
  }
}
void DrawCirclesBck ()
{
  for (int nRadius = 0; nRadius<=700; nRadius = nRadius + 10)
  {
	delay(50);
    setcolor(BLACK);
	circle(0,0,nRadius);
    setcolor(BLACK);
    circle(640,0,nRadius);
    setcolor(BLACK);
    circle(0,480,nRadius);
    setcolor(BLACK);
    circle(640,480,nRadius);
  }
}
