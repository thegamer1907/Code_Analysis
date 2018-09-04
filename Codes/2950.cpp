#include<bits/stdc++.h>

using namespace std;
//using namespace __gnu_pbds;

typedef long long int	ll;
typedef long double	ld;
typedef pair<int,int>   ii;
typedef vector< ii >   vii;
typedef vector<int>     vi;
typedef vector< vi >   vvi;
//typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

#define mm 1000005
#define nn 5005
#define xx real()
#define yy imag()
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz(a) (int)(a.size())
#define all(a) a.begin(),a.end()
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define rep(i, a, b) for(int i = int(a); i <= int(b); ++i)
#define cases ll t;  cin>>t;   while(t--)
#define check(a,n) forn(iiii,int(n)) cout<<int(a[iiii])<<" "; cout<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll base=37,po[mm],hash1[mm];
int n;
string s;
vi maybe;

ll hashing(int l,int r)
{
    ll ans=(hash1[r]-(hash1[l]%mod*po[r-l])%mod+mod)%mod;
    return ans;
}

bool is(int mid)
{
    int siz=maybe[mid];
    ll hash2=hashing(0,siz);
    rep(i,1,n-1-siz) if(hashing(i,i+siz)==hash2) return true;
    return false;
}

int main()
{
    fast_io;
    cin>>s;
    n=sz(s);
    po[0]=1;
    forn(i,n)
    {
        //cout<<i<<" ";
        po[i+1]=(base%mod*po[i])%mod;
        hash1[i+1]=((hash1[i]%mod*base)%mod+s[i]-'0')%mod;
    }
   // cout<<maybe.size();
    forn(i,n-1)
    {
        //cout<<i<<" ";
        if(hashing(0,i+1)==hashing(n-i-1,n))
        {
           // cout<<i+1<<endl;
            maybe.pb(i+1);
        }
    }
    //check(maybe,sz(maybe));
    if(maybe.empty()) return cout<<"Just a legend",0;
    int l=0,r=sz(maybe)-1;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(is(mid)) l=mid+1;
        else r=mid;
    }
    if(!is(l)) l--;
    if(l>=0) forn(i,maybe[l]) cout<<s[i];
    else cout<<"Just a legend";
    return 0;
}
