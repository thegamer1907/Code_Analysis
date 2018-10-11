#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <cctype>
#include <cstdlib>
#include <set>
#include <map>
#include <sstream>
using namespace  std;
#define  ll long long
#define lson i<<1,l,l+r>>1
#define rson i<<1|1,((l+r)>>1)+1,r
typedef pair<ll,ll>P; 
static const ll INF=1e18;
static const ll MAX=1e5+7;
const double gold=(sqrt(5.0)+1)/2;
const    ll   len=1e3+5;
int main()
{
	ll n,m;
	cin>>n>>m;
	getchar();
	string s1[len],s2[len];
	for(ll i=0;i<n;++i)
		cin>>s1[i];
	for(ll i=0;i<m;++i)
		cin>>s2[i];
	ll c=0;
	for(ll i=0;i<n;++i)
		for(ll j=0;j<m;++j)
			if(s1[i]==s2[j])
				c++;
	n=n-c;
	m=m-c;
	c=c%2;
	n+=c;
	if(n>m)puts("YES");
	else puts("NO");
	return 0; 
}