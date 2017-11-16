/*
Нарисовать кораблик!!!
*/



#include <graphics.h>
#include <conio.h> 
main()
{
      initwindow(800,600);
    
      
        moveto(200,200);
        lineto(150,170);
        lineto(200,140);
        lineto(200,250);
        lineto(150,250);
    lineto(180,350);
    lineto(600,350);
    lineto(650,250);
    lineto(200,250);
    rectangle(250,200,550,250);
    rectangle(300,160,500,200);
    rectangle(350,100,400,160);
    circle(220,275,10);   
    circle(290,275,10);
    circle(360,275,10);
    circle(430,275,10);
    circle(500,275,10);
    circle(570,275,10);
getch();
closegraph();
}
