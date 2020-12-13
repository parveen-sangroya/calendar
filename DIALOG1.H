 void key1(int bx,int by)
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

void backcolor1(int bx,int by)
{
setcolor(0);
rectangle(bx+5,by+5,bx+85,by+25);
setfillstyle(1,0);
floodfill(bx+15,by+10,0);
key1(bx,by);
}
void dialog1()
{
//cleardevice();

setbkcolor(8);
setcolor(6);
rectangle(164,165,474,315);
setfillstyle(1,6);

floodfill(260,220,6);
setcolor(7);
settextstyle(8,0,1);
outtextxy(169,200,"   Year : ");
rectangle(164,165,474,315);
rectangle(169,170,469,310);


setcolor(6);
rectangle(279,205,440,225);
setcolor(7);
rectangle(279,205,440,225);
setfillstyle(1,7);
floodfill(290,210,7);



//code  of  button
setcolor(6);
//outtextxy(279,200,"   2005 ");


}
 void dad1(int bx,int by)
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

void dialogyear()
{

char ch;
int i,j,k,gd,gm;


hidemouseptr();
//clrscr();
//cleardevice();
dialog1();

backcolor1(200,265);
backcolor1(350,265);


char str[25];

backcolor1(200,265);
showmouseptr();
char ch1[1];
long int ds,d1,dd1,d2,a[10],tab=0,message=0;
d1=279;
d2=200;
year=0;

i=0;

setcolor(6);
delay(200);

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

		 dad1(200,265);
		  key1(205,270);
		  backcolor1(350,265);
		  ch1[0]=year;
		  outtextxy(279,200,ch1);
		 delay(200);
		 backcolor1(200,265);
		  ch=13;
		}
			if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad1(350,265);

		  key1(355,270);
		  backcolor1(200,265);
		  delay(200);
		  backcolor1(350,265);
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
		 dad1(350,265);

		  key1(355,270);
		  backcolor1(200,265);
		  delay(200);
		  backcolor1(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }


	delay(300);
		getmousepos(&button,&mx,&my);
		if((button&1)==1)
	{
		if(my>=265&&my<=285)
		{
			if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad1(350,265);

		  key1(355,270);
		  backcolor1(200,265);
		  delay(200);
		  backcolor1(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }
	setcolor(7);
	outtextxy(160,100,"Please check the value of Year");
	delay(50);
	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
		if(my>=265&&my<=285)
		{
			if(mx>=350&&mx<=430)
		{
		hidemouseptr();
		 dad1(350,265);

		  key1(355,270);
		  backcolor1(200,265);
		  delay(200);
		  backcolor1(350,265);
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
		 dad1(350,265);

		  key1(355,270);
		  backcolor1(200,265);
		  delay(200);
		  backcolor1(350,265);
		   ch=27;

		}

	}
	  goto lbb;

	 }
	setcolor(6);

	outtextxy(160,100,"Please check the value of Year");

		getmousepos(&button,&mx,&my);



 }


}while(!kbhit());

setcolor(0);
outtextxy(160,100,"Please check the value of Year");
tab=0;
setcolor(6);
message=0;
}

ch=getch();

//code for back space

if(ch==8&&d1>279)
{
hidemouseptr();

  //    rectangle(ds,d2+5,ds+20,d2+25);
      setcolor(0);
      rectangle(d1,d2+5,d1+20,d2+25);
      setfillstyle(1,0);
      floodfill(d1+5,d2+10,0);
      setcolor(7);
      rectangle(d1,d2+5,d1+20,d2+25);
      setfillstyle(1,7);
      floodfill(d1+5,d2+10,7);


  i--;
  year=year/10;
    d1=d1-12;




    setcolor(6);
}


if(ch>=48&&ch<=57)
{
 //if(oldtab!=tab)
// d1=279;

ch1[0]=ch;

if(i<7)
{
year=year*10;
year=(ch-48)+year;

i++;
d1=d1+12;
ultoa(ch-48,ch1,10);
hidemouseptr();

outtextxy(d1,d2,ch1);
 }
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
delay(200);
if(ch!=27)
if(year<1)
{
message=1;
goto mode;
}
if(ch==27)
year=0,back=1;
else
back=0;
cleardevice();
hidemouseptr();
}
