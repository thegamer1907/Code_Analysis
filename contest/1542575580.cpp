#include<bits/stdc++.h>
using namespace std;
int mi,hor,sec,s,t;
double p1,p2,p3;
int main()
{
	scanf("%d%d%d%d%d",&hor,&mi,&sec,&s,&t);
	s%=12;t%=12; 
	p1=5.0*hor+1.0*mi/60*5+1.0*sec/3600*5;
	while(p1>=60) p1-=60;
	p2=mi+1.0*sec/60;
	while(p2>=60) p2-=60;
	p3=sec;
	s=s*5%60;t=t*5%60;
	
	if(s==p1||s==p2||s==p3) {puts("NO");return 0;}
	if(t==p1||t==p2||t==p3) {puts("NO");return 0;}
	bool ni=1,shun=1;
	if(s>t) swap(s,t);
	if(p1>=s&&p1<=t) shun=0;
	else ni=0;
	if(p2>=s&&p2<=t) shun=0;
	else ni=0;
	if(p3>=s&&p3<=t) shun=0;
	else ni=0;
	if(ni||shun) puts("YES");
	else puts("NO");
}