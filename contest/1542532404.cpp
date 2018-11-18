#include<bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
int h1,h2,h3;
int w1,w2,w3;
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(h==12) h=0;
	if(t1==12) t1=0;
	if(t2==12) t2=0;
	h1=h*3600+m*60+s;
	h2=m*720+s*12;
	h3=s*720;
	t1*=3600, t2*=3600;
	if(t1>t2) swap(t1,t2);
	if(t1<=h1&&h1<=t2) w1=1;
	if(t1<=h2&&h2<=t2) w2=1;
	if(t1<=h3&&h3<=t2) w3=1;
	if(w1==w2&&w2==w3) puts("YES");
	else puts("NO");
}