void date()
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

outtextxy(280,180,"Date");
struct date d;
char string[10];
setcolor(7);

getdate(&d);
outtextxy(200,220,"Date :");
if(d.da_mon>9)
mx=275;
else
mx=285;
     ultoa(d.da_day,string,10);
     if(d.da_day >9)
     outtextxy(mx,220,string);
     else
     outtextxy(mx+10,220,string);
     outtextxy(mx+30,220,"-");

     ultoa(d.da_mon,string,10);
     outtextxy(mx+50,220,string);

     outtextxy(355,220,"-");

     ultoa(d.da_year,string,10);
     outtextxy(375,220,string);


keyabout(264,265);
dadabout(264,265);
delay(100);
backcolorabout(264,265);

}
 void datedialog()
{
char ch;


date();

lba1:
do
{

restrict(0,0,640,480);
showmouseptr();

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
