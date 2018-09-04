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
bool judge(ll m)
{
	ll cb=(m*tb-pb)*jb,cs=(m*ts-ps)*js,cc=(m*tc-pc)*jc;
	if(cb<0)
	{
		cb=0;
	}
	if(cs<0)
	{
		cs=0;
	}
	if(cc<0)
	{
		cc=0;
	}
	if(cb+cs+cc<=rl)
	{
		return true;
	}
	else
	{
		return false;
	}
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
	printf("%I64d\n",r-1);
}
