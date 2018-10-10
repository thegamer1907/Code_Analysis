#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm> 
#define ll long long 
using namespace std;
const  ll inf=2e12; 
char str[105];
ll rl; 
ll pb,ps,pc,tb=0,ts=0,tc=0,jb,jc,js; 
bool judge(ll x)
{
	ll cost=0,costb=0,costs=0,costc=0;
	if(tb>0)
	{
		if(pb<x*tb)
		{
			costb=(x*tb-pb)*jb; 
		} 
	} 
	if(tc>0)
	{
		if(pc<x*tc) 
		{
			costc=(x*tc-pc)*jc; 
		} 
	}
		if(ts>0)
	{
		if(ps<x*ts) 
		{
			costs=(x*ts-ps)*js; 
		} 
	}
	cost=costb+costs+costc; 
	//cout<<cost<<" "<<rl<<endl; 
	if(cost<=rl)
	{
	//	cout<<cost<<"123 "<<rl<<endl;
		return true;
	}
	else
	return false; 
} 
int main()
{
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]=='B')
		tb++;
		else if(str[i]=='S')
		ts++;
		else 
		tc++; 
	} 
	scanf("%d%d%d",&pb,&ps,&pc);
	scanf("%d%d%d",&jb,&js,&jc); 
	scanf("%I64d",&rl); 
	ll l=0;
	ll r=inf; 
	while(r-l) 
	{
		//cout<<1<<endl; 
		//cout<<l<<"  "<<r<<endl; 
		ll mid=(l+r)>>1; 
		if(judge(mid))
		{
			l=mid+1; 
		}
		else
		{
			r=mid; 
		} 
	} 
	cout<<r-1<<endl; 
} 