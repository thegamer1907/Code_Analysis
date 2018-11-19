/*
   $$$$  mystery $$$$
*/
 #include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<queue>
#include<sstream>
#include<climits>
#include<utility>
#define MX 100007
#define ff first
#define ss second
#define MOD (1000000007LL)
#define eps (1e-6)
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define rep(i,strt,n) for(int i=strt;i<n;i++)
#define repp(i,strt,n) for(int i=strt;i<=n;i++)
#define repd(i,strt,n) for(int i=strt;i>=n;i--)
#define pb(a) push_back(a)
#define all(v) (v).begin(), (v).end()
#define mp(x, y) make_pair((x), (y))
#define lli long long int
#define FI ios_base::sync_with_stdio(false);cin.tie(0);
#define iter(c) typeof(c.begin())
#define init(n,arr,i) lli n; cin>>n; lli arr[n]; rep(i,n)cin>>arr[i];
#define foreach(it, c) for(__typeof(c.begin()) it = c.begin(); it != c.end(); it++)
using namespace std;
int main()
{
	string s;cin>>s;
	int n;cin>>n;
   vector<string>v;
     while(n--)
     {
	   string a;cin>>a;
	    v.pb(a);
    }int f=0,g=0,q=0,t=0;
    for(int i=0;i<v.size();i++)
    {
    	if(v[i]==s || (s[0]==v[i][1] && s[1]==v[i][0]))
    	{cout<<"YES";
    	return 0;
    }

    if(v[i][1]==s[0])
    q=1;
    if(v[i][0]==s[1])
    t=1;
}
if((q==1 && t==1))
{
	cout<<"YES";
}
else
{
	cout<<"NO";
}


  
	
  
return 0;
}
