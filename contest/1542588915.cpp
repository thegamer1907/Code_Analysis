#include <bits/stdc++.h>
using namespace std;

int h,m,s,a,b;

inline void init()
{
	cin>>h>>m>>s>>a>>b;
	if(h==12)h=0;
	if(a>b)swap(a,b);
	int f1=1,f2=1;
	
	double hd=30*h+m/2.0+s/120.0;
	double md=m*6+s/10.0;
	double sd=s*6;
	double st=a*30,ed=b*30;
	
	if(st<=hd&&hd<=ed)f1=0;else f2=0;
	if(st<=md&&md<=ed)f1=0;else f2=0;
	if(st<=sd&&sd<=ed)f1=0;else f2=0;
	if(f1||f2)puts("YES");else puts("NO");
}

inline void solve()
{
	
}

int main()
{
	init();
	solve();
	return 0;
}