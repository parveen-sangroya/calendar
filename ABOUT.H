 void dadabout(int bx,int by)
 {
setcolor(0);
rectangle(bx-5,by-1,bx+85,by+25);
setfillstyle(1,0);
floodfill(bx,by,0);

setcolor(6);
rectangle(bx-5,by-1,bx+85,by+25);
setfillstyle(1,6);
floodfill(bx,by,6);
}


 void keyabout(int bx,int by)
 {
 setcolor(6);
rectangle(bx,by,bx+80,by+20);
setfillstyle(1,6);
floodfill(bx+10,by+10,6);

setcolor(7);
rectangle(bx,by,bx+80,by+20);
settextstyle(8,0,1);
outtextxy(282,by-5," OK ");

 }

void backcolorabout(int bx,int by)
{
setcolor(0);
rectangle(bx+5,by+5,bx+85,by+25);
setfillstyle(1,0);
floodfill(bx+15,by+10,0);
keyabout(bx,by);
}

void about()
{
setcolor(6);
rectangle(154,115,464,345);
setfillstyle(1,6);
floodfill(180,250,6);
setcolor(4);
settextstyle(8,0,1);
outtextxy(280,125,"About");
setcolor(7);
rectangle(159,120,459,340);
rectangle(154,115,464,345);
//settextstyle(8,0,4);

outtextxy(187,150," Computerised Calendar");
//outtextxy(200,135," Calendar 2");


settextstyle(2,0,5);
outtextxy(170,197," Version 1.0  ");
outtextxy(170,211," Year:  2005   ");
outtextxy(170,227," Impimented by:");
outtextxy(170,240,"                Parveen Kumar");
outtextxy(170,254,"                Davinder Singh");
settextstyle(2,0,4);

outtextxy(200,273,"   e-mail: parveen_013@yahoo.com ");
outtextxy(200,285,"   e-mail: dav0012_singh@yahoo.com  ");

dadabout(264,305);
delay(100);
backcolorabout(264,305);

}
 void aboutdialog()
{
char ch;


about();
lba1:
do
{

restrict(0,0,640,480);
showmouseptr();

	getmousepos(&button,&mx,&my);
	if((button&1)==1)
	{
	       if((my>=305&&my<=325)&&(mx>=264&&mx<=344))
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
dadabout(264,305);
//backcolor(269,310);
keyabout(269,310);
delay(300);
dadabout(269,310);

backcolorabout(264,305);

delay(200);
}
if(ch!=13&&ch!=27)
goto lba1;

cleardevice();

}
