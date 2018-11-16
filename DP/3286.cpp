#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define sc(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define pr(n) printf("%d",n)
#define prl(n) printf("%lld",n)
#define nl printf("\n")
#define fr(i,n) for(i=0;i<n;i++)
#define rep(i,st,en) for(i=st;i<=en;i++)
#define repv(i,en,st) for(i=en;i>=st;i--)
#define fout cout<<fixed<<setprecision(7)
#define bi(n) __builtin_popcount(n)
#define bil(n) __builtin_popcountll(n)


typedef long long ll;
typedef pair<int,int> pii;
const int N = 100010;
ll mod = 1e9+7;
ll fmod(ll b,ll exp){
    ll res =1;
    while(exp){if(exp&1ll)res=(res*b)%mod;
    b =(b*b)%mod;exp/=2ll;
    }
    return res;
}




int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1,n,i,j;
    ll l,r;
    cin>>l>>r;
    int first=0,ind1=0,ind2=0;
   
    ll ans = 0;
    for(int i=62;i>=0;i--)
    {
        ll fl1 = (((1ll<<i)&l)>0);
        ll fl2 = (((1ll<<i)&r)>0);
        if(first)ans+= (1ll<<i);
        if(fl1<fl2 && !first){  
            first=1;
            ans += (1ll<<i);
        }
    }
    cout<<ans<<"\n";
    
    
    return 0;
}
