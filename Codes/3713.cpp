#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX 1000001
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define vi vector<ll>
#define vp vector<pii >
#define vs vector<string>
#define all(v) v.begin(),v.end()
#define lb(v,x) lower_bound(all(v),x)
#define ub(v,x) upper_bound(all(v),x)
#define F first
#define S second
#define FOR(i,a,b) for(ll i=a;i<b;++i)
#define ROF(i,a,b) for(ll i=a;i>=b;i--)
#define sz(x) (ll)x.size()
typedef long long ll;

using namespace std;

int n[3],p[3];
ll r;
int sb,sc,ss;

ll f(ll x){
    ll c=p[0]*max(0ll,x*sb-n[0])+p[1]*max(0ll,x*ss-n[1])+p[2]*max(0ll,x*sc-n[2]);
    return c;
}

int main()
{
    IOS
    string s;cin>>s;
    FOR(i,0,sz(s)){
        if(s[i]=='B')sb++;
        else if(s[i]=='C')sc++;
        else ss++;
    }
    FOR(i,0,3)cin>>n[i];
    FOR(i,0,3)cin>>p[i];
    cin>>r;
    ll lo=0,hi=1e15;
    FOR(i,0,100){
        ll mid=(lo+hi+1)/2;
        if(f(mid)>r)hi=mid-1;
        else lo=mid;
        if(lo>=hi)break;
        
    }
    cout<<lo;
    return 0;
}
