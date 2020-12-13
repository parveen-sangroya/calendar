 void vikengyear(long int y)
{
int v,v1,n=0,n1,m,d,j,c,k,c1=4,s,e,z,h,q,w,x,x1,b2;
long int y2,lala,i,a,a1,l;
char string[2];
    setbkcolor(6);
processing();
y2=y-57;
for(i=0;i<=y2;i++)
{  if(y2>0)
 {  if(i==1753)
c1=c1-11;
a=i/100;
a1=i%100;
 if(a1==1&&a%4!=0&&i>1750)
 c1=c1-1;
   if(i%4==1)
 {  c1=c1+2;
  c1=c1%7;
  }   else
   {     c1++;
    c1=c1%7;
   }   } }
   if(y2>=1600)
c1=c1-1;
     if(y2==1752)
c1=c1+1;
   if(y2>1752)
c1=c1-3;
   if(y2>=1757)
c1=c1-1;
      if(y2>=1899)
c1=c1+1;
      if(y2>=1953)
c1=c1+1;

   cleardevice();
    settextstyle(2,0,5);
    c=c1;
      ultoa(y,string,10);
	    outtextxy(20,8,string);
	    y2=y-57;
lala=y2+1;
 if(y2/10==0)
      {      x=503;
	    ultoa(y2,string,10);
		outtextxy(x+36,8,string);
		ultoa(lala,string,10);
	   outtextxy(x+70,8,string);
	 outtextxy(x+47,8," - ");
     }     else
     if(y2/100==0)
     {     x=495;
	    ultoa(y2,string,10);
		outtextxy(x+28,8,string);
		ultoa(lala,string,10);
	   outtextxy(x+70,8,string);
	 outtextxy(x+47,8," - ");
   } else
 if(y2/1000==0)
      {          x=487;
	    ultoa(y2,string,10);
		outtextxy(x+20,8,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
		}       else
     if(y2/10000==0)
     {        x=479;
	    ultoa(y2,string,10);
		outtextxy(x+14,8,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
	 } else
 if(y2/100000==0)
      {        x=471;
	    ultoa(y2,string,10);
		outtextxy(x+6,8,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
	       }      else
     if(y2/1000000==0)
     {        x=463;
	    ultoa(y2,string,10);
		outtextxy(x-2,8,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
	      }      else
     if(y2/10000000==0)
     {       x=455;
	    ultoa(y2,string,10);
		outtextxy(x-2,8,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
	     } else
     if(y2/1000000==0)
     {      x=447;
	    ultoa(y2,string,10);
		outtextxy(x-2,8,string);
		ultoa(lala,string,10);
	   outtextxy(x+70,8,string);
	 outtextxy(x+47,8," - ");
     }
     for(m=1;m<13;m++)
{
 setcolor(4);
s=13;
     if(m==1)
     {   	  x=30;
     y=20;
     x1=x;
     outtextxy(20,y,"VAISAKHA  ");
     outtextxy(210,y,"APRIL-MAY  ");
      e=30;
	z=31;
       n=c;
       v=(n+1)%7;
     }        else
       if(m==2)
       {
	x1=x=330;
     y=20;
      outtextxy(310,y," JYAISTHA ");
      outtextxy(510,y," MAY-JUNE ");
	e=31;
	s=s+1;
	z=31;
	n=c+3;
	v=(n+1)%7;
       }   	else
	if(m==3)
	{  		 x1=x=30;
     y=245;
		 outtextxy(20,y,"ASHADHA");
	      outtextxy(210,y,"JUNE-JULY ");
		 e=30;
	s=s+1;
	z=31;
	 n=c-1;
	  v=(n+1)%7;
	}
	 else
	 if(m==4)
	 {
		      x1=x=330;
     y=245;

	  outtextxy(310,y," SAVANA");
	      outtextxy(480,y,"  JULY-AUGUST ");
	  e=31;
	 s=s+2;
	 z=31;
	  n=c+2;
	   v=(n+1)%7;
	 }
	  else
	  if(m==5)
	  {
	       x1=x=30;
     y=20;

	   outtextxy(20,y,"BHADRAPADA  ");
	       outtextxy(148,y," AUGUST-SEPTEMBER");

	   e=31;
	  s=s+2;
	  z=31;
	   n=c-2;
	   v=(n+1)%7;
	  }
	  else
	  if(m==6)
	  {
			  x1=x=330;
     y=20;

      outtextxy(320,y,"ASVINA ");
	   outtextxy(448,y,"SEPTEMBER-OCTOBER  ");
	   e=30;
	  s=s+2;
	   z=30;
	     n=c+1;
	    v=(n+1)%7;
	     }
	    else
	    if(m==7)
	    {
			     x1=x=30;
     y=235;

	 outtextxy(20,y,"KARTTIKA ");
		outtextxy(148,y," OCTOBER-NOVEMBER  ");
	     e=31;
	    s=s+3;
	    z=30;
	      n=c+3;
	      v=(n+1)%7;
	    }
	      else
	      if(m==8)
	      {
				x1=x=330;
     y=235;

     outtextxy(320,y,"MARGASIRSA ");
		outtextxy(448,y,"NOVEMBER-DECEMBER  ");
	       e=30;
	      s=s+2;
	       z=30;
	       n=c-2;
		v=(n+1)%7;

	      }
	       else
	       if(m==9)
	       {

		       x=30;
     y=20;

     x1=x;
     outtextxy(20,y,"PAUSA ");
	outtextxy(148,y," DECEMBER-JANUARY   ");
		e=31;
	       s=s+2;
		z=30;
	       n=c;
		v=(n+1)%7;
	       }
		else
		if(m==10)
		{
					       x1=x=330;
     y=20;

      outtextxy(320,y,"MAGHA");
		outtextxy(448,y," JANUARY-FEBRUARY  ");
		 e=31;
		s=s+1;
	       z=30;
		n=c+2;
		  v=(n+1)%7;
		}
		  else
		  if(m==11)
		  {
						   x1=x=30;
     y=235;


	 outtextxy(20,y,"PHALGUNA ");
	  outtextxy(162,y," FEBRUARY-MARCH ");
	 if(lala%4==0)
	  e=29;
	  else
	  e=28;

		    s=s;
		   z=30;
if(lala%100==0&&lala>1797)
 if(lala%400!=0)
 e=28;


		    n=c-3;
		    v=(n+1)%7;
		  }
		  else
		  if(m==12)
		  {
						    x1=x=330;
     y=235;
			 s=14;
     outtextxy(320,y,"CAITRA   ");
    outtextxy(480,y,"  MARCH-APRIL");
		  if(y2%4==0)

	{
	s=s+1;
	    z=31;
		   }
		   else
		  {
		  s=s+1;
		   z=30;
		    }

  s=14;
   if((lala-1)%4==3)
  {
  s=13;
  z=31;
  }
  else
  z=30;


  if(((lala)%400!=0)&&((lala-1)>1752))
  {
  s=14;
  z=30;
  }
	   e=31;

	    n=c-1;
	    v=(n+1)%7;
	      s=s+1;

		  }
	     if(m>6)
	     s=s-1;
	   if(y2<=1752)
	    s=s-11;
	    if(y2==1752&&m>5)
	    s=s+11;
		       if(v==0||v<0)
       v=v+7;
		  x=x-10; y=y+14;
	for(i=0;i<7;i++)
	{
	 if(i==0)
setcolor(4);
 else
 setcolor(7);

	if(i==0)
	outtextxy(x,y,"Sun");
	 if(i==1)
	 outtextxy(x,y,"Mon");
	 if(i==2)
	 outtextxy(x,y,"Tue");
	 if(i==3)
	 outtextxy(x,y,"Wed");
	 if(i==4)
	 outtextxy(x,y,"Thr");
	 if(i==5)
	 outtextxy(x,y,"Fri");
	 if(i==6)
	 outtextxy(x,y,"Sat");
	 x=x+40;
	 }
      x=x1-50;
      for(k=v;k>0;k--)
      {
      x=x+40;

      }

      y=y+16;

if(v==0)
y=y-16;


h=0,q=s-1,w=0;
j=s;
for(i=0;i<2*z;i++)
{


if(q+1==s&&h==1)
{
      x=x1-50;
      for(k=v;k>0;k--)
      {
      x=x+40;
      }
  }

if(w==z)
{
h=1;
}

if(h==0)
{
w++;
l=w;
ultoa(l,string,10);

 v1=v+w;
  if(v1%7==2)
setcolor(4);
 else
 setcolor(7);

  if(v1%7!=1)
  {

    outtextxy(x,y,string);
   x=x+40;


  }
  else
  {  outtextxy(x,y,string);
   y=y+16;
    x=x1-10;
      h=1;
  }
  if(w==z)
 {
 if(v1%7!=1)
 { y=y+16;
   x=x1-10;
   }
   }
    }


  else
  if(h==1)
  {

  setcolor(8);
if(j>e)
j=j-e;
q++;
v1=v+q;

if(y2==1752&&m==5)
{
if(j==3)
j=j+11;
}
l=j;
ultoa(l,string,10);
   if(s>13)
     b2=s-13;
   else
   b2=13-s;
  while(b2>0)
  {    if(s>13)
   v1--;
   else
   v1++;
   b2--;
   }

  if(v1%7!=6)
  {
    outtextxy(x,y,string);
    x=x+40;

  }
  else
  {  outtextxy(x,y,string);

	 y=y+16;
    x=x1-10;

       h=0;

  }
 j++;

  }
 }
 if(m%4==0)
 {
    setcolor(7);
   setfillstyle(1,7);
  rectangle(90,460,110,470);
 floodfill(93,465,7);
  setcolor(8);

  setfillstyle(1,8);
   rectangle(360,460,380,470);
floodfill(375,465,8);
      setcolor(7);
   outtextxy(115,456," Vikram Calander                   Christian Calander");
	rectangle(0,0,639,479);
 rectangle(3,3,636,476);
  if(m<12)
  {
  getch();
  cleardevice();
 }
  } }}
void vikengmon(long int y, int m)
{
long int n=0,d,j,k,c,c1=4,y2,i,a,a1,lala;
 int v,v1,n1,s,e,z,h,q,w,l,x,x1,b2;
 char string[2];
 setbkcolor(6);
processing();
y2=y-57;
for(i=0;i<=y2;i++)
{  if(y2>0)
 {  if(i==1753)
c1=c1-11;
a=i/100;
a1=i%100;
 if(a1==1&&a%4!=0&&i>1750)
   c1=c1-1;
   if(i%4==1)
  {   c1=c1+2;
  c1=c1%7;
  }    else
   {    c1++;
    c1=c1%7;
   }  }  }
if(y2==485)
    c1=c1-1;
   if(y2>1752)
c1=c1-3;
   if(y2>=1757)
c1=c1-1;
  if(y2>=1953)
c1=c1+1;
c=c1;
  lala=y2+1;
   clrscr();
    cleardevice();
     ultoa(y,string,10);
      outtextxy(80,20,string);
       y2=y-57;
       if(y2/10==0)
     {
     x=454;
    ultoa(y2,string,10);
	outtextxy(x+40,20,string);
	ultoa(y-56,string,10);
	   outtextxy(x+70,20,string);
	 outtextxy(x+45,20," - ");
     }      else
     if(y2/100==0)
     {
     x=440;
    ultoa(y2,string,10);
	outtextxy(x+28,20,string);
	ultoa(y-56,string,10);
	   outtextxy(x+70,20,string);
	 outtextxy(x+45,20," - ");
     }  else
 if(y2/1000==0)
    {          x=426;
	    ultoa(y2,string,10);
		outtextxy(x+14,20,string);
		ultoa(y-56,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
	 }     else
     if(y2/10000==0)
     {         x=412;
	    ultoa(y2,string,10);
		outtextxy(x,20,string);
		ultoa(y-56,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
	  } else
 if(y2/100000==0)
      {         x=398;
	    ultoa(y2,string,10);
		outtextxy(x-14,20,string);
		ultoa(y-56,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
		}     else
     if(y2/1000000==0)
     {        x=384;
	    ultoa(y2,string,10);
		outtextxy(x-28,20,string);
		ultoa(y-56,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
	      }     else
     if(y2/10000000==0)
     {       x=370;
	    ultoa(y2,string,10);
		outtextxy(x-35,20,string);
		ultoa(y-56,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
	    }       else
     if(y2/10000000==0)
     {              x=356;
	    ultoa(y2,string,10);
		outtextxy(x-28,20,string);
		ultoa(y-56,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
		   }
      rectangle(0,0,639,479);
 rectangle(5,5,634,474);
setcolor(7);
x=80,y=50;
s=13;
if(y2==1753)
  s=9;
if(y2==1799)
  s=10;
if(y2==1899)
      s=12;
if(y2==1999)
      s=14;
if(y2==2100)
      s=15;
if(y2==2199)
      s=16;
setcolor(4);
     if(m==1)
    {       outtextxy(x,y,"VAISKHA ");
     outtextxy(x+340,y,"APRIL-MAY ");
      e=30;
      z=31;
      n=c;
    } if(m==2)
       {     outtextxy(x,y,"JYAISTHA  ");
     outtextxy(x+350,y,"MAY-JUNE  ");
		e=31;
	s=s+1;
	z=31;
	n=c+3;
       }	if(m==3)
	{  outtextxy(x,y,"ASADHA  ");
	 outtextxy(x+340,y,"JUNE-JULY  ");
	   e=30;
	s=s+1;
	z=31;
	 n=c-1;
	}	 if(m==4)
	 {      outtextxy(x,y,"SAVANA  ");
     outtextxy(x+310,y,"JULY-AUGUST");
	  e=31;
	 s=s+2;
	 z=31;
	  n=c+2;
	 } 	  if(m==5)
	  {     outtextxy(x,y,"BHADRAPADA");
     outtextxy(x+240,y," AUGUST-SEPTEMBER ");
		   e=31;
	  s=s+2;
	  z=31;
	   n=c-2;
	  }	  if(m==6)
	  {     outtextxy(x,y,"ASVINA  ");
	   outtextxy(x+240,y,"SEPTEMBER-OCTOBER   ");
		   e=30;
	  s=s+2;
	   z=30;
	    n=c+1;
	     }	    if(m==7)
	    { 	 outtextxy(x,y,"KARTTIKA ");
	  outtextxy(x+240,y," OCTOBER-NOVEMBER  ");
		   e=30;
	    s=s+3;
	    z=30;
	      n=c+3;
	    }       if(m==8)
	      {      outtextxy(x,y,"MARGASIRSA ");
	  outtextxy(x+235,y,"NOVEMBER-DECEMBER ");
		       e=30;
	      s=s+2;
	       z=30;
	       n=c-2;
	      }	       if(m==9)
	       {      outtextxy(x,y,"PAUSA  ");
	  outtextxy(x+238,y," DECEMBER-JANUARY    ");
			e=31;
	       s=s+2;
		z=30;
	       n=c;
	       } if(m==10)
		{       outtextxy(x,y,"MAGHA   ");
	  outtextxy(x+245,y,"JANUARY-FEBRUARY  ");
		   e=31;
		s=s+1;
	       z=30;
		n=c+2;
		} 		  if(m==11)
		  { 	 outtextxy(x,y,"PHALGUNA ");
	  outtextxy(x+247,y,"  FEBRUARY-MARCH ");
	   if(lala%4==0)
	  e=29;
	  else
	  e=28;

		    s=s;
		   z=30;
if(lala%100==0&&lala>1797)
 if(lala%400!=0)
 e=28;


		    n=c-3;
		    v=(n+1)%7;


      }

	  if(m==12)
     {     outtextxy(x,y,"CAITRA ");
      outtextxy(x+283,y,"   MARCH-APRIL ");
		  if(y2%4==0)

	{
	s=s+1;
	    z=31;
		   }
		   else
		  {
		  s=s+1;
		   z=30;
		    }

  s=14;
   if((lala-1)%4==3)
  {
  s=13;
  z=31;
  }
  else
  z=30;


  if(((lala)%400!=0)&&((lala-1)>1752))
  {
  s=14;
  z=30;
  }
	   e=31;

	    n=c-1;
	    v=(n+1)%7;
	      s=s+1;

 }	    v=(n+1)%7;
 if(m>7)
 s=s-1;
      if(y2<=1752)
	    s=s-11;
	    if(y2==1752&&m>5)
	    s=s+11;
	 if(v==0||v<0)
       v=v+7;
       x=80,y=75;
		for(i=0;i<7;i++)
	{  	 if(i==0)
setcolor(4);
 else
 setcolor(7);
	if(i==0)
	outtextxy(x,y,"Sun");
	 if(i==1)
	 outtextxy(x,y,"Mon");
	 if(i==2)
	 outtextxy(x,y,"Tue");
	 if(i==3)
	 outtextxy(x,y,"Wed");
	 if(i==4)
	 outtextxy(x,y,"Thr");
	 if(i==5)
	 outtextxy(x,y,"Fri");
	 if(i==6)
	 outtextxy(x,y,"Sat");
	 x=x+70;  	 }
      x=10;
      for(k=v;k>0;k--)
	  x=x+70;
	    y=y+25;
      if(v==0)
y=y-25;
h=0,q=s-1,w=0;
j=s;
for(i=0;i<2*z;i++)
{ if(q+1==s&&h==1)
{       x=10;
      for(k=v;k>0;k--)
     x=x+70;
    }
if(w==z)
h=1;
if(h==0)
{ w++;
l=w;
ultoa(l,string,10);
 v1=v+w;
  if(v1%7==2)
setcolor(4);
 else
 setcolor(7);
  if(v1%7!=1)
  {     outtextxy(x,y,string);
   x=x+70;
   }  else
  {  outtextxy(x,y,string);
   y=y+25;
    x=80;
      h=1;
  }    if(w==z)
 {    if(v1%7!=1)
 { y=y+25;
   x=80;
   }   }     }
  else
  if(h==1)
  {   setcolor(8);
if(j>e)
j=j-e;
q++;
v1=v+q;
   if(s>13)
     b2=s-13;
   else
   b2=13-s;
  while(b2>0)
  {    if(s>13)
   v1--;
   else
   v1++;
   b2--;
   }if(y2==1752&&m==5)
{   if(j==3)
j=j+11;
}   l=j;
ultoa(l,string,10);
     if(v1%7!=6)
  {     outtextxy(x,y,string);
    x=x+70;
      }
  else   {  outtextxy(x,y,string);
	 y=y+25;
    x=80;
       h=0;
  } j++;
  } }    y=y+60;
setcolor(7);
    setfillstyle(1,7);
  rectangle(80,y+5,100,y+15);
  floodfill(90,y+10,7);
  setcolor(8);
  setfillstyle(1,8);
  rectangle(315,y+5,335,y+15);
  floodfill(330,y+10,8);
   setcolor(7);
 outtextxy(80,y-5,"    Vikram Calendar         Christian Calendar");
}

