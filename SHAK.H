void shakengyear(long y)
{
int v,v1,n=0,n1,m,d,j,k,c,c1=4,i,s,e,z,h,q,w,l,x,x1,a,a1,b,b1;
char string[2];
long y2;
setbkcolor(6);
processing();
y2=y+78;
for(i=0;i<=y2;i++)
{ if(y2>0)
 {
if(i==1753)
c1=c1-8;
a=i/100;
a1=i%100;
 if(a1==1&&a%4!=0&&i>1750)
  c1=c1-1;
  if(i%4==1)
  {   c1=c1+2;
  c1=c1%7;
  }    else
   {     c1++;
    c1=c1%7;
      }   }

    }

 /* if(y>=407)
   c1=c1-1;
 printf("   %d",y2);
 getch();
 */
 if(y2>=1901)
   c1=c1+1;

 if(y2%4==0)
 c1=c1+1;

       settextstyle(2,0,5);
    c=c1;
   clrscr();
     cleardevice();
      ultoa(y,string,10);
	    outtextxy(20,8,string);
       //y2=y2-1;
       if(y2/10==0)
      {       x=503;
	    ultoa(y2,string,10);
		outtextxy(x+36,8,string);
		ultoa(y2+1,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
	 } else
     if(y2/100==0)
     {         x=495;
	    ultoa(y2,string,10);
		outtextxy(x+28,8,string);
		ultoa(y2+1,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
	  } else
 if(y2/1000==0)
      {           x=487;
	    ultoa(y2,string,10);
		outtextxy(x+20,8,string);
		ultoa(y2+1,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
	 }   else
     if(y2/10000==0)
     {         x=479;
	    ultoa(y2,string,10);
		outtextxy(x+14,8,string);
		ultoa(y2+1,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
	  } else
 if(y2/100000==0)
      {         x=471;
	    ultoa(y2,string,10);
		outtextxy(x+6,8,string);
		ultoa(y2+1,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
       }     else
     if(y2/1000000==0)
     {       x=463;
	    ultoa(y2,string,10);
		outtextxy(x-2,8,string);
		ultoa(y2+1,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
       }     else
     if(y2/10000000==0)
     {       x=455;
	    ultoa(y2,string,10);
		outtextxy(x-2,8,string);
		ultoa(y2+1,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
	  }  else
     if(y2/100000000==0)
     {        x=447;
	    ultoa(y2,string,10);
		outtextxy(x-2,8,string);
		ultoa(y2+1,string,10);
		   outtextxy(x+70,8,string);
		 outtextxy(x+47,8," - ");
}  b1=5;
   c=c1;
for(m=1;m<13;m++)
{
 if(y!=194&&m==1&&m==2&&m==5&&m==6&&m==9&&m==10)
  b1=0;
  else
  b1=5;
setcolor(4);
     if(m==1)
     { 	  x=30;
     y=20;
	  x1=x;
     outtextxy(20,y,"VAISAKHA  ");
      outtextxy(210,y,"APRIL-MAY ");
      e=30;
      s=10;
      z=31;
      n=c;
       v=(n+1)%7;
     }      if(m==2)
       {	x1=x=330;
     y=20;
	      outtextxy(320,y,"JYAISTHA  ");
     outtextxy(510,y," MAY-JUNE  ");
	e=31;
	s=11;
	z=31;
	n=c+3;
	v=(n+1)%7;
       }  	if(m==3)
	{ 		 x1=x=30;
     y=245-b1;
		 outtextxy(20,y,"ASADHA ");
		 outtextxy(210,y,"JUNE-JULY  ");
		 e=30;
	s=11;
	z=31;
	 n=c-1;
	  v=(n+1)%7;
	} 	 if(m==4)
	 {		      x1=x=330;
     y=245-b1;
	     outtextxy(320,y,"SARVANA  ");
	  outtextxy(480,y,"  JULY-AUGUST");
	  e=31;
	 s=12;
	 z=31;
	  n=c+2;
	   v=(n+1)%7;
	 } 	  if(m==5)
	  {	       x1=x=30;
     y=20;
	   outtextxy(20,y,"BHADRAPADA  ");
	   outtextxy(150,y," AUGUST-SEPTEMBER ");
		   e=31;
	  s=12;
	  z=31;
	   n=c-2;
	   v=(n+1)%7;
	 }	  if(m==6)
	  {  x1=x=330;
     y=20;
	   outtextxy(320,y,"ASVINA  ");
	   outtextxy(430,y,"  SEPTEMBER-OCTOBER   ");
	   e=30;
	  s=12;
	   z=30;
	    n=c+1;
	    v=(n+1)%7;
		if(y2==1752)
		 s=23;
		v=(n+1)%7;
	   }	    if(m==7)
	    {	     x1=x=30;
     y=245-b1;
	 outtextxy(20,y,"KARTTIKA  ");
	  outtextxy(140,y,"  OCTOBER-NOVEMBER  ");
	     e=31;
	    s=12;
	    z=30;
	      n=c+3;
	      v=(n+1)%7;
	      if(y2==1752)
	       s=23;
     }	      if(m==8)
	      {  x1=x=330;
     y=245-b1;
     outtextxy(320,y,"MARGASIRSA ");
	  outtextxy(430,y,"  NOVEMBER-DECEMBER ");
		 e=30;
	      s=11;
	       z=30;
	       n=c-2;
		v=(n+1)%7;
		if(y2==1752)
		 s=22;
	      }	       if(m==9)
	       {        x=30;
     y=20;
     x1=x;
     outtextxy(20,y,"PAUSA   ");
	  outtextxy(150,y," DECEMBER-JANUARY    ");
			e=31;
	       s=11;
		z=30;
	       n=c;
	       if(y2==1752)
		s=s+11;
		v=(n+1)%7;
	   } if(m==10)
		{    x1=x=330;
     y=20;
      outtextxy(320,y,"MAGHA  ");
	  outtextxy(447,y," JANUARY-FEBRUARY  ");
			 e=31;
		s=10;
	       z=30;
		n=c+2;
		if(y2==1752)
	     s=s+11;
	      v=(n+1)%7;
}   if(m==11)
    {    x1=x=30;
     y=245-b1;
	 outtextxy(20,y,"PHALGUNA  ");
	  outtextxy(150,y,"  FEBRUARY-MARCH ");
	 if(y2%4==3)
	  e=29;
       else
	 e=28;
	    s=9;
	   z=30;
if((y2+1)%400!=0&&y2>1798)
 e=28;

if(y2==1752)
 s=s+11;
 n=c-3;
  v=(n+1)%7;
  }

   if(m==12)
   {						    x1=x=330;
     y=245-b1;
	 outtextxy(320,y,"CAITRA ");
      outtextxy(463,y,"    MARCH-APRIL ");
	  if(y2%4==3)
    {      	s=10;
	    z=31;
    }  else
       {	  s=11;
		   z=30;
   } 	if(y2==1752)
	s=s+11;
 /*  for(i=1799;i<=y2;i=i+100)
    {
     a=i/100;
	if(a%4==3)
       {
      z=31;
      s=10;
     }
      else
    {
    z=30;
    s=11;
	}     }      */
	    n=c-1;
	    e=31;
	    v=(n+1)%7;
  }

    if(y2>=1753)
       s=s+11;
	  if(v==0||v<0)
       v=v+7;
   //   if(y2<=1752)
     //  s=s-1;
	  x=x-10; y=y+14;
	for(i=0;i<7;i++)
	{ 	 if(i==0)
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
	 x=x+40;  	 }
      x=x1-50;
      for(k=v;k>0;k--)
	    x=x+40;
	    y=y+16;
      if(v==0)
y=y-16;
h=0,q=s-1,w=0;
j=s;
for(i=0;i<2*z;i++)
{ if(q+1==s&&h==1)
{       x=x1-50;
      for(k=v;k>0;k--)
       x=x+40;
  }if(w==z)
h=1;
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
  {    outtextxy(x,y,string);
   x=x+40;
   }  else
  {  outtextxy(x,y,string);
   y=y+16;
    x=x1-10;
      h=1;
  }   if(w==z)
 {
 if(v1%7!=1)
 { y=y+16;
   x=x1-10;
   }  }     }
  else
  if(h==1)
  {
     setcolor(8);
if(j>e)
j=j-e;
q++;
v1=v+q;
if(s==8)
  v1=v1+1;
if(s==10)
  v1--;
if(s==11)
  v1=v1-2;
if(s==12)
  v1=v1-3;
if(y2==1752)
{  if(s==18)
  v1=v1+2;
if(s==19)
  v1=v1+1;
if(s==21)
  v1--;
if(s==22)
  v1=v1-2;
  if(s==23)
  v1=v1-3;
} if(y2>1752)
{ if(s==19)
  v1=v1+2;
  if(s==20)
  v1++;
  if(s==22)
  v1--;
if(s==23)
  v1=v1-2;
if(s==18)
  v1=v1-2;

} l=j;

 if(y2==1752&&m==5)
if(l==2)
j=j+11;
if(y2<1753)
v1=v1-2;
if(y2==1752&&m>5)
v1=v1+3;
ultoa(l,string,10);
  if(v1%7!=0)
  {         outtextxy(x,y,string);
    x=x+40;
  }
  else
  {  outtextxy(x,y,string);
	 y=y+16;
    x=x1-10;
       h=0;
  }  j++;
  }  }

  if(m%4==0)
 {  setcolor(7);
   setfillstyle(1,7);
  rectangle(90,460,110,470);
 floodfill(93,465,7);
  setcolor(8);
    setfillstyle(1,8);
  rectangle(360,460,380,470);
floodfill(375,465,8);
  setcolor(7);
 outtextxy(115,457," Shak Calander                      Christian Calander");
     rectangle(0,0,639,479);
 rectangle(3,3,636,476);

  if(m<12)
  {     getch();
  b1=5;
    cleardevice();
  }   } }  }


void shakengmon(long int y,int m)
{
long int lala,q,w,v,v1,n=0,n1,d,j,k,c,c1=4,y1,i,s,e,z,h,l,x,x1,a,a1,b,b1;
long int y2;
 char string[2];
    setbkcolor(6);
clrscr();
cleardevice();
setcolor(7);
processing();
y2=y+78;
lala=y+78;
for(i=0;i<=y2;i++)
{   if(y>0)
  {
   if(i==1753)
c1=c1-11;
a=i/100;
a1=i%100;
 if(a1==1&&a%4!=0&&i>1750)
 c1=c1-1;
   if(i%4==1)
  {
  c1=c1+2;
  c1=c1%7;
  }   else
   {
    c1++;
    c1=c1%7;
   } } }

//  if(y>406)
//  c1=c1-1;
    if(y2>=1753)
  c1=c1+4;

  if(y2%4==0)
  c1=c1+1;

   c=c1;


settextstyle(8,0,1);
     cleardevice();
      ultoa(y,string,10);
      outtextxy(80,20,string);
	 lala=y+79;
	 y2=y+78;
	 if(y2/10==0)
      {
     x=454;
      ultoa(y2,string,10);
	outtextxy(x+40,20,string);

	ultoa(lala,string,10);
	   outtextxy(x+70,20,string);
	 outtextxy(x+45,20," - ");
       }     else
     if(y2/100==0)
     {       x=440;
	    ultoa(y2,string,10);
		outtextxy(x+28,20,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
	     }   else
 if(y2/1000==0)
      {               x=426;
	    ultoa(y2,string,10);
		outtextxy(x+14,20,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
	       }     else
     if(y2/10000==0)
     {       x=412;
	    ultoa(y2,string,10);
		outtextxy(x,20,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
	} else
 if(y2/100000==0)
      {       x=398;
	    ultoa(y2,string,10);
		outtextxy(x-14,20,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
	 }     else
     if(y2/1000000==0)
     {         x=384;
	    ultoa(y2,string,10);
		outtextxy(x-28,20,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
	    }     else
     if(y2/10000000==0)
     {            x=378;
	    ultoa(y2,string,10);
		outtextxy(x-28,20,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
	 } else
     if(y2/100000000==0)
     {         x=372;
	    ultoa(y2,string,10);
		outtextxy(x-28,20,string);
		ultoa(lala,string,10);
		   outtextxy(x+70,20,string);
		 outtextxy(x+45,20," - ");
	       }
      rectangle(0,0,639,479);
 rectangle(5,5,634,474);

 setcolor(4);
y2=y+78;

x=80,y=50;
  if(m==1)
     {      outtextxy(x,y,"VAISAKHA");
	   outtextxy(x+340,y,"APRIL-MAY ");
	     e=30;
      s=21;
      z=31;
      n=c;
       v=(n+1)%7;
     }         if(m==2)
       {      outtextxy(x,y,"JYAISTHA  ");
     outtextxy(x+345,y,"MAY-JUNE  ");
	e=31;
	s=22;
	z=31;
	n=c+3;
	v=(n+1)%7;
       }	if(m==3)
	{	 outtextxy(x,y,"ASADHA  ");
	 outtextxy(x+340,y,"JUNE-JULY  ");
	  e=30;
	s=22;
	z=31;
	 n=c-1;
	  v=(n+1)%7;
	}	 if(m==4)
	 {     outtextxy(x,y,"SARVANA  ");
     outtextxy(x+310,y,"JULY-AUGUST");
	   e=31;
	 s=23;
	 z=31;
	  n=c+2;
	   v=(n+1)%7;
	 } 	  if(m==5)
	  {	   outtextxy(x,y,"BHADRAPADA ");
     outtextxy(x+235,y," AUGUST-SEPTEMBER ");
		      e=31;
	  s=23;
	  z=31;
	   n=c-2;
	   v=(n+1)%7;
	  }  	  if(m==6)
	  {     outtextxy(x,y,"ASVINA ");
	   outtextxy(x+220,y,"  SEPTEMBER-OCTOBER   ");
		   e=30;
	  s=23;
	   z=30;
	    n=c+1;
	    v=(n+1)%7;
	     }	    if(m==7)
	    { 	 outtextxy(x,y,"KARTTIKA  ");
	  outtextxy(x+227,y,"  OCTOBER-NOVEMBER  ");
		     e=31;
	    s=23;
	    z=30;
	      n=c+3;
	      v=(n+1)%7;
	    } if(m==8)
	      {      outtextxy(x,y,"MARGASIRSA  ");
		outtextxy(x+212,y,"  NOVEMBER-DECEMBER ");
		       e=30;
	      s=22;
	       z=30;
	       n=c-2;
	       v=(n+1)%7;
	       }	       if(m==9)
	       {     outtextxy(x,y,"PAUSA  ");
	  outtextxy(x+236,y," DECEMBER-JANUARY    ");
			e=31;
	       s=22;
		z=30;
	       n=c;
		v=(n+1)%7;
	       }		if(m==10)
		{       outtextxy(x,y,"MAGHA ");
outtextxy(x+222,y,"  JANUARY-FEBRUARY  ");
		  e=31;
		s=21;
	       z=30;
		n=c+2;
		  v=(n+1)%7;
		} 		  if(m==11)
		  { 	 outtextxy(x,y,"PHALGUNA ");
 outtextxy(x+245,y,"  FEBRUARY-MARCH ");
		     if(y2%4==3)
		       e=29;
		    else
		     e=28;
		     s=20;
		   z=30;
	    if(y2%4==3)
	    {
	    y2=y2+1;
	     if(y2%100==0&&y2%400!=0&&y2>1752)
	    {
	     e=28;
	    }
	    }
	    n=c-3;
		    v=(n+1)%7;
	}
	  if(m==12)
	{
	     outtextxy(x,y,"CAITRA ");
      outtextxy(x+283,y,"   MARCH-APRIL ");
	     if(y2%4==3)
	      {
	      s=21;
	   z=31;
	    }
	     else
	      {
		 z=30;
		  s=22;
		    }

		  e=31;

		    if(y2%4==3)
	    {
	    y2=y2+1;
	     if(y2%100==0&&y2%400!=0&&y2>1752)
	    {
	     z=30;
	     s=22;
	    }
	    }

	   n=c-1;
	    v=(n+1)%7;
	   }

	    if(y2<=1752)
       s=s-11;
       if(y2==1752&&m>5)
       s=s+11;

       if(v==0||v<0)
       v=v+7;
       x=80,y=75;
	 for(i=0;i<7;i++)
	{  if(i==0)
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
	 x=x+70;   	 }
      x=10;
      int ulu=0;
      for(k=v;k>0;k--)
	      x=x+70;
	   y=y+25;
	x1=x;
     if(v==0)
y=y-25;
     h=0,q=s-1,w=0;
j=s;
for(i=0;i<2*z;i++)
{ if(q+1==s&&h==1)
{       x=x1+10;
      for(k=v;k>0;k--)
       x=x+70;
  }if(w==z)
h=1;

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
  {    outtextxy(x,y,string);
   x=x+70;
   }  else
  {  outtextxy(x,y,string);
   y=y+25;
    x=80;
      h=1;
  }   if(w==z)
 {
 if(v1%7!=1)
 { y=y+25;
   x=80;
   }  }     }
  else
  if(h==1)
  {
     setcolor(8);
if(j>e)
j=j-e;
q++;
v1=v+q;
if(s==8)
  v1=v1+1;
if(s==10)
  v1--;
if(s==11)
  v1=v1-2;
if(s==12)
  v1=v1-3;
if(y2==1752)
{  if(s==18)
  v1=v1+2;
if(s==19)
  v1=v1+1;
if(s==21)
  v1--;
if(s==22)
  v1=v1-2;
  if(s==23)
  v1=v1-3;
} if(y2>1752)
{ if(s==19)
  v1=v1+2;
  if(s==20)
  v1++;
  if(s==22)
  v1--;
if(s==23)
  v1=v1-2;
if(s==18)
  v1=v1-2;

} l=j;
y2=lala-1;
 if(y2==1752&&m==5)
if(l==2)
j=j+11;
if(y2<1753)
v1=v1-2;
if(y2==1752&&m>5)
v1=v1+3;
ultoa(l,string,10);
   if(ulu==0)
{x=x1;
ulu=13; }
   if(v1%7!=0)
    {
	outtextxy(x,y,string);
	x=x+70;
  }
  else
  {  outtextxy(x,y,string);

	 y=y+25;
    x=80;
       h=0;

  }  j++;
  }  }
       y=y+50;
     setcolor(7);
    setfillstyle(1,7);
  rectangle(80,y+5,100,y+15);
  floodfill(90,y+10,7);
  setcolor(8);
  setfillstyle(1,8);
  rectangle(315,y+5,335,y+15);
  floodfill(330,y+10,8);
   setcolor(7);
outtextxy(80,y-5,"    Shak Calendar         Christian Calendar");
 rectangle(0,0,639,479);
  rectangle(5,5,634,474);




}
