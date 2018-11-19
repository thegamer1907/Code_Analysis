#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<queue>

using namespace std;


int h,m,s;
int t1,t2;

int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	
	s=s*3600;
	m=m*3600;
	h=h*5;
	h=h*3600;
	
	m=m+s/60;
	h=h+m/12;
		
	t1=t1*5*3600;
	t2=t2*5*3600;
	
	
	
	if(t1<t2)
	{
		int tmp=t1;
		t1=t2;
		t2=tmp;
	}
	
	int cw=0,ccw=0;
	
	if( t1>s && s>t2 )  ccw=1;
	if( t1<s && t2<s)	cw=1;
	if( t1>s && t2>s)	cw=1;
	
	if( t1>m && m>t2 )  ccw=1;
	if( t1<m && t2<m)	cw=1;
	if( t1>m && t2>m)	cw=1;
	
	if( t1>h && h>t2 )  ccw=1;
	if( t1<h && t2<h)	cw=1;
	if( t1>h && t2>h)	cw=1;
	
	if(ccw==1 && cw==1)
	printf("NO");
	else
	printf("YES");
	return 0;
}
