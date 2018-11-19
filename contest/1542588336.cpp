#include <stdio.h>
#include <string.h>

int h,t,m;
int ta,tb;

int main()
{
	scanf("%d %d %d %d %d",&h,&t,&m,&ta,&tb);
	double hh,tt,mm,tta,ttb;
	hh=h*30+t*0.5+m*0.5/60;
	tt=t*6+m/10.0;
	mm=m*6;
	tta=ta*30;
	ttb=tb*30;
	double ra,rb,rc,rd;
	ra=hh-tta;
	rb=tt-tta;
	rc=mm-tta;
	rd=ttb-tta;
	if(ra<0)
		ra+=360;
	if(rb<0)
		rb+=360;
	if(rc<0)
		rc+=360;
	if(ra>=360)
		ra-=360;
	if(rb>=360)
		rb-=360;
	if(rc>=360)
		rc-=360;
	if(rd>=360)
		rd-=360;
	if(rd<0)
		rd+=360;
	if((rd>rc&&rd>rb&&rd>ra)||(rd<rc&&rd<rb&&rd<ra))
		puts("YES");
	else
		puts("NO");
	return 0;
}
