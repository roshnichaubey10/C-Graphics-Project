#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void backgroundhouse(int,int,int);
void roadside();
void roadsidecolor1();
void roadsidecolor2();
void drawCar();
void main()
{
 int gd=DETECT,gm,i,n=-3000,rl=-3000;
 initgraph(&gd,&gm,"");
 for(i=1;i<100;i++)
 {
 //to get back at (0,0) position
 cleardevice();
 //m,rl,r(color code)
 backgroundhouse(n,rl,1);
 n+=5;
 rl+=5;
 //Car
 drawCar();
 //road
 line(0,227,215,227);
 line(430,227,639,227);
 line(0,252,215,252);
 line(435,252,639,252);
 //roadside
 roadside();
 //road side color
 if(i%2==0)
   roadsidecolor1();
 else
   roadsidecolor2();
 delay(350);
 }
 getch();
 closegraph();
}
//Car
void drawCar()
{
 //Drawing Car
 line(270,270,370,270);
 line(210,270,230,270);
 line(410,270,430,270);

 //1st tyre
 arc(250,270,0,180,20);
 circle(250,270,15);
 circle(250,270,13);
 line(235,270,265,270);
 line(250,285,250,255);

 //2nd tyre
 arc(390,270,0,180,20);
 circle(390,270,15);
 circle(390,270,13);
 line(375,270,405,270);
 line(390,285,390,255);

 line(430,270,430,180);
 line(300,180,430,180);
 line(300,180,240,225);
 line(240,225,215,225);
 line(210,270,210,262);
 line(210,262,215,262);
 line(215,262,215,225);
 arc(215,240,90,270,5);

 //front light
 setfillstyle(SOLID_FILL,RED);
 floodfill(214,244,WHITE);

 //front window
 line(305,185,267,215);
 line(267,215,267,225);
 line(267,225,330,225);
 line(330,225,330,185);
 line(330,185,305,185);
 setfillstyle(9,YELLOW);
 floodfill(306,186,WHITE);

 //back window
 line(340,185,340,225);
 line(340,225,400,225);
 line(400,225,400,185);
 line(400,185,340,185);
 setfillstyle(9,YELLOW);
 floodfill(341,186,WHITE);

 line(266,236,400,236);
 line(270,238,404,238);
 line(274,240,408,240);

 //back light
 line(435,265,435,244);
 line(430,265,435,265);
 line(430,258,435,258);
 line(430,251,435,251);
 line(430,244,435,244);
 setfillstyle(SOLID_FILL,RED);
 floodfill(431,264,15);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(431,257,15);
 setfillstyle(SOLID_FILL,RED);
 floodfill(431,245,15);

 //Colouring car
 setfillstyle(SOLID_FILL,1);
 floodfill(211,269,15);
}

//Road Side
void roadside()
{
 int i;
 for(i=0;i<210;i+=35)
 line(i,227,i,252);
 for(i=639;i>435;i-=35)
 line(i,227,i,252);
}

//Road Side Color Toggling
void roadsidecolor1()
{
 int i,n=1;
 for(i=1;i<4;i++)
 {
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(n,228,WHITE);
  n+=70;
 }
 n=600;
 for(i=1;i<4;i++)
 {
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(n,228,WHITE);
   n-=70;
 }

 //Lines between the road
 for(i=0;i<639;i+=80)
 {
   rectangle(i,290,i+40,295);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(i+1,291,WHITE);
 }

 //Both the car tyres
 setfillstyle(SOLID_FILL,WHITE);
 floodfill(251,271,WHITE);
 floodfill(249,269,WHITE);
 floodfill(391,269,WHITE);
 floodfill(389,271,WHITE);
}

void roadsidecolor2()
{
 int i,n=37;
 for(i=1;i<4;i++)
 {
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(n,228,WHITE);
  n=n+70;
 }
 n=638;
 for(i=1;i<4;i++)
 {
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(n,228,WHITE);
  n=n-70;
 }

 //Lines between the road
 for(i=41;i<639;i+=80)
 {
  rectangle(i,290,i+40,295);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(i+1,291,WHITE);
 }

 //for both the tyres
 setfillstyle(SOLID_FILL,WHITE);
 floodfill(251,269,WHITE);
 floodfill(249,271,WHITE);
 floodfill(391,271,WHITE);
 floodfill(389,269,WHITE);
}

void backgroundhouse(int m,int rl,int r)
{
 int n,p,q;
 q=rl;
 for(n=m,p=rl;n<5000;n+=150,p+=230,q+=180)
 {
 line(n,30,n+80,30);
 line(n,40,n+80,40);
 line(n,30,n,40);
 line(n+80,30,n+80,40);
 line(n+10,40,n+10,100);
 line(n+70,40,n+70,100);
 line(n+10,100,n+70,100);

 rectangle(n+30,65,n+50,100);
 rectangle(n+15,65,n+25,80);
 rectangle(n+55,65,n+65,80);

 setfillstyle(SOLID_FILL,r++);
 floodfill(n+1,31,WHITE);
 floodfill(n+79,31,WHITE);

 setfillstyle(SOLID_FILL,r++);
 floodfill(n+11,41,WHITE);
 floodfill(n+69,41,WHITE);

 setfillstyle(SOLID_FILL,r++);
 floodfill(n+31,66,WHITE);
 floodfill(n+49,66,WHITE);

 setfillstyle(SOLID_FILL,r);
 floodfill(n+16,66,WHITE);
 floodfill(n+24,66,WHITE);

 setfillstyle(SOLID_FILL,r++);
 floodfill(n+56,66,WHITE);
 floodfill(n+64,66,WHITE);

 //road light
 setcolor(YELLOW);
 line(10+p,227,10+p,150);
 line(11+p,227,11+p,150);
 line(10+p,150,p-10,130);
 line(p-10,130,p-13,135);
 line(p-13,135,p-1,139);
 setfillstyle(SOLID_FILL,WHITE);
 floodfill(p-11,134,YELLOW);
 line(11+p,150,p+30,140);
 line(p+30,140,p+30,145);
 line(p+30,145,p+20,145);
 setfillstyle(SOLID_FILL,WHITE);
 floodfill(p+29,144,YELLOW);
 setcolor(WHITE);

 //tree in road light
 setcolor(BROWN);
 line(118+p,227,120+p,200);
 line(127+p,227,126+p,195);
 line(120+p,200,126+p,195);
 line(118+p,227,127+p,227);
 setfillstyle(SOLID_FILL,BROWN);
 floodfill(119+p,226,BROWN);
 line(119+p,220,117+p,215);
 line(117+p,215,115+p,220);
 line(115+p,220,113+p,215);
 line(113+p,215,111+p,220);
 line(111+p,220,109+p,215);
 line(109+p,215,107+p,220);
 line(107+p,220,123+p,180);
 line(127+p,220,129+p,215);
 line(129+p,215,131+p,220);
 line(131+p,220,133+p,215);
 line(133+p,215,135+p,220);
 line(135+p,220,137+p,215);
 line(137+p,215,139+p,220);
 line(139+p,220,123+p,180);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(110+p,214,BROWN);
 floodfill(136+p,214,BROWN);
 setcolor(WHITE);

 //Tree
 setcolor(BROWN);
 line(30+q,440,31+q,405);
 line(31+q,400,32+q,390);
 line(31+q,405,20+q,399);
 line(31+q,400,20+q,395);
 circle(20+q,397,2);
 line(50+q,440,47+q,410);
 line(46+q,405,45+q,380);
 line(47+q,410,60+q,399);
 line(46+q,405,60+q,395);
 circle(60+q,397,2);
 line(30+q,440,50+q,440);
 line(32+q,390,45+q,380);
 setfillstyle(SOLID_FILL,BROWN);
 floodfill(31+q,439,BROWN);
 floodfill(49+q,439,BROWN);

 arc(31+q,400,210,320,10);
 arc(22+q,400,180,320,10);
 arc(18+q,390,150,280,15);
 arc(18+q,380,120,250,15);
 arc(20+q,370,100,200,15);
 arc(28+q,360,45,200,15);
 arc(37+q,360,20,150,15);
 arc(48+q,362,0,120,15);
 arc(55+q,367,330,90,15);
 arc(60+q,377,310,70,15);
 arc(62+q,385,270,45,17);
 arc(50+q,395,220,20,18);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(78+q,385,BROWN);
 floodfill(4+q,390,BROWN);
 setcolor(WHITE);
 }
}
