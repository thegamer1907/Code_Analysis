#include<bits/stdc++.h>
#define ll long long int
#define pi 3.1415926535897932385
#define mod 1000000007
#define db double
#define pp(x) pair<x,x>
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tc ll tc; cin>>tc; for(ll number = 1 ; number <= tc ; number ++ )
#define vv(x) vector<x >
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof  pop_front
#define umap unordered_map
#define pq priority_queue
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define dbgArr(a,n) cout<<"Array "<<#a<<endl; for(ll i=0 ; i<n ; i++) cout<<a[i]<<" "; cout<<endl;
#define maxE(a,n) *max_element(a,a+n);
#define minE(a,n) *min_element(a,a+n);
#define forn(i,n) for(ll i=0 ; i<n ; i++)
#define forn1(i,n) for(ll i=1 ; i<=n ; i++)
#define arr(a,n) for(ll i=0;i<n;i++){ cin>>a[i]; }
#define arr1(a,n) for(ll i=1;i<=n;i++){ cin>>a[i]; }
#define file freopen("inp.in","r",stdin); freopen("outp.out","w",stdout)
#define print cout<<"Case #"<<number<<": "
#define all(x) x.begin(), x.end()
ll power(ll x, ll b) {ll p = 1;while (b > 0) {if(b&1) {p = p * x; p %= mod;} b >>= 1; x *= x; x %= mod;} return p % mod;}
using namespace std;

int main()
{
    FIO;
    ll n,d; cin>>n>>d;
    vv(pp(ll)) a(n);
    forn(i,n) cin>>a[i].ff>>a[i].ss;
    sort(all(a));
    vv(ll) cs(n+1);
    forn1(i,n) cs[i] = cs[i-1] + a[i-1].ss;
    ll ans = 0;
    forn(i,n) {
        ll s=i,e=n-1,ind=i;
        while(s <= e) {
            ll mid = (s+e)>>1;
            if(a[mid].ff-a[i].ff < d) ind = mid, s = mid+1;
            else e = mid-1;
        }
        ans = max(ans, cs[ind+1]-cs[i]);
    }
    cout<<ans;
    return 0;
}


