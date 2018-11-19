#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define rc(x) return cout<<x<<endl,0
#define pb push_back
#define in insert
#define er erase
#define fr first
#define sc second
typedef long long ll;
const long long llinf=LLONG_MAX;
const int inf=INT_MAX;
const int nmax=1e5+5;
const int mod=1e9+7;
using namespace std;
int n,i,f[123],l[123];
string s,tmp;
int main()
{
	//freopen("sol.in","r",stdin);
	//freopen("sol.out","w",stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);cout.tie(0);
	cin>>s>>n;
	for(i=1;i<=n;i++)
	{
		cin>>tmp;
		if(tmp==s)rc("YES");
		f[tmp[0]]=1,l[tmp[1]]=1;
	}
	if(l[s[0]] && f[s[1]])rc("YES");
	rc("NO");
} 
