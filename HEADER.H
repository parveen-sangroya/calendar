union REGS i1,o;

int mx=0,my=0,x,button,back;
      int mx1,mx2;
      long int year;
      int month;

void processing()
{
clrscr();
cleardevice();
setcolor(7);
rectangle(0,0,639,479);
rectangle(5,5,634,474);
settextstyle(8,0,1);
outtextxy(220,220," Processing . . . . . . .");
}
   initmouse()
  {
	i1.x.ax=0;
	int86(0x33,&i1,&o);
	return(o.x.ax);
  }

  void showmouseptr()
  {
	i1.x.ax=1;
	int86(0x33,&i1,&o);
  }

 void  hidemouseptr()
  {
	i1.x.ax=2;
	int86(0x33,&i1,&o);
  }
 void  getmousepos(int *button,int *mx,int *my)
  {
	i1.x.ax=3;
	int86(0x33,&i1,&o);
	*button=o.x.bx;
	*mx=o.x.cx;
	*my=o.x.dx;
   }
void  restrict(int x1,int y1,int x2,int y2)
  {
	i1.x.ax=7;
	i1.x.cx=x1;
	i1.x.dx=x2;
	int86(0x33,&i1,&o);

	i1.x.ax=8;
	i1.x.cx=y1;
	i1.x.dx=y2;
	int86(0x33,&i1,&o);
 }

