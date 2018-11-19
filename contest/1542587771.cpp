#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
using namespace std;
inline int read()
{
	int x=0,t=1;char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-')ch=getchar();
	if(ch=='-')t=-1,ch=getchar();
	while(ch<='9'&&ch>='0')x=x*10+ch-48,ch=getchar();
	return x*t;
}
double d[6],t1,t2;
double h,m,s,T1,T2;
bool Check()
{
	if(t1>t2)swap(t1,t2);
	bool fl=true;
	for(int i=1;i<=3;++i)
		if(t1<=d[i]&&d[i]<=t2)fl=false;
	if(fl)return true;
	fl=true;
	for(int i=1;i<=3;++i)
		if(t1>=d[i]||t2<=d[i])fl=false;
	return fl;
}
int main()
{
	h=read();m=read();s=read();T1=read();T2=read();
	d[1]=6.0*s;
	d[2]=6.0*m+0.1*s;
	d[3]=30.0*h+0.5*m+s*1.0/120.0;
	t1=T1*30.0;t2=T2*30.0;
	bool fl=Check();
	if(fl)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
