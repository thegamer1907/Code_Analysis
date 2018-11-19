#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
inline int read(){
	int x = 0,f = 1;char ch = getchar();
	while(ch < '0' || ch > '9'){if(ch == '-')f = -1;ch = getchar();}
	while(ch >= '0' && ch <= '9'){x = x*10+ch-'0';ch = getchar();}
	return x*f;
}

int h,m,s,t1,t2;
double gh,gm,gs,g1,g2;

int main(){
	h = read(); m = read(); s = read(); t1 = read(); t2 = read();
	if(s == 60) s = 0;
	gs = s*6;
	if(m == 60) m = 0;
	gm = m*6+s*0.1;
	if(h == 12) h = 0;
	gh = h*30+m*0.5+s*0.0083;
	if(t1 == 12) t1 = 0;
	g1 = t1*30;
	if(t2 == 12) t2 = 0;
	g2 = t2*30;
	if(g1 > g2) swap(g1,g2);
	if((gs > g1 && gs < g2 && gh > g1 && gh < g2 && gm > g1 && gm  < g2))
		printf("YES\n");
	else if((gs < g1 || gs > g2)&&(gh < g1 || gh > g2) &&(gm < g1 || gm > g2))
		printf("YES\n");
	else printf("NO\n");
	return 0;
}