#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	//freopen("a.in","r",stdin);
	//freopen("a.out","w",stdout);
	double h,m,s;
	double x,y;
	cin>>h>>m>>s;
	cin>>x>>y;
	double hh,mm,ss;
	ss=s/60*360;
	mm=m/60*360+6*s/60;
	hh=h/12*360+m/60*6+s/3600*6;
	if(hh>=360)
		hh-=360;
	if(ss>mm)
		swap(ss,mm);
	if(hh<ss)
		swap(hh,ss);
	if(mm>hh)
		swap(mm,hh);
	double X=x;
	double Y=y;
	if(x<12)
		X=x+12;
	if(x>=12)
		X=x-12;
	if(y<12)
		Y=y+12;
	if(y>=12)
		Y=y-12;
	x=x/12*360;
	y=y/12*360;
	X=X/12*360;
	Y=Y/12*360;
	int ok=0;
	if(((x>ss&&x<mm)||(X>ss&&X<mm))&&((y>ss&&y<mm)||(Y>ss&&Y<mm)))
		ok=1;
	if(((x>mm&&x<hh)||(X>mm&&X<hh))&&((y>mm&&y<hh)||(Y>mm&&Y<hh)))
		ok=1;
	if(((x>hh&&x<ss+360)||(X>hh&&X<ss+360))&&((y>hh&&y<ss+360)||(Y>hh&&Y<ss+360)))
		ok=1;
	if(ok)
		puts("YES");
	else puts("NO");
return 0;
}
