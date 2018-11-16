//---------------prashant Sharma------------

#include<bits/stdc++.h>

#define hell                         1000000007
#define lcm(a,b)                     (a*b)/__gcd(a,b)
#define ll                           long long
#define vll                          vector<ll>
#define vi                           vector<int>
#define pll                          vector< pair<ll,ll> >
#define pb                           push_back
#define mp                           make_pair
#define all(v)                       v.begin(),v.end()
#define lbnd                         lower_bound
#define ubnd                         upper_bound
#define bs                           binary_search
#define F                            first
#define S                            second
#define rep(i,a,b)                   for(i=a;i<b;i++)
#define parr(a,n)                    for(i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;
#define pcont(a)                     for(auto i:a) cout<<i<<" ";cout<<endl;
#define ret(x)                       return cout<<x,0;
#define dbg(x)                       cerr << #x << " is " << x << endl;
#define endl                           '\n'

using namespace std;
map<ll,ll>m1,m2;
int main()
{


      ll n,t;
      cin>>n>>t;
      string s;
      cin>>s;
      ll i,j;
      rep(j,0,t)
      {
      rep(i,0,n)
      {
      	if(i+1<n&&s[i]=='B'&&s[i+1]=='G')
      	{
      		swap(s[i],s[i+1]);
      		i++;
      	}
      }}
      cout<<s;
   return 0;
}