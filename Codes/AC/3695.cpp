#include <bits/stdc++.h>
using namespace std;
#define FOR(x, y, z) for(int x = y; x <= z; x++)
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl "\n"
#define x1 lol
#define y1 lal
#define sz(x) (int)(x.size())
#define ex exit(0)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vi;
int const N=(int)2e6+1,INF=(int)1e9+1, MOD=(int)1e9+7;
ll mypow(ll a, ll b, int mod) {
    ll rv = 1;
    while (b) {
        if (b % 2)
            rv = rv*a%mod;
        a = a*a %mod;
        b /= 2;
    }
    return rv;
}
bool ok,used[1500][1500],same;
ll n,m,ans,k,cur,cnt,pos;
ll a[N],b[N];
vector <pii > v;
ll nb,ns,nc,pb,ps,pc,r,cb,cs,cc;
bool check(ll x){
    ll rb = max(x*cb - nb,1ll*0);
    ll rs = max(x*cs - ns,1ll*0);
    ll rc = max(x*cc - nc,1ll*0);
    if(r>=rb*pb+rs*ps+rc*pc)
        return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    //freopen("output.txt","w",stdout);
    string s;
    cin>>s;
    for(auto i:s){
        if(i=='B')
            cb++;
        else if(i=='S')
            cs++;
        else
            cc++;
    }
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    ll l=0,r=1e13;
    while(l+1<r){
        m=(l+r)/2;
        if(check(m)){
            l=m;
        }else{
            r=m-1;
        }
       // cout<<l<<" "<<r<<endl;
    }
    if(check(r))
        l=r;
    cout<<l;

    return 0;
}
