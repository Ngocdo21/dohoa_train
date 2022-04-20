#include<graphics.h>

#include<stdlib.h>

#include<stdio.h>

#include<conio.h>

#include<dos.h>

void Tuyet(void){
	setcolor(15);
	for(int j=1;j<=30;j++){
		int x= rand()%getmaxx();
		int y=rand()%getmaxy();
		outtextxy(x, y, "*");
	}
}
void house(void){

		setcolor(8);
    line(550, 350, 600, 400);
    line(550, 350, 750,350);
    line(750, 350, 800, 400);
    line(750, 350, 800, 400);
    line(600,400,600,500);
    line(600,400,800,400);
    setfillstyle(SOLID_FILL,8);
    floodfill(670,370,8);
    setcolor(RED);
    line(490, 410, 550, 350);
    line(550, 350, 600, 400);
    line(490, 410, 500, 410);
    line(500,410,500,460);
    line(500,460,600,500);
    line(598,400,598,500);
    setfillstyle(SOLID_FILL,RED);
    floodfill(550,400,RED);
    putpixel(550,430,14);
    setcolor(RED);

    rectangle(600,400,800,500);
    setfillstyle(SOLID_FILL,RED);
    floodfill(650,450,RED);
    setcolor(BLACK);
    rectangle(690,450,720,498);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(710,480,BLACK);
    setcolor(BLACK);
    line(535,410,565,420);
    line(535,440,565,450);
    line(535,410,535,440);
    line(565,420,565,450);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(550,430,BLACK);

}
void tree(void){
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		line(240,420,275,420);
		line(240,420,245,405);
		line(275,420,270,405);
		line(245,405,240,405);
		line(270,405,275,405);
		line(240,405,245,390);
		line(275,405,270,390);
		line(245,390,240,390);
		line(270,390,275,390);
		line(240,390,258,370);
		line(275,390,257,370);
		floodfill(259,375,WHITE);

		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		line(250,460,250,420);
		line(265,460,265,420);
		line(250,460,265,460);
		line(250,420,265,420);
		floodfill(255,441,WHITE);

}

void tree2(void){
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		line(340,520,375,520);
		line(340,520,345,505);
		line(375,520,370,505);
		line(345,505,340,505);
		line(370,505,375,505);
		line(340,505,345,490);
		line(375,505,370,490);
		line(345,490,340,490);
		line(370,490,375,490);
		line(340,490,358,470);
		line(375,490,357,470);
		floodfill(359,475,WHITE);

		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		line(350,560,350,520);
		line(365,560,365,520);
		line(350,560,365,560);
		line(350,520,365,520);
		floodfill(355,541,WHITE);

}
void tree3(void){
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,GREEN);
		line(240,520,275,520);
		line(240,520,245,505);
		line(275,520,270,505);
		line(245,505,240,505);
		line(270,505,275,505);
		line(240,505,245,490);
		line(275,505,270,490);
		line(245,490,240,490);
		line(270,490,275,490);
		line(240,490,258,470);
		line(275,490,257,470);
		floodfill(259,475,WHITE);
	
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		line(250,560,250,520);
		line(265,560,265,520);
		line(250,560,265,560);
		line(250,520,265,520);
		floodfill(255,541,WHITE);

}

void train(int i){
	setcolor(7);

	line(0,750,1600,750);

   line(0,775,1600,775);

   line(0,780,1600,780);


   // back box
	
	rectangle(30+i,640,180+i,650);

   rectangle(40+i,650,170+i,725);

   // back wheels

   setcolor(9);

	circle(70+i,737,12);
	circle(140+i,737,12);



   // back incircle

   setcolor(10);

	circle(70+i,737,8);
	pieslice(70+i,737,0-i,45-i,8);
	pieslice(70+i,737,90-i,135-i,8);
	pieslice(70+i,737,180-i,225-i,8);
	pieslice(70+i,737,270-i,315-i,8);
   	circle(140+i,737,8);
	pieslice(140+i,737,0-i,45-i,8);
	pieslice(140+i,737,90-i,135-i,8);
	pieslice(140+i,737,180-i,225-i,8);
	pieslice(140+i,737,270-i,315-i,8);

	rectangle(70+i,735,140+i,739);

   // back windows

   setcolor(14);

	rectangle(55+i,665,155+i,700);

   line(83+i,665,83+i,700);

   line(122+i,665,122+i,700);

   // joint

   setcolor(13);

	rectangle(170+i,700,210+i,690);

   // engine

   setcolor(10);

	rectangle(200+i,620,260+i,630);

   rectangle(210+i,630,250+i,700);

   rectangle(250+i,640,345+i,725);

   rectangle(250+i,640,330+i,710);


   // front wheels

   setcolor(9);

   circle(225+i,725,25);
	
   circle(320+i,737,12);
	pieslice(320+i,737,0-i,45-i,8);
	pieslice(320+i,737,90-i,135-i,8);
	pieslice(320+i,737,180-i,225-i,8);
	pieslice(320+i,737,270-i,315-i,8);
   circle(280+i,737,12);
	

   // front small incircle

   setcolor(11);

	circle(320+i,737,8);

   circle(280+i,737,8);
	pieslice(280+i,737,0-i,45-i,8);
	pieslice(280+i,737,90-i,135-i,8);
	pieslice(280+i,737,180-i,225-i,8);
	pieslice(280+i,737,270-i,315-i,8);
	rectangle(320+i,735,280+i,739);
		
   // front big incircle

   setcolor(13);

	circle(225+i,725,15);
	pieslice(225+i,725,0-i,45-i,15);
	pieslice(225+i,725,90-i,135-i,15);
	pieslice(225+i,725,180-i,225-i,15);
	pieslice(225+i,725,270-i,315-i,15);
   // front windows

   setcolor(11);


   rectangle(220+i,635,240+i,665);

   // fire

   setcolor(9);
   
   rectangle(300+i,600,330+i,640);

   rectangle(290+i,590,340+i,600);


   // tracker

   setcolor(13);
   
   line(332+i,725,332+i,750);

   line(345+i,725,355+i,750);


   // light

   setcolor(12);

	rectangle(345+i,660,355+i,680);

   // hills

   setcolor(10);

	line(0,199,200,100);
  arc(220,157,49,118,60);
  line(259,112,460,300);
  line(353,200,600,60);
  arc(625,115,49,118,60);
   line(662,70,761,191);
   line(645,285,780,172);
//   
  line(780,171,960,279);
  line(870,225,1020,75);
	arc(1065,115,50,140,60);

	line(1105,70,1400,245);
	line(1333,285,1600,130);
	line(1303,185,1383,112);
	line(1383,112,1493,193);
   // sun

   	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
   	circle(475,75,25);
   	floodfill(476,75,RED);
	
// cloud
	setcolor(14);
	circle(200+i,70,25);
	setfillstyle(SOLID_FILL,14);
	floodfill(200+i,71,14);

	circle(235+i,60,30);
	setfillstyle(SOLID_FILL,14);
	floodfill(240+i,61,14);

	circle(225+i,80,30);
	setfillstyle(SOLID_FILL,14);
	floodfill(225+i,91,14);

	circle(260+i,70,30);
	setfillstyle(SOLID_FILL,14);
	floodfill(260+i,81,14);
   	setcolor(11);
//cloud 2

	setcolor(14);
	circle(290+i,50,25);
	setfillstyle(SOLID_FILL,14);
	floodfill(290+i,51,14);

	circle(325+i,40,30);
	setfillstyle(SOLID_FILL,14);
	floodfill(330+i,41,14);

	circle(315+i,60,30);
	setfillstyle(SOLID_FILL,14);
	floodfill(315+i,71,14);

	circle(350+i,50,30);
	setfillstyle(SOLID_FILL,14);
	floodfill(350+i,61,14);
   	setcolor(11);
   	
   	//cloud 3
   	
   	setcolor(WHITE);
	circle(90+i,250,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(90+i,251,WHITE);

	circle(125+i,240,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(130+i,241,WHITE);

	circle(115+i,260,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(115+i,271,WHITE);

	circle(150+i,250,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(150+i,261,WHITE);
   	setcolor(11);
   	//cloud 4
   	setcolor(WHITE);
	circle(490+i,350,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(490+i,351,WHITE);

	circle(525+i,340,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(530+i,341,WHITE);

	circle(515+i,360,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(515+i,371,WHITE);

	circle(550+i,350,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(550+i,361,WHITE);
   	setcolor(11);
   	//cloud 5
   	setcolor(WHITE);
	circle(690+i,190,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(690+i,191,WHITE);

	circle(725+i,180,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(730+i,181,WHITE);

	circle(715+i,200,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(715+i,211,WHITE);

	circle(750+i,190,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(750+i,201,WHITE);
   	setcolor(11);
   	//cloud 6
   	setcolor(WHITE);
	circle(890+i,70,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(890+i,71,WHITE);

	circle(925+i,70,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(930+i,71,WHITE);

	circle(915+i,90,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(915+i,101,WHITE);

	circle(950+i,80,30);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(950+i,91,WHITE);
   	setcolor(11);
   
 
   settextstyle(3,0,2);

   setcolor(14);

   outtextxy(600,748,"NGUYEN THE DONG & DO THI BICH NGOC");


   delay(10);

}
void epu()
{
	settextstyle(10,0,4);

   setcolor(1);

   outtextxy(135,78,"EPU");
	setcolor(1);
	arc(90,90,30,330,45);
	arc(90,90,30,330,44);
	arc(90,90,30,330,43);
	arc(90,90,30,330,42);
	arc(90,90,30,330,41);
	arc(90,90,30,330,40);
	arc(90,90,30,330,39);
	line(38,86,104,65);
	line(40,96,105,75);
	arc(39,91,99,300,5);

	line(40,89,102,70);
	line(41,90,103,71);
	line(42,91,104,72);
	
	line(40,100,105,80);
	line(42,110,105,91);
	arc(40,106,99,300,5);
	line(42,103,101,85);
	line(43,104,102,86);
	line(44,105,103,87);
	
	line(40,115,104,96);
	line(42,125,105,106);
	arc(42,120,99,300,5);
	line(46,117,101,100);
	line(47,118,102,101);
	line(48,119,103,102);

}
	int main(){
		

int i;

//int gdriver = DETECT, gmode, errorcode;

int xmax, ymax;

//initgraph(&gdriver, &gmode, "c://tc//bgi");
initwindow(1600,900);

//PlaySound("E:\\C++\\Thomas.wav",NULL,SND_FILENAME);
	for(int j = 0;j<=100;j++){
		
		for(i=0;i<=1000;i++){
	
	cleardevice();
	epu();
	Tuyet();
	house();
	tree();
	tree2();
	tree3();
	train(i);
   }
}

	//system("PAUSE");
  getch();
	
   closegraph();

}
