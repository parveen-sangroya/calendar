#include <stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<d:\tested\header.h>
#include<d:\tested\dialog.h>
#include<d:\tested\dialog1.h>
#include<d:\tested\year.h>
#include<d:\tested\holliday.h>
#include<d:\tested\month.h>
#include<d:\tested\shak.h>
#include<d:\tested\vikram.h>
#include<d:\tested\about.h>
#include<d:\tested\date.h>
#include<d:\tested\time.h>
#include<d:\tested\use.h>
//#include<f:\tested\info.cpp>
int hp1,option;
char ch;
int x1,k=-1,sb=10,y1,q=0,hp,submanu=0;
menubar()
{
settextstyle(2,0,6);
outtextxy(10,-2,"=  Christian  Current  Shak  Vikrami  Holiday   Timing  Help");
outtextxy(40,3,"_");
outtextxy(154,3,"_");
outtextxy(232,3,"_");
outtextxy(292,3,"_");
outtextxy(378,3,"_");
outtextxy(492,3,"_");
outtextxy(566,3,"_");
}
int exit()
{
k=0;
setcolor(4);
rectangle(5,-1,21,21);
setfillstyle(1,4);
floodfill(8,15,4);
x=0;
setcolor(7);
menubar();
setcolor(6);
rectangle(x,22,x+180,120);
setfillstyle(1,6);
floodfill(x+30,50,6);
setcolor(7);
rectangle(x+5,27,x+175,115);
outtextxy(x+20,32,"Repaint desktop ");
outtextxy(x+20,52,"Refresh  ");
rectangle(x+5,82,x+175,115);
outtextxy(x+20,87,"Exit  ");

	setcolor(6);
	rectangle(25,0,54,22);
	setfillstyle(1,6);
	floodfill(30,5,6);
       setcolor(7);
menubar();
return x;


}
 int chrisnanak(int k)
{

if(k==1)
{
setcolor(4);
rectangle(33,-1,127,21);
setfillstyle(1,4);
floodfill(50,15,4);
x=28;
}
if(k==2)
{
setcolor(4);
rectangle(136,-1,213,21);
setfillstyle(1,4);
floodfill(160,15,4);
x=131;
}
setcolor(7);
menubar();
setcolor(6);
rectangle(x,22,x+165,120);
setfillstyle(1,6);
floodfill(x+30,50,6);

setcolor(7);
rectangle(x+5,27,x+160,115);
outtextxy(x+20,32,"Year   ");
outtextxy(x+20,52,"Month  ");
rectangle(x+5,82,x+160,115);
outtextxy(x+20,87,"Holiday     >");

return x;
}

 int  shakvik( int k)
{
if(k==3)
{
setcolor(4);
rectangle(225,-1,273,21);
setfillstyle(1,4);
floodfill(260,15,4);
x=220;
}
else
{
setcolor(4);
rectangle(285,-1,358,21);
setfillstyle(1,4);
floodfill(330,15,4);
x=280;
}
setcolor(7);
menubar();
setcolor(6);
rectangle(x,22,x+165,89);
setfillstyle(1,6);
floodfill(x+20,50,6);
setcolor(7);
rectangle(x+5,27,x+160,84);
outtextxy(x+20,32,"Year     ");
outtextxy(x+20,52,"Month    ");
 return x;

}

int holiday()
{
setcolor(4);
rectangle(370,-1,457,21);
setfillstyle(1,4);
floodfill(410,15,4);
x=365;

setcolor(7);
menubar();
setcolor(6);
rectangle(x,22,x+165,87);
setfillstyle(1,6);
floodfill(x+20,50,6);
setcolor(7);
rectangle(x+5,27,x+160,82);
outtextxy(x+20,32,"Year        ");
outtextxy(x+20,52,"Month            ");


return x;

}

int compare()
{
setcolor(4);
rectangle(464,-1,536,21);
setfillstyle(1,4);
floodfill(500,15,4);
x=459;

setcolor(7);
menubar();
setcolor(6);
rectangle(x,22,x+165,87);
setfillstyle(1,6);
floodfill(x+20,50,6);
setcolor(7);
rectangle(x+5,27,x+160,82);
outtextxy(x+20,32,"Date        ");
outtextxy(x+20,52,"Time       ");

return x;

}



 int help()
{
setcolor(4);
rectangle(539,-1,593,21);
setfillstyle(1,4);
floodfill(590,15,4);
x=428;

setcolor(7);
menubar();
setcolor(6);
rectangle(x,22,x+165,87);
setfillstyle(1,6);
floodfill(x+20,50,6);
setcolor(7);
rectangle(x+5,27,x+160,82);
outtextxy(x+20,32,"Use    ");
outtextxy(x+20,52,"About 	  ");
return x;

}

void mainmenu()
{

setcolor(7);
menubar();
setbkcolor(8);
setcolor(6);
rectangle(-1,0,640,21);
setfillstyle(1,6);
floodfill(200,10,6);
settextstyle(2,0,6);
setcolor(7);
menubar();
}
void menu( int x)
{
mainmenu();
setcolor(7);
menubar();
//sub menu
setcolor(6);
rectangle(x-12,22,x+250,120);
setfillstyle(1,6);
floodfill(x+10,50,6);
}
char get()
{
ch=getch();
hidemouseptr();
if(ch==0)
{
ch=getch();
hidemouseptr();
}return ch;

}

void main()
{
int gd,gm;

gd=DETECT;
initgraph(&gd,&gm,"c:\\tc\\bgi");

end:
 int i,y2,h,m1,x,l,y,choice,select;
 int up=33,down,updown=0;


char string[2];
   struct date d;
   getdate(&d);
   struct  time t;




/*
alt+c=46;
alt+n=49;
tl+s=31;
l+v=47;
ctrl+m=50;
ctrl+h=35;
alt +l=38;
*/
//delay(100);
do
{
cleardevice();

sb=10;

if(ch!=27)
{
y=x=2345455333;

setbkcolor(8);
setcolor(6);
rectangle(-1,0,640,21);
setfillstyle(1,6);
floodfill(200,10,6);

settextstyle(2,0,6);
setcolor(7);
menubar();

do
{


restrict(0,0,639,479);
showmouseptr();

la:
if(mx1!=mx)
{
cleardevice();
mainmenu();
}
while(!kbhit())
{
	showmouseptr();
	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{

	if(my<20)
	{
	if(mx>=33&&mx<=127)
	{ch=46;
	k=1;
	}

	if(mx>=136&&mx<=213)
	{
	ch=22;
	k=2;
	}
	if(mx>=225&&mx<=273)
	{
	ch=31;
	k=3;
	}
	if(mx>=285&&mx<=358)
	{
	ch=47;
	k=4;
	}
	if(mx>=370&&mx<=457)
	{
	ch=35;
	k=5;
	}
	if(mx>=464&&mx<=536)
	{
	ch=50;
	k=6;
	}
	if(mx>=537&&mx<=593)
	{
	ch=38;
	k=7;
	}
	if(mx>=5&&mx<=21)
	{
      ch=100;
      k=0;
       }
      select=ch;
  hidemouseptr();

	     goto lb;

	}
	else
	    hidemouseptr();

      }
}
 ch=get();
hidemouseptr();

kb:

cleardevice();
mainmenu();

lb:
delay(10);
}while(ch!=46&&ch!=22&&ch!=31&&ch!=37&&ch!=50&&ch!=35&&ch!=38&&ch!=47&&ch!=100);
}
else
{
mainmenu();
if(x==0)
{
k=0;
ch=100;
}

if(x==28)
{
ch=46;
k=1;
}
if(x==131)
{
ch=28;
k=2;
}
if(x==220)
{
ch=31;
k=3;
}
if(x==280)
{
ch=47;
k=4;
}
if(x==365)
{
ch=35;
k=5;
}
if(x==459)
{
ch=50;
k=6;
}
if(x==443)
{
ch=38;
k=7;
}

}

if(choice!=ch)
{
 hidemouseptr();
cleardevice();
mainmenu();
}

 if(submanu==choice&&ch==27)
{
if(k==1)
ch=46;
if(k==2)
ch=22;
if(k==3)
ch=31;
if(k==4)
ch=47;
if(k==6)
ch=50;

}

 choice=ch;

 int a;
 int submenu=0;

movelabel:

if(ch==100&&k==0&&(my>88&&my<108)&&(mx>=12&&mx<165))
exit(1);
if( ch!=50)
if((my>72&&my<92)||(my>108&&my<120))
	{
			updown=12;
	}
hidemouseptr();
if(updown==1&&submenu==0)
{

down=y;
}

if(ch==100)
{

k=0;
x=exit();

}

if(ch==46||ch==22)
{

if(ch==46)
k=1;
if(ch==22)
k=2;
x=chrisnanak(k);

}

if(ch==31||ch==47)
{
if(ch==31)
k=3;
else
k=4;
x=shakvik(k);
}

if(ch==35)
{
k=5;
x=holiday();
}
if(ch==50)
{

k=6;
x=compare();
}

if(ch==38)
{
k=7;
x=help();
}

 y=33;
 x=x+12;

if(choice==22)
x=143;

setcolor(4);
if(ch==100)
rectangle(x,y,x+155,y+18);
else
rectangle(x,y,x+140,y+18);
setfillstyle(1,4);
floodfill(x+5,y+1,4);
while(ch!=13&&k>-1&&ch!=27)
{
//back forward

if(ch==77||ch==75)
{
if(ch==77)
{
k++;
if(k>7)
k=0;

}
if(ch==75)
{
k--;
if(k<0)
k=7;

}
cleardevice();
mainmenu();

if(k==0)
{
x=exit();
}

if(k==1||k==2)
{
x=chrisnanak(k);
}
if(k==3||k==4)
{
x=shakvik(k);
}
if(k==5)
{
x=holiday();
}
if(k==6)
{
x=compare();
}
if(k==7)
{
x=help();
}
 x=x+12;
 y=33;
 setcolor(4);

 if(k==0)
{
rectangle(x,y,x+155,y+18);
}
else
{
 rectangle(x,y,x+140,y+18);
}
 setfillstyle(1,4);
 floodfill(x+5,y+1,4);


}

if(ch==80||ch==72)
{

if(ch==80)
{
setcolor(6);
if(k==0)
{
rectangle(x,y,x+155,y+18);
}
else
{
rectangle(x,y,x+140,y+18);
}

setfillstyle(1,6);
floodfill(x+5,y+1,6);

if(k>2)
{
if(y==53)
y=33;
else
y=y+20;

}
else
{
if(y==89)
y=33;
else
y=y+20;
if(y==73)
{
y=y+16;
}
}

}
if(ch==72)
{

setcolor(6);

if(k==0)
{
rectangle(x,y,x+155,y+18);
}
else
{
rectangle(x,y,x+140,y+18);
}
setfillstyle(1,6);
floodfill(x+5,y+1,6);

if(k>2)
{
if(y==33)
y=53;
else
y=y-20;

}
else
{

if(y==33)
y=89;
else
y=y-20;
if(y==69)
y=y-16;
}

}
setcolor(4);

if(k==0)
{
rectangle(x,y,x+155,y+18);
}
else
{
rectangle(x,y,x+140,y+18);
}
setfillstyle(1,4);
floodfill(x+5,y+1,4);

}

if(k==0)
{
setcolor(7);
outtextxy(x+ 8,32,"Repaint desktop ");
outtextxy(x+ 8,52,"Refresh  ");
outtextxy(x+8,87,"Exit");

}
if(k==1||k==2)
{

if(k==2)
x=143;

setcolor(7);
outtextxy(x+8,32,"Year       ");
outtextxy(x+8,52,"Month 	      ");

outtextxy(x+8,87,"Holiday     >");
}

if(k==3||k==4)
{

setcolor(7);
outtextxy(x+ 8,32,"Year         ");
outtextxy(x+ 8,52,"Month 	       ");
}

if(k==6||k==5)
{
setcolor(7);
if(k==5)
{
outtextxy(x+8,32,"Year      ");
outtextxy(x+8,52,"Month	      ");
}
if(k==6)
{
outtextxy(x+8,32,"Date     ");
outtextxy(x+8,52,"Time     ");

}
}
if(k==7)
{
setcolor(7);
outtextxy(x+8,32,"Use        ");
outtextxy(x+8,52,"About 	      ");
}
 mx1=mx;
       mx2=my;



do
{
click:
restrict(0,0,639,479);
showmouseptr();
{

	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
	if(my>=20&&my<33)
	{
	goto click;
	}
       if(k==1)
      if(mx<32&&mx>170)
      goto click;


       if(my<20)
	{
	hidemouseptr();
   goto la;
       }
       y=0;

       if(my>=92&&my<=108&&ch!=100)
       {

	      if(mx>=39&&mx<=179&&k==1)
       {  x=40;
       ch=13;
       }
       y=89;
      sb=12;
       if(mx>=142&&mx<=282&&k==2)
	{x=143;
	    ch=13;
       }

	    if(mx>=232&&mx<=372&&k==3)
       {
	x=232;
       ch=13;
       }

      if(mx>=292&&mx<=432&&k==4)
       {
	x=292;
	ch=13;
       }


	hidemouseptr();
	  goto lc;

       }

       //code start =
       if(ch==100||k==0)
       {
	if(mx>=12&&mx<=166)
       {
       if(my>=33&&my<=51)
       {
       x=12;
       y=33;
       y1=45;
       ch=13;
       goto law1;
       }

       if(my>=53&&my<=71)
       {
       x=12;
       y=53;
       y1=65;
       ch=13;
       goto law1;
       }
       if(my>=92&&my<=108)
       {
       exit(1);
       }
    }
	submenu=1;
	updown=1;
	goto movelabel;
       }

     //code start christan year
       updown=0;
       if(ch==46||k==1)
       {
       if(mx>=39&&mx<=179)
       {
       if(my>=33&&my<=51)
       {
       x=40;
       y=33;
       y1=45;
       ch=13;
       goto  law1;

       }

       if(my>=53&&my<=71)
       {
       x=40;
       y=53;
       y1=65;
       ch=13;
       goto  law1;

       }
     }
    if(mx>=53&&mx<=191)
    {
     if(my>=122&&my<=140)
     {
       x=40;
       y=110;
       y1=122;

     }
     if(my>=142&&my<=160)
     {
       x=40;
       y=110;
       y1=142;
     }

     }
     updown=1;
     goto movelabel;
    }
     //code start Current year
     if(ch==22||k==2)
     {
      if(mx>=142&&mx<=282)
      {
       if(my>=33&&my<=51)
       {
       x=143;
       y=33;
       y1=45;
       ch=13;
       goto  law1;

      }
       if(my>=53&&my<=71)
       {
       x=143;
       y=53;
       y1=65;
       ch=13;
       goto  law1;

      }
      }
    if(mx>=156&&mx<=296)
    {
     if(my>=122&&my<=140)
     {
     x=143;
     y=110;
     y1=122;
     }
     if(my>=142&&my<=160)
     {
     x=143;
     y=110;
     y1=142;
     }


      }
    updown=1;
     goto movelabel;

     }
     //code start shak year
     if(ch==31||k==3)
     {
      if(mx>=232&&mx<=372)
      {
       if(my>=33&&my<=51)
       {
       x=232;
       y=33;
       y1=45;
       ch=13;
       goto  law1;

      }
       if(my>=53&&my<=71)
       {
       x=232;
       y=53;
       y1=65;
       ch=13;
       goto  law1;

      }
      }
    updown=1;
     goto movelabel;

     }
     //code start vikram year
      if(ch==47||k==4)
     {
      if(mx>=292&&mx<=432)
      {
       if(my>=33&&my<=51)
       {
       x=292;
       y=33;
       y1=45;
       ch=13;
       goto  law1;

      }
       if(my>=53&&my<=71)
       {
       x=292;
       y=53;
       y1=65;
       ch=13;
       goto  law1;

      }
      }
    updown=1;
     goto movelabel;

     }//code start Holliday
       if(ch==35)
       {
	if(mx>=377&&mx<=517)
	{
	 if(my>=33&&my<=51)
	 {
	  x=377;
	  y=33;
	  y1=45;
	  ch=13;
	  goto law1;
	 }
	 if(my>=53&&my<=71)
	 {
	  x=377;
	  y=53;
	  y1=65;
	  ch=13;
	  goto law1;
	 }
	}
      }
     //code start Compare year
      if(ch==50)
     {
	    if(mx>=471&&mx<=610)
       {
       if(my>=33&&my<=51)
       {
       x=471;
       y=33;
       y1=45;
       ch=13;
       goto  law1;

       }

       if(my>=53&&my<=71)
       {
       x=471;
       y=53;
       y1=65;
       ch=13;
       goto  law1;

       }
     }

      submenu=1;
     }
     // code start help
     if(ch==38)
     {
     if(mx>=455&&mx<=595)
     {
     if(my>=33&&my<=51 )
     {
     x=455;
     y=33;
     y1=45;
      ch=13;
       goto law1;

     }
     if(my>=53&&my<=71 )
     {
     x=455;
     y=53;
     y1=65;
      ch=13;
       goto law1;

       }

    }
    submenu=1;
   }


		hidemouseptr();
       ch=13;

       goto lc;

      }


}
}while(!kbhit());
hidemouseptr();
if(ch!=72&&ch!=80&&ch!=75&&ch!=77)
hp1=ch;
ch=get();
hidemouseptr();
if(ch==46||ch==22||ch==31||ch==37||ch==50||ch==35||ch==38||ch==47)
goto kb;
lc:
}
if((x==440&&y==33&&y1==0)||(x==440&&y==53&&y1==0))
if(ch==13)
goto law1;
if((x==40&&y==33&&(y1==0||y1==45))||(x==40&&y==53&&(y1==0||y1==65))||(x==143&&y==33&&(y1==0||y1==45))||(x==143&&y==63&&(y1==0||y1==65))||(x==232&&y==33&&(y1==0||y1==45))||(x==232&&y==53&&(y1==0||y1==65))||(x==292&&y==33&&(y1==0||y1==45))||(x==292&&y==53&&(y1==0||y1==65))||(x==377&&y==33&&(y1==0||y1==45))||(x==377&&y==53&&(y1==0||y1==65))||(x==455&&y==33&&(y1==0||y1==45))||(x==455&&y==53&&(y1==0||y1==65))||(x==12&&y==33&&(y1==0||y1==45))||(x==12&&y==53&&(y1==0||y1==65))||(x==471&&y==33&&(y1==0||y1==45))||(x==471&&y==53&&(y1==0||y1==65)))
{
if(ch==13)
goto law1;
}

if((hp1==50||hp1==35))
{

if((button&1)==1)
	  {
		  ch=hp1;
		   hp1=0;
		  hidemouseptr();
		 // goto click;
	  }
    }



gotoxy(20,130);
if(ch==27)
{
cleardevice();
mainmenu();
ch='a';
}


//code of holiday
if(ch==13)
{


if(sb!=0)
{

if((x==40||x==143||x==232||x==292)&&(y==89))
{


y=110;

setcolor(8);
rectangle(x,y,x+165,y+65);
setfillstyle(1,8);
floodfill(x+30,y+30,8);

setcolor(6);
rectangle(x,y,x+165,y+65);
setfillstyle(1,6);
floodfill(x+30,y+30,6);
setcolor(7);
rectangle(x+5,y+5,x+160,y+60);
sb=0;

}


if(x==471&&(y==33||y==53))
{
y=y+21;
x=x-70;

}


 int   y1=y+12;
ch='a';
while(ch!=13&&ch!=27)
{

if(sb==0)
{
hidemouseptr();

int xx;

if(k==1)
{
x=xx=40;
setcolor(4);
rectangle(xx,33,xx+140,75);
setfillstyle(1,4);
floodfill(xx+50,70,4);
}
if(k==2)
{
x=xx=143;
setcolor(4);
rectangle(xx,33,xx+140,75);
setfillstyle(1,4);
floodfill(xx+50,70,4);


}
if(k==3)
{
x=xx=232;
setcolor(4);
rectangle(xx,33,xx+140,75);
setfillstyle(1,4);
floodfill(xx+50,70,4);


}
if(k==4)
{
x=xx=292;
setcolor(4);
rectangle(xx,33,xx+140,75);
setfillstyle(1,4);
floodfill(xx+50,70,4);


}

setcolor(6);
rectangle(xx,33,xx+140,75);
setfillstyle(1,6);
floodfill(xx+50,70,6);

setcolor(7);
outtextxy(xx+ 8,32,"Year     ");
outtextxy(xx+ 8,52,"Month       ");
	 setcolor(4);
	rectangle(xx,89,xx+140,107);
	 setfillstyle(1,4);
      floodfill(xx+50,100,4);
setcolor(7);
if(k==1||k==2)
outtextxy(xx+8,87,"Holiday     >");

setcolor(4);
rectangle(x+13,y1,x+152,y1+18);
setfillstyle(1,4);
floodfill(x+50,y1+10,4);
setcolor(7);
outtextxy(x+18,y+10,"Year   ");
outtextxy(x+18,y+30,"Month  ");

submanu=choice;

}

if((x==12&&y==89)||ch==13)
{

exit(1);
}
//sub year
int counter;

do
{

hidemouseptr();

	 delay(200);
start:
do
{
restrict(0,0,639,479);
showmouseptr();
	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{


		if(my>=20&&my<33)
	{
	goto start;
	}

       if(my<20)
	{
	hidemouseptr();
   goto la;
       }

	   //== repaint desktop
      if(k==0)
      {

      if(mx>=12&&mx<=165)
      {
       if(my>=33&&my<=51)
       {
       x=12;
       y=33;
       y1=45;
       ch=13;
       goto law1;
       }
	     if(my>=53&&my<=71)
       {
       x=12;
       y=53;
       y1=65;
       ch=13;
       goto law1;

       }

      }

      }

	 if(k==1)
	{
	//christian year month
	   if(y1==122||y1==142)
	    counter=1;
	    else
	    counter=0;
	if(mx>=39&&mx<=179&&y1!=122&&y1!=142)
	{
	if(my>=33&&my<=51)
	{
	 x=40;
	 y=33;
	 y1=45;

	}
		if(my>=53&&my<=71)
	{
	 x=40;
	 y=53;
	 y1=65;
	}

	}

	 //christian holliday year month
	if(mx>=53&&mx<=191)
	{

	if(my>=122&&my<=140)
	{
	x=40;
	y=110;
	y1=122;
	ch=13;
	goto law;
		 }
	 else
	if(my>142&&my<=160)
	{
	x=40;
	y=110;
	y1=142;
		ch=13;
	goto law;

	}

	    }
}
 //Current year month
	 if(k==2)
	{
	if(y1==122||y1==142)
	    counter=1;
	    else
	    counter=0;

	if(mx>=142&&mx<=282&&y1!=122&&y1!=142)
	{
	if(my>=33&&my<=51)
	{
	 x=143;
	 y=33;
	 y1=45;
	ch=13;
	goto law1;
	}
		if(my>=53&&my<=71)
	{
	 x=143;
	 y=53;
	 y1=65;
	ch=13;
	goto law1;
	}

	}

	 //Current holliday year month
	if(mx>=154&&mx<=293)
	{
	if(my>=122&&my<=140)
	{
	x=143;
	y=110;
	y1=122;
		ch=13;
	goto law;

		 }
	 else
	if(my>142&&my<=160)
	{
	x=143;
	y=110;
	y1=142;
		ch=13;
	goto law;

	}

	    }
}

// shak year month
if(k==3)
{
	if(y1==122||y1==142)
	    counter=1;
	    else
	    counter=0;

	if(mx>=232&&mx<=372&&y1!=122&&y1!=142)
	{
		if(my>=33&&my<=51)
		{
		 x=232;
		 y=33;
		 y1=45;
		ch=13;
	goto law1;
	}
		if(my>=53&&my<=71)
		{
		 x=232;
		 y=53;
		 y1=65;
		ch=13;
	goto law1;
	}

	}

}

//vikram year month
if(k==4)
{
	if(y1==122||y1==142)
	    counter=1;
	    else
	    counter=0;

	if(mx>=392&&mx<=432&&y1!=122&&y1!=142)
	{
		if(my>=33&&my<=51)
		{
		 x=292;
		 y=33;
		 y1=45;
			ch=13;
	goto law1;

		}
		if(my>=53&&my<=71)
		{
		 x=292;
		 y=53;
		 y1=65;
			ch=13;
	goto law1;

		}

	  }

}

// holliday

if(k==5)
{

  if(mx>=377&&mx<517)
      {
       if(my>=33&&my<=51)
       {
       x=377;
       y=33;
       y1=45;
       ch=13;
       goto law1;
       }
	     if(my>=53&&my<=71)
       {
       x=377;
       y=53;
       y1=65;
       ch=13;
       goto law1;

       }

      }

      }


//compare year month
if(k==6)
{

     if(mx>=455&&mx<=595)
     {
     if(my>=33&&my<=51 )
     {
     x=455;
     y=33;
     y1=45;
      ch=13;
       goto law1;

     }
     if(my>=53&&my<=71 )
     {
     x=455;
     y=53;
     y1=65;
      ch=13;
       goto law1;

       }

    }


}

//help
if(k==7)
{
	if(mx>=455&&mx<=595)
	{
	if(my>=33&&my<=51)
	{
	x=455;
	y=33;
	y1=45;
	ch=13;
	goto law1;
	}
	if(my>=53&&my<=71)
	{
	x=455;
	y=53;
	y1=65;
	ch=13;
	goto law1;
	}

	}

}



// hidemouseptr();

 ch=13;
 if(counter==0)
 goto law;


}


}while(!kbhit());
}while(!kbhit());

hidemouseptr();
ch=getch();
hidemouseptr();

lg:

setcolor(6);
if(sb==1)
rectangle(x+12,y1,x+212,y1+18);
else
if(sb==0)
rectangle(x+12,y1,x+152,y1+18);
setfillstyle(1,6);
floodfill(x+50,y1+10,6);

if(ch==72)
{
 if(sb==1)
 {
  if(y==54)
  {
   if(y1==66)
    y1=86;
    else
    y1=y1-20;
   }
   else
  if(y==74)
  {
   if(y1==86)
   y1=106;
   else
   y1=y1-20;
  }
 }

else
{
if(y==110)
{
if(y1==122)
y1=142;
else
y1=y1-20;
}

}
}
if(ch==80)
{
if(sb==1)
{
if(y==54)
{
if(y1==86)
y1=66;
else
y1=y1+20;
}
else
if(y==74)
{
if(y1==106)
y1=86;
else
y1=y1+20;
}

}
else
{
if(y==110)
{
if(y1==142)
y1=122;
else
y1=y1+20;
}

}
}


}


if(sb==0)
{

setcolor(4);
rectangle(x+12,y1,x+152,y1+18);
setfillstyle(1,4);
floodfill(x+50,y1+10,4);
setcolor(7);

outtextxy(x+20,y+10,"Year   ");
outtextxy(x+20,y+30,"Month  ");

//*************************code for all down menu compare &holliday***************
}

if(ch==13)
{

law:
hidemouseptr();
cleardevice();
mainmenu();

//christian holliday year
if(x==40&&y==110&&y1==122)
{
dialogyear();
if(year >0)
comday(year);

}
//christian holliday month
if(x==40&&y==110&&y1==142)
{
dialogmonth();
if(year >0)
{
commonth(year,month);
getch();
}
}

//Current holliday year
if(x==143&&y==110&&y1==122)
{
comday(d.da_year);
showmouseptr();
}

//Currunt holliday month
if(x==143&&y==110&&y1==142)
{
commonth(d.da_year,d.da_mon);
showmouseptr();
getch();
}


}


}

}

//**************************code for any one**********************************

if(ch==13)
{
law1:

hidemouseptr();
cleardevice();
mainmenu();

//christian year
if(x==40&&y==33&&(y1==45||y1==0))
{

dialogyear();
if(year >0)
{engyear(year);
getch();
}
}
//christian month
if(x==40&&y==53&&(y1==65||y1==0))
{
dialogmonth();
if(year >0)
{
engmonth(year,month);
getch();
}
}

//current year
if(x==143&&y==33&&(y1==45||y1==0))
{
engyear(d.da_year);
showmouseptr();
getch();
}
// current month
if(x==143&&y==53&&(y1==65||y1==0))
{
engmonth(d.da_year,d.da_mon);
showmouseptr();
getch();

}

//shak year
if(x==232&&y==33&&(y1==45||y1==0))
{

dialogyear();
if(year >0)
{
shakengyear(year);
getch();
}
}
//shak month
if(x==232&&y==53&&(y1==65||y1==0))
{

dialogmonth();
if(year>0)
{
shakengmon(year,month);
getch();
}
}

//vikram year
if(x==292&&y==33&&(y1==45||y1==0))
{
dialogyear();
if(year>57)
{vikengyear(year);
getch();
}else if(year<=57&&back==0)
{
goto ladwa;
}
}
//vikram month
if(x==292&&y==53&&(y1==65||y1==0))
{

dialogmonth();
if(year >57)
{
vikengmon(year,month);
getch();
}  if(year<=57&&back==0)
{
mainmenu();
settextstyle(8,0,2);
do
{ ladwa:
setcolor(7);
outtextxy(135,50," Minimum value of Year is 58 ");
delay(100);
setcolor(6);
outtextxy(135,50," Minimum value of Year is 58 ");
delay(100);
}while(!kbhit());
goto law1;
}

}

// = repaint desktop
if(x==12&&y==33&&(y1==45||y1==0))
{
cleardevice();
mainmenu();
}
//information
if(x==12&&y==53&&(y1==65||y1==0))
{
cleardevice();
mainmenu();
}
//help use
if((x==455&&y==33&&y1==45)||(x==440&&y==33&&y1==0))
{
use();
}
//help about
if((x==455&&y==53&&y1==65)||(x==440&&y==53&&y1==0))
{
aboutdialog();

}
if(x==471&&y==33&&(y1==45||y1==0))
{
 datedialog();
}
if(x==471&&y==53&&(y1==65||y1==0))
{
timedialog();
}
// holliday >year
if(x==377&&y==33&&(y1==45||y1==0))
{
dialogyear();
if(year>0)
comday(year);
}
// holliday >month>christian
if(x==377&&y==53&&(y1==65||y1==0))
{
   dialogmonth();
  if(year >0)
{
commonth(year,month);
getch();
}
}
}
  lawa:
  if(x==12&&y==33)
{
cleardevice();
delay(100);
}
hidemouseptr();
}while(x!=1);
}
