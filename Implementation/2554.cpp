#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define MOD2 100000000
#define ll long long
#define cnl(d) cout<<d<<'\n'
#define cns(d) cout<<d<<' '
#define endl '\n'
#define cno cout<<"NO\n"
#define cyes cout<<"YES\n"
#define vl vector<ll>
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define pl pair<ll,ll>
#define vll vector<pl>
#define sl set<ll>
#define sll set<pl>
#define msl map<string,ll>
#define mll map<ll,ll>
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(i=(a);i<=(b);i++)
#define rdp(i,a,b) for(i=(a);i>=(b);i--)
#define lb(v,z) lower_bound(all(v),z)
#define ub(v,z) upper_bound(all(v),z)
#define trvl(c,it) for(vl::iterator it=(c).begin();it!=(c).end();it++)
#define trvll(c,it) for(vll::iterator it=(c).begin();it!=(c).end();it++)
#define trsll(c,it) for(sll::iterator it=(c).begin();it!=(c).end();it++)
#define trmsl(c,it) for(msl::iterator it=(c).begin();it!=(c).end();it++)
#define trmll(c,it) for(mll::iterator it=(c).begin();it!=(c).end();it++)
#define trsl(c,it) for(sl::iterator it=(c).begin();it!=(c).end();it++)
#define trsi(c,it) for(set<int>::iterator it=(c).begin();it!=(c).end();it++)

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,i,j,l=0,r=0,k=0,h;
    cin>>n>>h;
    ll a[n];
    rep(i,0,n-1){
        cin>>a[i];
        if(a[i]<=h) r++;
        else r+=2;
    }
    cout<<r;

}
