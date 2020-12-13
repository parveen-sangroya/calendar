 void onlymonth(long int y2,int month)
{
int n,h,d,r,k,l,b,e,di,m,j,a=0,ypos ;
long int i;
char string[2];
setcolor(7);
rectangle(0,0,639,479);
rectangle(5,5,634,474);
r=y2%9;
if(r==0)
di=16;
if(r==1)
di=35;
if(r==2)
di=24;
if(r==3)
di=43;
if(r==4)
di=31;
if(r==5)
di=21;
if(r==6)
di=40;
if(r==7)
di=30;
if(r==8)
di=18;
e=(y2-1944)/9;
e=y2-(e-1)*9;
for(i=e;i<=y2;i=i+9)
{
if(i%4==0)
di--;
if(i%100==23)
di=di+10;
if(di<16)
di=di+30;
for(j=0;j<9;j++)
{
di--;
if(di<16)
di=di+30;
}
j=i%100;
if(j==73)
di=di-6;
if(j==64)
di=di+6;
if(j==55||j==58||j>=60&&j<=63||j==74||j==77||j==91||j==93||j==96||j==97||j==98||j==99||j==1||j==12||j==20||j==26||j==31||j==33||j==34||j==37||j==39)
{
di--;
}
if(j==35)
di++;
if(j==32)
di=di-11;
}
if(di<16)
di=di+30;
if(di>31)
di=di-31;
d=di;
settextstyle(8,0,1);
outtextxy(270,321,"HOLLIDAY");
ypos=330;
if(month==1)
{outtextxy(80,360,"Lohri            ");
outtextxy(480,360,"13 JAN");
outtextxy(80,380,"Makar Sankrati        ");
outtextxy(480,380,"14 JAN");
outtextxy(80,400,"Republic Day ");
outtextxy(480,400,"26 JAN");
}l=d+25;
if(l>31)
{
if(d>15&&d<32)
 l=l-31;
else
l=l-30;
}
n=b=l;
b=b-13;
if(b<1)
{
b=32+b;
a=b;
if(month==1)
{outtextxy(80,420,"Basant Panchmi                           JAN ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,420,string);
else
outtextxy(480,420,string);
}
}else
{a=b;
if(month==2)
{ypos=ypos+20;
outtextxy(80,ypos,"Basant Panchmi                           FEB ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(480,ypos,string);
}
}
n=n-17;
if(n<1)
{n=28+n;
a=n+1;
 if (di<15)
 a=a-1;
if(month==2)
{ ypos=ypos+20;
outtextxy(80,ypos,"Maha Shiv Ratri                           FEB");
a++;
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
} }else
{
a=n;
 if (di<15)
 a=a-1;
if(month==3)
{ ypos=ypos+20;
outtextxy(80,ypos,"Maha Shiv Ratri                           MAR ");
a--;
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
} }
 a=l;
 if (di<15)
 a=a-1;
if(month==3)
{ ypos=ypos+20;
outtextxy(80,ypos,"Holi   ");
outtextxy(516,ypos,"MAR");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(480,ypos,string);
}l=l+23;
if(l>31)
{
l=l-31;
a=l;
if(month==4)
{ ypos=ypos+20;
outtextxy(80,ypos,"Ram Navami   ");
outtextxy(516,ypos,"APR");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
} k=1;
}
else
{ a=l;
if(month==3)
{     ypos=ypos+20;
outtextxy(80,ypos,"Ram Navami    ");
outtextxy(516,ypos,"MAR");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
}  }l=l+4;
if(l>31)
l=l-31;
a=l;
if(month==4)
{   ypos=ypos+20;
outtextxy(80,ypos,"Mahaveer jayanti       ");
outtextxy(516,ypos,"APR");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
}
else
if(k==1)
{   a=l;
if(month==3)
{ /*  ypos=ypos+20;
outtextxy(80,ypos,"Mahaveer jayanti      ");
outtextxy(516,ypos,"APR");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
*/

}   }
else
{   a=l;
if(month==3)
{   ypos=ypos+20;
outtextxy(80,ypos,"Mahaveer jayanti    ");
outtextxy(516,ypos,"MAR");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
}  }
if(month==4)
{ypos=ypos+20;
outtextxy(80,ypos,"Baisakhi                  ");
if(y2==2004)
outtextxy(480,ypos,"14 APR");
else
outtextxy(480,ypos,"13 APR");
}
if(month==8)
{ ypos=ypos+20;
outtextxy(80,ypos,"Independence Day  ");
outtextxy(480,ypos,"15 AUG");
}l=d+18;
if(l>31)
l=l-31;
a=l;
if(month==8)
{ ypos=ypos+20;
if(year==2007)
a++;
outtextxy(80,ypos,"Rakhi            ");
outtextxy(516,ypos,"AUG");
 ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
} l=l+8;
if(l>31)
{ l=l-31;
a=l;
if(month==9)
{ ypos=ypos+20;
outtextxy(80,ypos,"Janmashtmi     " );
outtextxy(516,ypos,"SEP");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
} }else
{  a=l;
if(month==8)
{  ypos=ypos+20;
outtextxy(80,ypos,"Janmashtmi              " );
outtextxy(516,ypos,"AUG");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
}  }
if(month==10)
{  ypos=ypos+20;
outtextxy(80,ypos,"Mahatma Gandhi Janti       ");
outtextxy(493,ypos,"2 OCT");
}  l=d-20;
if(l<1)
l=30+l;
a=l;
if(di<15)
a=a+1;
if(month==9&&m<1)
{  ypos=ypos+20;
outtextxy (80,ypos,"Vijay Dashami           ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
if(m<1)
outtextxy(516,ypos,"SEP");
}else
if(month==10)
{   ypos=ypos+20;
outtextxy (80,ypos,"Vijay Dashami           ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
if(m<1)
outtextxy(516,ypos,"");
else
outtextxy(516,ypos,"OCT");
}
if(month==11)
{ ypos=ypos+20;
outtextxy(80,ypos,"Haryana Day                   ");
outtextxy(493,ypos,"1 NOV");
}
if(d>31)
d=d-31;
m=d;
l=d-20;
m=l;
if(l<1)
l=30+l;
a=di;
if(month==10&&di>15)
{ if(di>15)
{ ypos=ypos+20;
outtextxy(516,ypos,"OCT");
outtextxy(80,ypos,"Diwali  ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
} }
if(month==11)
{if(di>15)
{}
else
{ypos=ypos+20;
outtextxy(516,ypos,"NOV");
outtextxy(80,ypos,"Diwali  ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
}}
a=d+1;
if(a>31)
a=a-31;
if(month==10)
{ if(a<=14)
{ }
else
{ ypos=ypos+20;
outtextxy(516,ypos,"OCT");
outtextxy(80,ypos,"Vishwakarma Day         ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
} }
if(month==11)
{  if(a<=14)
{  ypos=ypos+20;
outtextxy(516,ypos,"NOV");
outtextxy(80,ypos,"Vishwakarma Day         ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
}  }  a=d+2;
if(a>31)
a=a-31;
if(month==10)
{     if(a<=14)
{   }
else
{   ypos=ypos+20;
outtextxy(516,ypos,"OCT");
outtextxy(80,ypos,"Bhaya Dooj           ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
}}if(month==11)
{ if(a<=14)
{ ypos=ypos+20;
outtextxy(516,ypos,"NOV");
 outtextxy(80,ypos,"Bhaya Dooj           ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
}} l=d;
a=di+14;
if(a>31)
a=a-31;
if(month==10)
{ if(a<18)
{ }
else
{ ypos=ypos+20;
outtextxy(516,ypos,"OCT");
outtextxy(80,ypos,"Guru Nanak Jayanti  ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
} }if(month==11)
{  if(a<30)
{  ypos=ypos+20;
outtextxy(516,ypos,"NOV");
if(year==2007)
a++;
outtextxy(80,ypos,"Guru Nanak Jayanti  ");
ultoa(a,string,10);
if(a/10==0)
outtextxy(493,ypos,string);
else
outtextxy(481,ypos,string);
}  }if(month==12)
{   ypos=ypos+20;
outtextxy(80,ypos,"Chistmas Day                  ");
outtextxy(480,ypos,"25 DEC");
}
}
void commonth(long y,int m)
{
long int l,v,v1,n=0,n1,d,j,k,c,c1=2,i,x=0,x1,y2,a,a1;
 char string[2];
 setbkcolor(6);
month=m;
year=y;
processing();
setcolor(7);
y2=y;
for(i=0;i<=y2;i++)
{if(i==1753)
c1=c1+3;
 a=i/100;
a1=i%100;
 if(a1==1&&a%4!=0&&i>1750)
  c1--;
   if(i%4==1)
  {    c1=c1+2;
  c1=c1%7;
  }     else
   {     c1++;
    c1=c1%7;
   }  }
     c=c1;
      cleardevice();
      ultoa(y,string,10);
      if(y/10==0)
      outtextxy(315,20,string);
     else
     if(y/100==0)
     outtextxy(309,20,string);
 else
 if(y/1000==0)
      outtextxy(303,20,string);
     else
     if(y/10000==0)
     outtextxy(297,20,string);
 else
 if(y/100000==0)
      outtextxy(291,20,string);
     else
     if(y/1000000==0)
     outtextxy(285,20,string);
     else
     if(y/10000000==0)
     outtextxy(279,20,string);
else
     if(y/100000000==0)
     outtextxy(273,20,string);

     rectangle(0,0,639,479);
 rectangle(5,5,634,474);
     setcolor(4);
	x=275,y=50;
	 if(m==1)
     {  outtextxy(x+2,y,"JANUARY");
	d=31;
       n=c;
       v=(n+1)%7;
     }        else
       if(m==2)
       {
      outtextxy(x-7,y,"FEBRUARY");
       if(y2%4==0)
       {       if(a1==0&&a%4!=0&&y2>1752)
       d=28;
       else
	d=29;
	} else
	d=28;
	n=c+3;
	v=(n+1)%7;
       }         if(y2%4==0)
	 {
	 c++;
	 }
	if(a1==0&&a%4!=0&&y2>1752)
	c--;
	 if(m==3)
	{  	 outtextxy(x+12,y,"MARCH");
		d=31;
		  n=c+3;
	  v=(n+1)%7;
	}   else
	 if(m==4)
	 {
    outtextxy(x+17,y,"APRIL");
		 d=30;
	   n=c-1;
	   v=(n+1)%7;
	 }  else
	  if(m==5)
	  {    outtextxy(x+25,y,"MAY");
		  d=31;
	   n=c+1;
	   v=(n+1)%7;
	  } else
	  if(m==6)
	  {       outtextxy(x+19,y,"JUNE");
		   d=30;
	    n=c+4;
	    v=(n+1)%7;
	  } else
	    if(m==7)
	    { 	 outtextxy(x+20,y,"JULY");
		    d=31;
	      n=c-1;
	      v=(n+1)%7;
	    } 	      else
	      if(m==8)
	      {      outtextxy(x+8,y,"AUGUST");
		    d=31;
	       n=c+2;
		v=(n+1)%7;
	      } else
	       if(m==9)
	       {     outtextxy(x-10,y,"SEPTEMBER");
		     if(y2==1752)
		d=19;
	       else
		d=30;
	       n=c-2;
		v=(n+1)%7;
	       }if(y2==1752)
	       c=c-4;
		if(m==10)
		{      outtextxy(x+4,y,"OCTOBER");
			d=31;
		   n=c+0;
		  v=(n+1)%7;
		} else
		  if(m==11)
		  {	 outtextxy(x-5,y,"NOVEMBER");
				   d=30;
				    n=c+3;
		    v=(n+1)%7;
		  }  else
		  if(m==12)
		  {	 outtextxy(x-5,y,"DECEMBER");
		      d=31;
		    n=c-2;
		    v=(n+1)%7;
		  }   	   x=30; y=y+50;
	for(i=0;i<7;i++)
	{    if(i==0)
setcolor(4);
 else
     setcolor(7);
	if(i==0)
	outtextxy(x,y,"SUN");
	 if(i==1)
	 outtextxy(x,y,"MON");
	 if(i==2)
	 outtextxy(x,y,"TUE");
	 if(i==3)
	 outtextxy(x,y,"WED");
	 if(i==4)
	 outtextxy(x,y,"THR");
	 if(i==5)
	 outtextxy(x,y,"FRI");
	 if(i==6)
	 outtextxy(x,y,"SAT");
	 x=x+90;	 }
      x=30;
      for(k=v;k>0;k--)
      {               x=x+90;
      outtextxy(x,20,"   ");
      }          y=y+50;
	      x=x-80;
 for(i=1;i<=d;i++)
{          l=i;
	   v1=v+i;
int date;
if(y2==1752&&m==9)
{ if(i>=3)
{ l=i+11;
if(l==21)
x=x+10;
date=l;
}}ultoa(l,string,10);
  if(v1%7==1)
setcolor(4);
 else
 setcolor(7);
   if(v1%7!=1)
  {        if(i==10)
x=x-10;
    x=x+90;
      outtextxy(x,y,string);
     }  else
  {     y=y+30;
	  x=30;
    if(date==24)
    x=x+10;
    if(i<10)
x=x+10;
     outtextxy(x,y,string);
      } }
onlymonth(year,month);
}
