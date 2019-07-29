#include<stdio.h>
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class maiz
{
  public:
      int co_mo,point;
      maiz()
      {
          co_mo=0;
          point=0;
      }
      void caption();
      void countm();
      void body1();
      void condition1(int*j,int*k);
      void body2();
      void condition2(int*j,int*k);
      void body3();
      void condition3(int*j,int*k);
      void level_1();
      void level_2();
      void level_3();
};

void welcome()
{
   int maxx,maxy;
  maxx=getmaxx();
  maxy=getmaxy();
 setfillstyle(9,2);
 bar(maxx/2-150,maxy/2-180,maxx/2+140,maxy/2+110);
 setcolor(15);
 outtextxy(maxx/2-120,maxy/2-150,"WELCOME TO THE MAZE GAME");
 outtextxy(maxx/2-140,maxy/2+80,"PRESS ANY ENTER TO CONTINUE..!");
 setcolor(5);
 outtextxy(maxx/2-120,maxy/2-100,"Instructions:");
 setcolor(9);
 outtextxy(maxx/2-120,maxy/2-80,"Use navigation keys");
 outtextxy(maxx/2-120,maxy/2-60,"to move :");
 setcolor(RED);
 outtextxy(maxx/2-100,maxy/2-40,"UP,DOWN");
 setcolor(YELLOW);
 outtextxy(maxx/2-100,maxy/2-20,"LEFT,RIGHT");

 getch();

}

char mode()
{
   int maxx,maxy,ch;
  maxx=getmaxx();
  maxy=getmaxy();
 setfillstyle(9,5);
 bar(maxx/2-150,maxy/2-180,maxx/2+140,maxy/2+110);
 setcolor(15);
 outtextxy(maxx/2-120,maxy/2-150,"PLEASE SELECT:");
 setcolor(2);
 outtextxy(maxx/2-120,maxy/2-100,"1.SINGLE PLAYER");
 setcolor(9);

 outtextxy(maxx/2-120,maxy/2-60,"2.TWO PLAYERS");

 ch=getch();
 return ch;

}

void player1()
{
     int maxx,maxy;
  maxx=getmaxx();
  maxy=getmaxy();
  while(1)
  {
      settextstyle(1,HORIZ_DIR,6);
      outtextxy(maxx/2-150,maxy/2-50,"PLAYER 1");
      char ch=getch();
      if(ch==13) return;
     getch();
  }

}

void player2()
{
     int maxx,maxy;
  maxx=getmaxx();
  maxy=getmaxy();
  while(1)
  {
      settextstyle(1,HORIZ_DIR,6);
  outtextxy(maxx/2-150,maxy/2-50,"PLAYER 2");
  char ch=getch();
  if(ch==13) return;
 getch();
  }

}

void winner1()
{
     int maxx,maxy;
  maxx=getmaxx();
  maxy=getmaxy();
  while(1)
  {
      settextstyle(1,HORIZ_DIR,3);
  outtextxy(maxx/2-150,maxy/2-50,"WINNER PLAYER1!!!");
  char ch=getch();
  if(ch==13) return;
    getch();
  }

}

void winner2()
{
     int maxx,maxy;
  maxx=getmaxx();
  maxy=getmaxy();
  while(1)
  {
      settextstyle(1,HORIZ_DIR,3);
  outtextxy(maxx/2-150,maxy/2-50,"WINNER PLAYER2!!!");
  char ch=getch();
  if(ch==13) return;
 getch();
  }

}

void maiz::countm()
{
    setcolor(14);
  outtextxy(515,198,"MOVES");
  char arr[50];
  sprintf(arr,"%d",co_mo);
    setcolor(3);
  outtextxy(520,215,arr);
  co_mo=co_mo+1;
  setcolor(12);

}

void maiz::body1() //figure
{ setcolor(2);
  line(0,100,450,100);//h
  line(50,160,400,160);//
  line(100,220,250,220);
  line(50,300,200,300);
  line(400,325,450,325);
  line(0,400,500,400);
  line(450,370,500,370);
  line(0,100,0,400);//v
  line(50,160,50,370);
  line(250,220,250,400);
  line(400,160,400,325);
  line(450,100,450,370);
  line(325,400,325,250);
  setcolor(14);
  circle(500,385,10);
  setcolor(WHITE);
}

void maiz::condition1(int*j,int*k)
{
    if(*k==390)
    {
        if(*j>=10 && *j<=500)
            *k-=5;
    }
    if(*k==110)
    {
        if(*j>=10 && *j<=440)
            *k+=5;
    }
    if(*k==170)
    {
        if(*j>=60 && *j<=390)
            *k+=5;
    }
    if(*k==150)
    {
        if(*j>=60 && *j<=390)
            *k-=5;
    }
    if(*k==310)
    {
        if(*j>=60&&*j<=210)
            *k+=5;
    }
     if(*k==290)
    {
        if(*j>=60&&*j<=210)
            *k-=5;
    }
    if(*k==230)
    {
        if(*j>=100&&*j<=260)
            *k+=5;
    }
     if(*k==210)
    {
        if(*j>=100&&*j<=260)
            *k-=5;
    }
    if(*k==315)
    {
        if(*j>=410&&*j<=440)
            *k-=5;
    }
     if(*k==335)
    {
        if(*j>=410&&*j<=440)
            *k+=5;
    }
    if(*k==380)
    {
        if(*j>=450&&*j<=500)
            *k+=5;
    }
    if(*j==10)
    {
        if(*k>=110&&*k<=390)
            *j+=5;
    }
    if(*j==60)
    {
        if(*k>=170&&*k<=370)
            *j+=5;
    }
    if(*j==40)
    {
        if(*k>=170&&*k<=370)
            *j-=5;
    }
    if(*j==240)
    {
        if(*k>=230&&*k<=390)
            *j-=5;
    }
    if(*j==260)
    {
        if(*k>=230&&*k<=390)
            *j+=5;
    }
    if(*j==390)
    {
        if(*k>=170&&*k<=325)
            *j-=5;
    }
     if(*j==410)
    {
        if(*k>=170&&*k<=325)
            *j+=5;
    }
    if(*j==315)
    {
        if(*k>=250&&*k<=390)
            *j-=5;
    }
     if(*j==335)
    {
        if(*k>=250&&*k<=390)
            *j+=5;
    }
    if(*j==440)
    {
        if(*k>=110&&*k<=370)
            *j-=5;
    }
    if(*k<=370&&*k>=160&&*j<=60&&*j>=40)
    {
            if(*j<=50) *j-=10;
        *j+=5;
    }
    if(*k<=400&&*k>=220&&*j<=260&&*j>=240)
    {
            if(*j<=250) *j-=10;
        *j+=5;
    }
    if(*k<=325&&*k>=160&&*j<=410&&*j>=390)
    {
            if(*j<=400) *j-=10;
        *j+=5;
    }
    if(*k<=400&&*k>=250&&*j<=335&&*j>=315)
    {
            if(*j<=325) *j-=10;
        *j+=5;
    }
    if(*k<=370&&*k>=100&&*j<=460&&*j>=440)
    {
            if(*j<=450) *j-=10;
        *j+=5;
    }
    if(*j<=400&&*j>=50&&*k<=170&&*k>=150)
    {
            if(*k<=160) *k-=10;
        *k+=5;
    }
    if(*j<=200&&*j>=50&&*k<=310&&*k>=290)
    {
            if(*k<=300) *k-=10;
        *k+=5;
    }
     if(*j<=250&&*j>=100&&*k<=230&&*k>=210)
    {
            if(*k<=220) *k-=10;
        *k+=5;
    }
    if(*j<=450&&*j>=400&&*k<=335&&*k>=315)
    {
            if(*k<=325) *k-=10;
        *k+=5;
    }
    if(*j<=500&&*j>=450&&*k<=380&&*k>=360)
    {
            if(*k<=370) *k-=10;
        *k+=5;
    }
}



void maiz::body2()
{
    setcolor(6);
    line(0,100,450,100);
  line(0,100,0,400);
  line(0,400,500,400);
  line(450,100,450,370);
  line(450,370,500,370);
  line(50,130,50,250);
  line(50,130,100,130);
  line(100,130,100,200);
  line(100,200,125,200);
  line(125,200,125,400);
  line(75,275,75,400);
  line(175,130,175,200);
  line(175,200,350,200);
  line(400,100,400,350);
  line(250,150,400,150);
  line(400,250,300,250);
  line(350,250,350,300);
  line(400,350,450,350);
  line(225,200,225,350);
  line(300,325,300,400);
  line(125,250,175,250);
  line(175,300,225,300);
  line(175,350,175,400);
  setcolor(14);
  circle(500,385,10);
  setcolor(WHITE);
}

void maiz::condition2(int *j,int *k)
{
    if(*k==110)
    {
        if(*j>=10&&*j<=440)
            *k+=5;
    }
    if(*j>=50&&*j<=100)
    {
        if(*k==120)
            *k-=5;
        else if(*k==140)
            *k+=5;
    }
    if(*j>=250&&*j<=390)
    {
        if(*k==140)
            *k-=5;
        else if(*k==160)
            *k+=5;
    }
    if(*j>=110&&*j<=125)
    {
        if(*k==190)
              *k-=5;
        else if(*k==210)
            *k+=5;
    }
    if(*j>=175&&*j<=350)
    {
        if(*k==190)
              *k-=5;
        else if(*k==210)
            *k+=5;
    }
    if(*j>=125&&*j<=175)
    {
        if(*k==240)
              *k-=5;
        else if(*k==260)
            *k+=5;
    }
    if(*j>=300&&*j<=390)
    {
        if(*k==240)
              *k-=5;
        else if(*k==260)
            *k+=5;
    }
    if(*j>=175&&*j<=225)
    {
        if(*k==290)
              *k-=5;
        else if(*k==310)
            *k+=5;
    }
    if(*j>=400&&*j<=450)
    {
        if(*k==340)
              *k-=5;
        else if(*k==360)
            *k+=5;
    }
    if(*j>=450&&*j<=500)
    {
        if(*k==360)
              *k-=5;
        else if(*k==380)
            *k+=5;
    }
    if(*k==390)
    {
        if(*j>=10&&*j<=500)
            *k-=5;
    }
    if(*j==10)
    {
        if(*k>=100&&*k<=390)
        {
            *j+=5;
        }
    }
    if(*j==440)
    {
        if(*k>=110&&*k<=370)
            *j-=5;
    }
    if(*k>=130&&*k<=250)
    {
        if(*j==40)
            *j-=5;
        else if(*j==60)
            *j+=5;
    }
    if(*k>=275&&*k<=390)
    {
        if(*j==65)
            *j-=5;
        else if(*j==85)
            *j+=5;
    }
    if(*k>=140&&*k<=200)
    {
        if(*j==90)
            *j-=5;
        else if(*j==110)
            *j+=5;
    }
    if(*k>=200&&*k<=390)
    {
        if(*j==115)
            *j-=5;
        else if(*j==135)
            *j+=5;
    }
    if(*k>=130&&*k<=200)
    {
        if(*j==165)
            *j-=5;
        else if(*j==185)
            *j+=5;
    }
    if(*k>=200&&*k<=350)
    {
        if(*j==215)
            *j-=5;
        else if(*j==235)
            *j+=5;
    }
    if(*k>=250&&*k<=300)
    {
        if(*j==340)
            *j-=5;
        else if(*j==360)
            *j+=5;
    }
    if(*k>=110&&*k<=350)
    {
        if(*j==390)
            *j-=5;
        else if(*j==410)
            *j+=5;
    }
    if(*k>=130&&*k<=250)
    {
        if(*j==40)
            *j-=5;
        else if(*j==60)
            *j+=5;
    }
    if(*k>=350&&*k<=390)
    {
        if(*j==165)
            *j-=5;
        else if(*j==185)
            *j+=5;
    }
    if(*k>=325&&*k<=390)
    {
        if(*j==290)
            *j-=5;
        else if(*j==310)
            *j+=5;
    }

    if(*k<=250&&*k>=130&&*j<=60&&*j>=40)
    {
            if(*j<=50) *j-=10;
        *j+=5;
    }
    if(*k<=400&&*k>=275&&*j<=85&&*j>=65)
    {
            if(*j<=75) *j-=10;
        *j+=5;
    }
    if(*k<=400&&*k>=200&&*j<=135&&*j>=115)
    {
            if(*j<=125) *j-=10;
        *j+=5;
    }
    if(*k<=400&&*k>=350&&*j<=185&&*j>=165)
    {
            if(*j<=175) *j-=10;
        *j+=5;
    }
    if(*k<=350&&*k>=200&&*j<=235&&*j>=215)
    {
            if(*j<=225) *j-=10;
        *j+=5;
    }
    if(*k<=400&&*k>=325&&*j<=310&&*j>=290)
    {
            if(*j<=300) *j-=10;
        *j+=5;
    }
    if(*k<=300&&*k>=250&&*j<=410&&*j>=390)
    {
            if(*j<=400) *j-=10;
        *j+=5;
    }
     if(*k<=350&&*k>=100&&*j<=410&&*j>=390)
    {
            if(*j<=400) *j-=10;
        *j+=5;
    }
    if(*k<=370&&*k>=100&&*j<=460&&*j>=440)
    {
            if(*j<=450) *j-=10;
        *j+=5;
    }
    if(*k<=200&&*k>=130&&*j<=185&&*j>=165)
    {
            if(*j<=175) *j-=10;
        *j+=5;
    }

    if(*j<=400&&*j>=250&&*k<=160&&*k>=140)
    {
            if(*k<=150) *k-=10;
        *k+=5;
    }
    if(*j<=350&&*j>=175&&*k<=210&&*k>=190)
    {
            if(*k<=200) *k-=10;
        *k+=5;
    }
    if(*j<=125&&*j>=100&&*k<=210&&*k>=190)
    {
            if(*k<=200) *k-=10;
        *k+=5;
    }
    if(*j<=175&&*j>=125&&*k<=260&&*k>=240)
    {
            if(*k<=250) *k-=10;
        *k+=5;
    }
    if(*j<=225&&*j>=175&&*k<=310&&*k>=290)
    {
            if(*k<=300) *k-=10;
        *k+=5;
    }
    if(*j<=400&&*j>=300&&*k<=260&&*k>=240)
    {
            if(*k<=250) *k-=10;
        *k+=5;
    }
    if(*j<=450&&*j>=400&&*k<=360&&*k>=340)
    {
            if(*k<=350) *k-=10;
        *k+=5;
    }
    if(*j<=500&&*j>=450&&*k<=380&&*k>=360)
    {
            if(*k<=370) *k-=10;
        *k+=5;
    }
}

void maiz::body3() //figure
{ setcolor(2);
  line(0,100,450,100);  //horizontal line
  line(50,130,400,130);
  line(100,160,450,160);
  line(150,190,300,190);
  line(100,220,250,220);
  line(50,250,200,250);
  line(0,400,500,400);
  line(450,370,500,370);
  line(0,100,0,400); //vertical line
  line(50,130,50,370);
  line(100,160,100,220);
  line(100,280,100,400);
  line(150,250,150,370);
  line(200,280,200,400);
  line(250,220,250,370);
  line(300,190,300,400);
  line(350,160,350,370);
  line(400,190,400,400);
  line(450,100,450,370);
  setcolor(14);
  circle(500,385,10);
  setcolor(WHITE);
}
void ball(int j,int k,int l)   //ball
{
 circle(j,k,l);
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,14);
 floodfill(j,k,WHITE);
}
void maiz::condition3(int *j,int *k)
{  if(*k==110){
	   if(*j<450 && *j>0)
	   *k=*k+5;
	   }
   if(*j==10){
    if(*k<400 && *k>100)
	*j+=5;
   }
   if(*k==390){
     if(*j<500 &&* j>0)
     *k-=5;
     }
   if(*j==440){
     if(*k>100 && *k<380)
     *j-=5;
     }
   if(*k==380){
   if(*j<500&& *j>440)
   *k+=5;
   }
   if(*k>=120 && *k<=140 ){
   if(*j<410 && *j>40 && *k<=130)
   *k-=5;
   if(*j<410 && *j>40 && *k>=130)
   *k+=5;
   }
  if(*k>=150 && *k<=170 && *j>=90 &&* j<=450){
  if(*k<=160) *k-=10;
  *k+=5;
  }
  if(*k>=180&&*k<=200&&*j>=140&&*j<=310)
  { if(*k>=190 ) *k+=10;
    *k-=5;}
  if(*k>=210&&*k<=230&&*j>=90&&*j<=260)
  {if(*k>=220) *k+=10;
   *k-=5;
  }
  if(*k<=260 && *k>=240 && *j<=210&& *j>40){
  if(*k>=250) *k+=10;
  *k-=5;
  }
  if(*k<=370&&*k>=130&&*j<=60&&*j>=40){
  if(*j<=50) *j-=10;
  *j+=5;
  }
  if(*k<=220&&*k>=160&&*j<=110&&*j>=90){
  if(*j<=100) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=280&&*j<=110&&*j>=90){
  if(*j<=100) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=250&&*j<=160&&*j>=140){
  if(*j<=150) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=280&&*j<=210&&*j>=190){
  if(*j<=200) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=220&&*j<=260&&*j>=240){
  if(*j<=250) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=190&&*j<=310&&*j>=290){
  if(*j<=300) *j-=10;
  *j+=5;
  }
  if(*k<=370&&*k>=160&&*j<=360&&*j>=340){
  if(*j<=350) *j-=10;
  *j+=5;
  }
  if(*k<=400&&*k>=190&&*j<=410&&*j>=390){
  if(*j<=400) *j-=10;
  *j+=5;
  }
}

void maiz::caption()
{
  setcolor(10);
  settextstyle(0,HORIZ_DIR,0);
  outtextxy(10,50,"Press Space to Escape from the Maze");
  setcolor(WHITE);
}
void maiz::level_1()
{
 int i,j=10,k=390,l=10,m=10,co_mo=0,flag=1;
 char c;
 cleardevice();
 while(1){
 setcolor(13);
 settextstyle(1,HORIZ_DIR,6);
 outtextxy(60,100,"LEVEL 1");
 settextstyle(0,HORIZ_DIR,0);
 setcolor(9);
 outtextxy(100,400,"Press Enter to play the level");
  char ch=getch();
 if(ch==13) break;
 getch();
  }
 cleardevice();
 body1();          //draw the figure
 ball(j,k,l);     //draw the  ball
 caption();

while(1)
{
 condition1(&j,&k); //cheacking condition
 countm();
 c=getch();
 cleardevice();
 if(c==75||c=='a') j-=5;  //left
 if(c==80||c=='s') k+=5;  //up
 if(c==77||c=='d') j+=5;  //right
 if(c==72||c=='w') k-=5;  //down
 if(c==27) return ;
 // *p=co_mo;
 caption();
 body1();        //draw the figure
 ball(j,k,l);   //draw the ball
 if(j>=500)
 {
    break ;
 }

  }

}

void maiz::level_2()
{
 int i,j=10,k=390,l=10,m=10,co_mo=0,flag=1;
 char c;
 cleardevice();
 while(1){
 setcolor(13);
 settextstyle(1,HORIZ_DIR,6);
 outtextxy(60,100,"LEVEL 2");
 settextstyle(0,HORIZ_DIR,0);
 setcolor(9);
 outtextxy(100,400,"Press Enter to play the level");
  char ch=getch();
 if(ch==13) break;
 getch();
  }
 cleardevice();
 body2();          //draw the figure
 ball(j,k,l);     //draw the  ball
 caption();

while(1)
{
 condition2(&j,&k); //cheacking condition
 countm();
 c=getch();
 cleardevice();
 if(c==75||c=='a') j-=5;  //left
 if(c==80||c=='s') k+=5;  //up
 if(c==77||c=='d') j+=5;  //right
 if(c==72||c=='w') k-=5;  //down
 if(c==27) return ;
  //*p=co_mo;
 caption();
 body2();        //draw the figure
 ball(j,k,l);   //draw the ball
 if(j>=500)
 {
    break ;
 }

  }

}

void maiz::level_3()
{
 int i,j=10,k=390,l=10,m=10,co_mo=0,flag=1;
 char c;
 cleardevice();
 while(1){
 setcolor(13);
 settextstyle(1,HORIZ_DIR,6);
 outtextxy(60,100,"LEVEL 3");
 settextstyle(0,HORIZ_DIR,0);
 setcolor(9);
 outtextxy(100,400,"Press Enter to play the level");
  char ch=getch();
 if(ch==13) break;
 getch();
  }
 cleardevice();
 body3();          //draw the figure
 ball(j,k,l);     //draw the  ball
 caption();

while(1)
{
 condition3(&j,&k); //cheacking condition
 countm();
 c=getch();
 cleardevice();
 if(c==75||c=='a') j-=5;  //left
 if(c==80||c=='s') k+=5;  //up
 if(c==77||c=='d') j+=5;  //right
 if(c==72||c=='w') k-=5;  //down
 if(c==27) return ;
  //*p=co_mo;
 caption();
 body3();        //draw the figure
 ball(j,k,l);   //draw the ball
 if(j>=500)
 {
    break ;
 }

  }

}

int main()
{
  int gd=DETECT,gm;
  char ch;
  initgraph(&gd,&gm,NULL);

  maiz m1,m2;

  welcome();
  cleardevice();
  ch=mode();
    cleardevice();
  if(ch=='1')
  {
      m1.level_1();
      cleardevice();
      getch();
      m1.level_2();
      cleardevice();
      getch();
      m1.level_3();
      cleardevice();
      getch();
  }
  else if(ch=='2')
  {
      player1();
      getch();
      cleardevice();
      m1.level_1();
      cleardevice();
      player2();
      getch();
      m2.level_1();
      if(m1.point<m2.point)
      {
        cleardevice();
        winner1();
        getch();
      }
      else
      {
          cleardevice();
          winner2();
          getch();
      }

      player1();
      getch();
      cleardevice();
      m1.level_2();
      cleardevice();
      player2();
      getch();
      m2.level_2();
      if(m1.point<m2.point)
      {
        cleardevice();
        winner1();
        getch();
      }
      else
      {
          cleardevice();
          winner2();
          getch();
      }
      player1();
      getch();
      cleardevice();
      m1.level_3();
      cleardevice();
      player2();
      getch();
      m2.level_3();
      if(m1.point<m2.point)
      {
        cleardevice();
        winner1();
        getch();
      }
      else
      {
          cleardevice();
          winner2();
          getch();
      }


  }



getch();
closegraph();
return 0;
}
