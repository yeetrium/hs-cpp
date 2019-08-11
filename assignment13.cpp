//Luis Nunez, C++ 14/15, Assignment #13

#include "winbgim.h"
#include "stdlib.h"
#include "time.h"
#include <string>
using namespace std;

void Prompt();
void DrawBall();
void DisplayAnswer();
string DisplayInputXY (int nX, int nY);

int main()
{
    srand(time(NULL));
    initwindow(640,480);
    Prompt();
    DrawBall();
    string sQuestion;
    do
    {
      sQuestion = DisplayInputXY(320,260);
      cleardevice();
      DrawBall();
      DisplayAnswer();
      getch();
      cleardevice();
      DrawBall();
    }while(sQuestion != "quit");
    closegraph();
    return 0;
}

string DisplayInputXY (int nX, int nY)
{
    setcolor(GREEN);
    settextjustify(1,0);
    settextstyle(10, 0, 2);
    string sString;
    char cInput;
    do
    {
        cInput=getch();
        setcolor(GREEN);
        outtextxy(nX,nY,sString.c_str());
        if(cInput!=13&&cInput!=8)
            sString+=cInput;
        else if (cInput==8)
            sString=sString.substr(0,sString.length()-1);
        setcolor(GREEN);
        outtextxy(nX,nY,sString.c_str());
    }while(cInput!=13);
    settextjustify(0,2);
    settextstyle(0, 0, 1);
    return sString;
}

void Prompt()
{
    settextstyle(8, 0, 5);
    settextjustify(1, 1);
    setcolor(GREEN);
    outtextxy(320, 100, "Your Fortune In A Ball");
    setcolor(WHITE);
    outtextxy(320, 300, "Ask a yes/no question.");
    setcolor(RED);
    outtextxy(320, 400, "Press any key to continue.");
    getch();
    cleardevice();
}

void DrawBall()
{
    setfillstyle(1,BLUE);
    bar(0, 0, 640, 480);
    setcolor(COLOR(255, 140, 0));
    circle(320, 240, 200);
    setfillstyle(1, COLOR(255, 165, 0));
    fillellipse(320, 240, 200, 200);
    setfillstyle(1,GREEN);
    fillellipse(320, 90, 60, 50);

    int naPoints[] = {270,60, 319,138,368,60};
    setcolor(RED);
    setfillstyle(1,BLUE);
    fillpoly(3,naPoints);

    settextstyle(9, 0, 3);
    settextjustify(1, 1);
    setcolor(GREEN);
    outtextxy(320, 30, "Please ask a Yes/No question.");
    outtextxy(320, 460, "Enter \"quit\" to exit.");

}

void DisplayAnswer()
{
    string saAnswers[] = {"otlook not so good",
                          "without a doubt",
                          "my reply is no",
                          "you may rely on it",
                          "better not tell you now",
                          "yes definately",
                          "don't count on it",
                          "reply hazy, try again",
                          "as I see it yes",
                          "cannot prediict now",
                          "very doubtful",
                          "concentrate and ask again",
                          "my sources say no",
                          "it is certain",
                          "most likely",
                          "outlook good"};

    setfillstyle(1,GREEN);
    fillellipse(320, 235, 170, 25);
    settextstyle(10, 0, 3);
    settextjustify(1, 1);
    setcolor(RED);
    outtextxy(320, 240, saAnswers[rand()%16].c_str());
}