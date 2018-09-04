#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define pll pair<ll,ll>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mll map<ll,ll>
#define vl vector<ll>
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(),a.end()
#define F first
#define S second
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll n,m,p=0;
    string s;
    map<string,ll>mp;
    cin>>n>>m;
    rep(i,0,n+m)
    {
        cin>>s;
        mp[s]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->S==2)
        p++;
    }
    n=n-p+ceil((float)p/2);
    m=m-p+p/2;
    if(n>m)
    cout<<"YES";
    else
    cout<<"NO";
}

