using namespace std;
#include<deque>
#include<stdint.h>
#include<set>
#include<stack>
#include <iostream>
#include <algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<iomanip>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<cstring>
#include<map>
#define sqr(x) (x)*(x)
#define ll long long
#define mp make_pair
#define pb push_back
#define in insert
#define mtr(x,y,z) mp(mp(x,y),z)
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define fpi(x) freopen(x,"r",stdin);
#define fpo(x) freopen(x,"w",stdout);
#define fprio fpi("in.txt");fpo("out.txt"):
#define fast ios::sync_with_stdio(false);
ll n,m,l,r,mid,num[4],cot[4],ned[4],ans,i;
string st;
bool check(ll x)
{
	ll i,t=m;
	for (i=1;i<=3;i++)
	{
		t-=max(0ll,(x*ned[i]-num[i])*cot[i]);
	}
	return t>-1;
}
int main()
{
	cin>>st;
	for (i=0;i<st.length();i++)
	{
		if (st[i]=='B') ned[1]++;
		if (st[i]=='S') ned[2]++;
		if (st[i]=='C') ned[3]++;
	}
	for (i=1;i<=3;i++) cin>>num[i]; 
	for (i=1;i<=3;i++) cin>>cot[i]; 
	cin>>m;
	l=0;r=1e15;
	while (l<r)
	{
		mid=(l+r)/2;
		if (check(mid))
		{
			l=mid+1;
			ans=mid;
		}
		else r=mid;
	}
	cout<<ans;
	return 0;
} 
