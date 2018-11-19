#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
#define pp pop_back
#define MAXN   100001
#define mp make_pair
#define endl '\n'
#define ff first
#define ss second
ll min(ll x,ll y)
{
	if(x<y)
	return x;
	return y;
}
ll max(ll x,ll y)
{
	if(x>y)
	return x;
	return y;
}
int main()
{ 
	float x=0;
	float y=5;
	ll H,M,S,T1,T2;
	cin>>H>>M>>S>>T1>>T2;
	float h,m,s,t1,t2;
	h=(float)H;
	m=(float)M;
	s=(float)S;
	t1=(float)T1;
	t2=(float)T2;
	if(h==12.0)
	h=0.0;
	if(m>x || s>x)
	h+=.01;
	m=m/y;
	if(s>x)
	m+=.01;
	s=s/y;
	ll flag=0;
	ll count=0;
	if(t1>t2)
	{
		if(h>t2 && h<t1)
		count++;
		if(m>t2 && m<t1)
		count++;
		if(s>t2 && s<t1)
		count++;
		if(count==3 || count==0)
		flag=1;
	}
	else
	{
		if(h>t1 && h<t2)
		count++;
		if(m>t1 && m<t2)
		count++;
		if(s>t1 && s<t2)
		count++;
		if(count==3 || count==0)
		flag=1;
	}
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
