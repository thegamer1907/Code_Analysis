#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <iomanip>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl cout<<'\n'
#define ff first
#define ss second
#define READ freopen("input.txt","r",stdin);
#define WRITE    freopen("output.txt","w",stdout);
#define fill(a,x) memset(a,x,sizeof(a));
#define loop(i,x,n) for(int i=x;i<n;i++)
#define TC() ll ttwea;cin>>ttwea;while(ttwea--)
#define ll long long
#define mod 1000000007
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define ull unsigned long long
//#define N 800010
#define inf 10000000000000000
#define debug1(x) cerr << #x << ": " << x <<'\n'
#define debug2(x, y) cerr << #x << ": " << x << '\t' << #y << ": " << y <<'\n'
#define debug3(x, y, z) cerr << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z <<'\n'
using namespace std;
ll dx[]={1,0,-1,0};ll dy[]={0,1,0,-1}; //4 Direction
//ll dx[]={1,1,0,-1,-1,-1,0,1};ll dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
ll gcd(ll x,ll y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}
ll expo(ll n,ll m,ll p)   //MODULAR EXPONENTIATION
{
    ll r=1;
    while(m>0)
    {
        if(m%2)
            r=(r*n)%p;
        n=(n*n)%p;
        m=m/2;
    }
    return r%p;
}
bool vis[1010][1010];
ll n,m;
ll a[1010][1010];
void dfs(ll r,ll c)
{
	vis[r][c]=true;
	for(ll i=0;i<4;i++)
	{
		ll x=r+dx[i],y=c+dy[i];
		if(x>=0&&x<n&&y>=0&&y<m)
		{
			if(vis[x][y]==false&&a[x][y]<=a[r][c])
				dfs(x,y);
		}
	}
}
struct play{
 ll rat, mi, ma, t;
 string a,b;
};
int main()
{
 
   IOS;
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin); 
   freopen("output.txt","w",stdout);
   #endif
   /********************* Code starts here ************************/
   string s;
   cin>>s;
   ll n=s.size();
   vi z(n);
   z[0]=0;
   ll l=0,r=0;
   for(ll i=1;i<n;i++)
   {
   	if(i>r)
   	{
   		r=l=i;
   		while(r<n&&s[r]==s[r-l])
   			r++;
   		z[i]=r-l;
   		r--;
   	}
   	else
   	{
   		ll k1=i-l;
   		if(z[k1]<r-i+1)
   		{
   			z[i]=z[k1];
   		}
   		else
   		{
   			l=i;
   			while(r<n&&s[r]==s[r-l])
   			r++;
   			z[i]=r-l;
   			r--;
   		}
   	}
   }
   ll maxz=0,k=0;
   vi si;
   for(ll i=0;i<n;i++)
   {
   	if(z[i]==n-i)
   	{
   		si.pb(z[i]);

   	}
   }
   if(si.size()==0)
   {
   	cout<<"Just a legend";
   	return 0;
   }
 // cout<<"j";
   //for(ll i=0;i<n;i++)
   //	debug2(i,z[i]);
   sort(all(si));
   for(ll i=si.size()-1;i>=0;i--)
   {
   	for(ll j=0;j<n;j++)
   	{
   		if(z[j]>=si[i]&&j+si[i]<n)
   		{
   			string ans=s.substr(0,si[i]);
   			cout<<ans;
   			//cout<<endl<<si[i];
   			return 0;
   		}
   	}
   	//cout<<si[i]<<endl;
   }

   cout<<"Just a legend";
   return 0 ;


} 