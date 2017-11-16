/*
В прямой четырехугольной призме провести сечение, проходящее
через сторону нижнего основания под углом 30 ° к основанию.
*/


#include <graphics.h>
#include <conio.h>
main()
{
      initwindow(800,600);
      setcolor(2);
      rectangle(300,200,600,400);
      rectangle(350,250,650,450);
      line(300,200,350,250);
      line(600,400,650,450);
      line(600,200,650,250);
      line(300,400,350,450);
      setcolor(5);
      line(350,450,615,415);
      setcolor(5);
      outtextxy(370,460,"tipa 30°");
      
      getch();
      closegraph();
}      
      
