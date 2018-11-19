#include<bits/stdc++.h>
using namespace std;

const int MAXN = 3600*60;
bool gap[MAXN];

//#define FUCKOJ

int l(int now)
{
	return (now+1)%MAXN;
}

int r(int now)
{
	return (now-1+MAXN)%MAXN;
}

int main()
{
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	
	h=(3600*h+60*m+s)*5;
	m=m*3600+60*s;
	s=3600*s;

	t1*=(5*3600),t2*=(5*3600);

#ifdef FUCKOJ
	cout<<h<<" "<<m<<" "<<s<<endl;
#endif
	
	h%=MAXN,m%=MAXN,s%=MAXN;
	t1%=MAXN,t2%=MAXN;
	
	gap[h]=gap[m]=gap[s]=true;

	bool flag=false;
	int now=t1;
	while(true)
	{
		if(gap[now])	break;
		if(now==t2){	flag=true;break;}
		now=l(now);
	}
	if(flag)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	
	now=t1;
	while(true)
	{
		if(gap[now])	break;
		if(now==t2){	flag=true;break;}
		now=r(now);
	}
	if(flag)	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}