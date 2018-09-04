#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define vi vector<int>
#define vd vector<double>
#define ii pair<int,int>
#define vii vector<ii>
#define hell 1000000007
#define rep(i, a, b) for (int i = a; i<(int)b; i++)
#define repd(i, a, b) for (int i = a; i>=(int)b; i--)
#define all(v) v.begin(),v.end()
#define pb push_back
#define in freopen("test.in","rt",stdin)
#define out freopen("test.out","wt",stdout)
#define tl cout<<"\nTime elapsed: "<<(1000 * clock() / CLOCKS_PER_SEC)<<"ms"
#define fi first
#define se second
#define endl "\n"
#define li pair<ll,int>
#define il pair<int,ll>
ll max(ll a,ll b){return a>b? a: b;}
ll min(ll a,ll b){return a<b? a: b;}
using namespace std;

ll n,s;
vector<ll> t;
bool possible(ll k){
    vector<ll>costs(n);
    rep(i,0,n){
        costs[i]=t[i]+(i+1)*k;
    }
    sort(all(costs));
    ll lft=s;
    rep(i,0,k){
        lft-=costs[i];
        if(lft<0)return 0;
    }
    return 1;
}

int main(){
    _
    #ifndef ONLINE_JUDGE
        in;
    #endif

    cin>>n>>s;
    t.resize(n);
    rep(i,0,n){
        cin>>t[i];
    }

    ll l=0,r=n+1;
    while(l<r){
        ll mid=(1+r+l)/2;
        if(possible(mid))l=mid;
        else r=mid-1;
    }

    vector<ll>costs(n);
    rep(i,0,n){
        costs[i]=t[i]+(i+1)*l;
    }
    sort(all(costs));
    ll tot=0;
    rep(i,0,l){
        tot+=costs[i];
    }
    cout<<l<<" "<<tot;



return 0;
}
