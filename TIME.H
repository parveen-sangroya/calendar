void time()
{
setcolor(6);
rectangle(154,175,464,305);
setfillstyle(1,6);
floodfill(180,250,6);
setcolor(7);
rectangle(159,180,459,300);
rectangle(154,175,464,305);
settextstyle(8,0,1);
setcolor(4);

outtextxy(280,180,"Time");
struct date d;
char string[10];
setcolor(7);
outtextxy(200,220,"Time :");
keyabout(264,265);
dadabout(264,265);
delay(100);
backcolorabout(264,265);


}
 void timedialog()
{
char ch,string[10];


time();

lba1:
do
{

restrict(0,0,640,480);
showmouseptr();


setcolor(6);
rectangle(280,220,450,245);
setcolor(0);
rectangle(280,220,450,245);
setfillstyle(1,0);
floodfill(300,230,0);
setcolor(6);
rectangle(280,220,450,245);
setfillstyle(1,6);
floodfill(300,230,6);

setcolor(7);
struct time t;
  gettime(&t);

     ultoa(t.ti_hour,string,10);
     outtextxy(295,220,string);
	      outtextxy(325,220,":");

	  ultoa(t.ti_min,string,10);
     outtextxy(335,220,string);
	 outtextxy(365,220,":");

	     ultoa(t.ti_sec,string,10);
     outtextxy(375,220,string);
delay(300);



	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
	       if((my>=265&&my<=285)&&(mx>=264&&mx<=344))
		{
		   ch=13;
		 goto lba;
		}
	}


}while(!kbhit());
ch=getch();
lba:
hidemouseptr();
if(ch==13||ch==27||ch==32)
{
ch=13;
dadabout(264,265);
//backcolor(269,310);
keyabout(269,270);
delay(300);
dadabout(269,270);

backcolorabout(264,265);

delay(200);
}
if(ch!=13&&ch!=27)
goto lba1;

cleardevice();

}
