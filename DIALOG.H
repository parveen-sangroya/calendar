 void key(int bx,int by)
 {
 setcolor(6);
rectangle(bx,by,bx+80,by+20);
setfillstyle(1,6);
floodfill(bx+10,by+10,6);

setcolor(7);
rectangle(bx,by,bx+80,by+20);
if(bx<=210)
outtextxy(215,by-5," OK ");
else
outtextxy(350,by-5," Cancel ");

 }

void backcolor(int bx,int by)
{
setcolor(0);
rectangle(bx+5,by+5,bx+85,by+25);
setfillstyle(1,0);
floodfill(bx+15,by+10,0);
key(bx,by);
}
void dialog()
{
//cleardevice();
setbkcolor(8);
setcolor(6);
rectangle(164,165,474,315);
setfillstyle(1,6);

floodfill(260,220,6);
setcolor(7);
settextstyle(8,0,1);
outtextxy(169,185,"   Year : ");
outtextxy(169,215,"   Month : ");
rectangle(164,165,474,315);
rectangle(169,170,469,310);


setcolor(6);
rectangle(279,190,440,210);
setcolor(7);
rectangle(279,190,440,210);
setfillstyle(1,7);
floodfill(290,200,7);


setcolor(6);
rectangle(279,220,440,240);
setcolor(7);
rectangle(279,220,440,240);
setfillstyle(1,7);
floodfill(290,230,7);

//code  of  button
setcolor(6);
settextstyle(8,0,1);

//outtextxy(279,185,"   2005 ");
//outtextxy(279,215,"   12 ");
settextstyle(8,0,1);


}
 void dad(int bx,int by)
 {
// setcolor(6);
//rectangle(180,250,300,300);
setcolor(0);
rectangle(bx-5,by-1,bx+85,by+25);
setfillstyle(1,0);
floodfill(bx,by,0);

setcolor(6);
rectangle(bx-5,by-1,bx+85,by+25);
setfillstyle(1,6);
floodfill(bx,by,6);




}

void dialogmonth()
{

char ch;
int i,j,k,gd,gm;

hidemouseptr();

//clrscr();
//cleardevice();
dialog();


backcolor(200,265);
backcolor(350,265);

showmouseptr();
char str[25];

backcolor(200,265);
showmouseptr();
delay(200);
char ch1[1];
long int ds,d1,dd1,d2,a[10],tab=0,message=0;
dd1=d1=279;

year=0;
month=0;
i=0;
k=0;
setcolor(6);
do
{

do
{

restrict(0,0,640,480);
showmouseptr();

	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
		if(my>=265&&my<=285)
	{
		if(mx>=200&&mx<=280)
		{
		   hidemouseptr();

		 dad(200,265);
		  key(205,270);
		  backcolor(350,265);
		  ch1[0]=year;
		  outtextxy(279,185,ch1);
		 delay(200);
		 backcolor(200,265);
		  ch=13;
		}
			if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad(350,265);

		  key(355,270);
		  backcolor(200,265);
		  delay(200);
		  backcolor(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }


}while(!kbhit());
mode:
if(message>0)
{
do
{
showmouseptr();

if(message==1)
{
	showmouseptr();
	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
		if(my>=265&&my<=285)
	{
	if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad(350,265);

		  key(355,270);
		  backcolor(200,265);
		  delay(200);
		  backcolor(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }



	delay(350);
	setcolor(7);
	outtextxy(160,100,"Please check the value of Year");

	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
		if(my>=265&&my<=285)
	{
	if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad(350,265);

		  key(355,270);
		  backcolor(200,265);
		  delay(200);
		  backcolor(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }


	delay(350);

	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
		if(my>=265&&my<=285)
	{
	if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad(350,265);

		  key(355,270);
		  backcolor(200,265);
		  delay(200);
		  backcolor(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }


	setcolor(6);

	outtextxy(160,100,"Please check the value of Year");

	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
		if(my>=265&&my<=285)
	{
	if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad(350,265);

		  key(355,270);
		  backcolor(200,265);
		  delay(200);
		  backcolor(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }


 }

if(message==2)
{
	 showmouseptr();
	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
		if(my>=265&&my<=285)
	{
	if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad(350,265);

		  key(355,270);
		  backcolor(200,265);
		  delay(200);
		  backcolor(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }


	delay(350);

	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
		if(my>=265&&my<=285)
	{
	if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad(350,265);

		  key(355,270);
		  backcolor(200,265);
		  delay(200);
		  backcolor(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }


	setcolor(7);
	outtextxy(155,100,"Please check the value of Month");
	delay(350);

	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
		if(my>=265&&my<=285)
	{
	if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad(350,265);

		  key(355,270);
		  backcolor(200,265);
		  delay(200);
		  backcolor(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }


	setcolor(6);

	outtextxy(155,100,"Please check the value of Month");

	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
		if(my>=265&&my<=285)
	{
	if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad(350,265);

		  key(355,270);
		  backcolor(200,265);
		  delay(200);
		  backcolor(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }


 }


}while(!kbhit());

setcolor(0);
if(message==1)
{
outtextxy(160,100,"Please check the value of Year");
tab=0;
}
if(message==2)
{
outtextxy(155,100,"Please check the value of Month");
tab=1;
}
setcolor(6);

message=0;
}

ch=getch();
if(ch==9)
{
tab++;
if(tab>=2)
tab=0;
}

if(tab==0)
d2=185;
if(tab==1)
d2=215;



//code for back space
  if(tab==0)
      ds=d1;
      if(tab==1)
      ds=dd1;


if(ch==8&&ds>279)
{
hidemouseptr();


  //    rectangle(ds,d2+5,ds+20,d2+25);
      setcolor(0);
      rectangle(ds,d2+5,ds+20,d2+25);
      setfillstyle(1,0);
      floodfill(ds+5,d2+10,0     );
      setcolor(7);
      rectangle(ds,d2+5,ds+20,d2+25);
      setfillstyle(1,7);
      floodfill(ds+5,d2+10,7);

  if(tab==0)
  {
  i--;
  year=year/10;
    d1=d1-12;

  }
  if(tab==1)
  {
  k--;
  month=month/10;
   dd1=dd1-12;

  }

    setcolor(6);
}


if(ch>=48&&ch<=57)
{
 //if(oldtab!=tab)
// d1=279;

ch1[0]=ch;

if(tab==0&&i<7)
{
year=year*10;
year=(ch-48)+year;

i++;
d1=d1+12;
ultoa(ch-48,ch1,10);
hidemouseptr();
outtextxy(d1,d2,ch1);

}
if(tab==1&&k<2)
{

month=month*10;
month=(ch-48)+month;
k++;
dd1=dd1+12;
ultoa(ch-48,ch1,10);
hidemouseptr();
outtextxy(dd1,d2,ch1);

}
//oldtab=tab;
 }


}while(ch!=13&&ch!=27);
if(ch==13)
{
		 dad(200,265);
		  key(205,270);
		  backcolor(350,265);
		 delay(200);
		 backcolor(200,265);

		}
if(ch==27)
{
hidemouseptr();
	 dad(350,265);

		  key(355,270);
		  backcolor(200,265);
		  delay(200);
		  backcolor(350,265);
}
lbb:
hidemouseptr();

delay(200);
if(ch!=27)
if(month>12||month<1||year<1)
{
if(year<1)
message=1;
else
message=2;
goto mode;

}
cleardevice();
if(ch==27)
{year=0,month=0;
back=1;
}else
back=0;
hidemouseptr();
}
