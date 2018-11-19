#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define MN 100
using namespace std;
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
double h,m,s,t1,t2;
bool b1,b2;
int main()
{
	h=read()%12;m=read()%60;s=read()%60;t1=read()%12;t2=read()%12;
	if(t1>t2) swap(t1,t2);
	if(h>=t1)
	{
		if(h<t2) b1=1;	
		else b2=1;
	}
	else b2=1;
	m/=5;
	if(m>=t1)
	{
		if(m<t2) b1=1;
		else b2=1;	
	}
	else b2=1;
	s/=5;
	if(s>=t1)
	{
		if(s<t2) b1=1;
		else b2=1;	
	}
	else b2=1;
	//cout<<h<<" "<<m<<" "<<s<<endl;
	puts(b2&&b1?"NO":"YES");
	return 0;
}

