#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int h,m,s,t1,t2;
double dh,dm,ds,dt1,dt2;

int main()
{
//	freopen("B.in","r",stdin);
//	freopen("B.out","w",stdout);
	
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(h==12)
		h=0;
	if(t1==12)
		t1=0;
	if(t2==12)
		t2=0;
	ds=s*6;
	dm=m*6+0.1*s;
	dh=h*30+0.5*m+(1.0/120)*s;
	dt1=t1*30;dt2=t2*30;
	
	if(ds>dm)
		swap(ds,dm);
	if(ds>dh)
		swap(ds,dh);
	if(dm>dh)
		swap(dm,dh);
		
	bool flag=false;
	if(dt1<ds && dt2<ds)
		flag=true;	
	if(dt1>ds && dt1<dm && dt2>ds && dt2<dm)
		flag=true;
	if(dt1>dm && dt1<dh && dt2>dm && dt2<dh)
		flag=true;
	if(dt1>dh && dt2>dh)
		flag=true;
	if(dt1<ds && dt2>dh)
		flag=true;
	if(dt1>dh && dt2<ds)
		flag=true;
		
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}