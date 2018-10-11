#include<bits/stdc++.h>
#define MX 100007
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define rep(i,a) for(int i=0;i<a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define lli long long int
#define FI ios_base::sync_with_stdio(false);cin.tie(0);
#define iter(c) typeof(c.begin())
#define init(n,arr,i) ll n; cin>>n; ll arr[n]; loop(i,n)cin>>arr[i];
#define foreach(it, c) for(__typeof(c.begin()) it = c.begin(); it != c.end(); it++)
using namespace std;
int main()
{
	int n,m;cin>>n>>m;map<string,int>mp;mp.clear();
	int a=n+m;
	while(a--)
	{
		string s;cin>>s;
		mp[s]++;
	}int c=0;
   foreach(it, mp)
   {
   	if(it->second>1)
   	c++;
   }
  // cout<<c<<endl;
   if(c%2==0)
   {
   	n=n-(c/2);
   	m=m-(c/2);
   }
   else
   {
   	n=n-(c-1)/2;
	m=m-(c+1)/2;  
   }
  // cout<<n<<" "<<m<<endl;
   if(n>m)
   {
   	cout<<"YES";
   }
   else
   cout<<"NO";
 
 
	   
	
return 0;
}
