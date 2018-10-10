//Template

//By Anik :)

#include <bits/stdc++.h>
using namespace std;

#define   f(i,n) 					for(int i=0;i<(n);i++)
#define   ff(i,n) 					for(int i=1;i<=(n);i++)
#define   m0(X) 					memset((X), 0, sizeof((X)))
#define   m1(X) 					memset((X), -1, sizeof((X)))
#define   pb(x) 					push_back(x)
#define   F     					first
#define   S  						second
#define   mp 						make_pair
//#define   inf                       1LL<<60LL

typedef long long ll;

ll rd(ll &x){return scanf("%lld",&x);}
ll rd(ll &x,ll &y){return scanf("%lld %lld",&x,&y);}
ll rd(ll &x,ll &y,ll &z){return scanf("%lld %lld %lld",&x,&y,&z);}
ll rd(ll &x,ll &y,ll &z,ll &s){return scanf("%lld %lld %lld %lld",&x,&y,&z,&s);}

#define debug(args...) { cerr<<__LINE__<<":: ";dbg,args; cerr<<endl;}
struct debugger { template<class T> debugger& operator,(const T& v) { cerr<<v<<" "; return *this; } } dbg ;
template <typename T> void debugv (vector <T> vec) {cerr<<"printing vector:: ";f(i,vec.size()){cout<<vec[i]<<" ";}cerr<<endl;}
template <typename T> void debugs (set <T> s){cerr<<"printing set:: ";for(auto it=s.begin();it!=s.end();it++){cout<<(*it)<<" ";}cerr<<endl;}

ll n, m, k;

bool check (ll x)
{
    ll sum=0;
    for(ll i=1; i<=n; i++)
    {
        sum += min ((x-1)/i,m);
    }
    return sum<k;
}

int main()
{
    rd(n,m,k);

    ll l=0, r=n*m, ans;

    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(check(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }

    cout<<(ll)ans;


    return 0;
}
















