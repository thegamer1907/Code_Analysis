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
//#define N 100020
#define vi vector<ll>
#define pb push_back
#define mp make_pair
//#define sort(x) sort(x.begin(),x.end())
//#define reverse(x) reverse(x.begin(),x.end())
#define all(a)      a.begin(), a.end()
#define ull unsigned long long
#define inf 1000000000000
#define debug1(x) cerr << #x << ": " << x <<'\n'
#define debug2(x, y) cerr << #x << ": " << x << '\t' << #y << ": " << y <<'\n'
#define debug3(x, y, z) cerr << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z <<'\n'
using namespace std;
//ll dx[]={1,0,-1,0};ll dy[]={0,1,0,-1}; //4 Direction
//ll dx[]={1,1,0,-1,-1,-1,0,1};ll dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
ll gcd(ll x,ll y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}
ll expo(ll n,ll m)   //MODULAR EXPONENTIATION
{
    ll r=1;
    while(m>0)
    {
        if(m%2)
            r=(r*n)%mod;
        n=(n*n)%mod;
        m=m/2;
    }
    return r%mod;
}
int main()
{
 
   IOS;
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin); 
   freopen("output.txt","w",stdout);
   #endif
   /********************* Code starts here ************************/
   string p;
   cin>>p;
   ll n;
   cin>>n;
   bool o1=false,o2=false;
   loop(i,0,n)
   {
    string s;
    cin>>s;
    if(s==p)
    {
      cout<<"YES";
      return 0;
    }
    string t=s;
    reverse(all(t));
    if(t==p)
    {
      cout<<"YES";
      return 0;
    }
    if(s[1]==p[0])
      o1=true;
    if(s[0]==p[1])
      o2=true;
   }
   if(o1&&o2)
    cout<<"YES";
  else
    cout<<"NO";
   return 0;
}