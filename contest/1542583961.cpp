/// _|_  _|_  _|_
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define re_fr(i,a,b) for(int i=a;i>=b;i--)
#define frl(i,a,b) for(ll i=a;i<=b;i++)
#define re_frl(i,a,b) for(ll i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second
#define MX 1e12
#define eps 1e-9
#define pll pair<ll,ll>
//#define mod 1000000007
#define mod2 100000000
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string t[1000];
int main()
{
    fast();
    string s; cin>>s;
    ll n; cin>>n;
    bool ck=false;
   for(ll i=1;i<=n;i++)
   {
       string p; cin>>p;
       if(p[0]==s[0] && p[1]==s[1]) ck=true;
       if(p[1]==s[0] && p[0]==s[1]) ck=true;
       t[i]=p;
   }
   for(ll i=1;i<=n;i++)
   {
       if(t[i][1]==s[0])
       {
           for(ll j=1;j<=n;j++)
           {
               if(t[j][0]==s[1]) ck=true;
           }
       }
   }
   if(ck) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
