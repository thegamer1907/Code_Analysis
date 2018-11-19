#include<bits/stdc++.h>
using namespace std;

int h,m,s,t1,t2;
double ag[8];

int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(h==12)h=0;
	ag[1]=(double)s/5.0;
	ag[2]=(double)m/5.0+ag[1]/60.0;
	ag[3]=(double)h+ag[2]/12.0;
	if(t1>=12)t1-=12;if(t2>=12)t2-=12;
	sort(ag+1,ag+4);
	if(ag[1]<=t1&&t1<=ag[2]&&ag[1]<=t2&&t2<=ag[2])return puts("YES"),0;
	if(ag[2]<=t1&&t1<=ag[3]&&ag[2]<=t2&&t2<=ag[3])return puts("YES"),0;
	if(ag[1]<=t1&&t1<=ag[3]||ag[1]<=t2&&t2<=ag[3])return puts("NO"),0;
	return puts("YES"),0;
}
