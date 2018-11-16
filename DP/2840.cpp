#include <bits/stdc++.h>

#define ld long double
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define PI ( acos(-1.0) )
#define IN freopen("input.txt","r",stdin)
#define OUT freopen("output.txt","w",stdout)
#define FOR(i,a,b) for(int i=a ; i<=b ; i++)
#define FORD(i,a,b) for(int i=a ; i>=b ; i--)
#define INF 1000000000
#define ll long long int
#define eps (1e-8)
#define sq(x) ( (x)*(x) )
#define all(x) x.begin(),x.end()
#define flog2(n) 64 - __builtin_clzll(n) - 1

using namespace std;

typedef pair < int, int > pii;
typedef pair < ll, ll > pll;

vector<int> v[2005];
int n,k;
const ll K=1e9+7;
ll d[2005][2005];
bool vs[2005][2005];
ll calc (ll n, ll k){
    if (k==1) return 1;
    if (vs[n][k]) return d[n][k];
    vs[n][k]=1;
    ll res=0;
    for (auto i:v[n]){
        res=(res+calc(i,k-1))%K;
    }
    //cout<<n<<" "<<k<<" "<<res<<endl;
    return d[n][k]=res;
}
int main()
{//IN;
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>n>>k;
    FOR (i,1,n){
        FOR (j,1,n/i){
            v[i*j].pb(i);
        }
    }
    //cout<<calc(n,k)<<endl;
    ll res=0;
    FOR (i,1,n){
        res=(res+calc(i,k))%K;
    }
    cout<<res<<endl;


         return 0;
}
