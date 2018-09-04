#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<ii> vii;
typedef map<string,ll> msi;
typedef set<ll> si;

#define INF 1e18
#define loop(i,a,b) for(ll i=(ll)a;i<=(ll)b;i++)
#define bloop(i,a,b) for(ll i=(ll)b;i>=(ll)a;i--)
#define forit(i, a) for ( __typeof( (a).begin() ) i = (a).begin(); i != (a).end(); i++ )
#define mem(a, v) memset(a, v, sizeof a)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define MAXN 1000009
#define MOD 1000000007
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define left(x) x<<1
#define right(x) (x<<1)|1
#define PI acos(-1.0)
#define EPS 1e-9

int T;
ll N, maxn;
static ll cnt[10000009], ans[10000009];
//Sieve - O(N*loglogN)
bitset<10000005> bs;

void sieve(){
    ll n=maxn+2;
    //cout<<n<<endl;
    bs.set();
    bs[0]=bs[1]=0;
    loop(i,2,n)
        if(bs[i]){
            for(ll j=i;j<=n;j+=i){
                bs[j]=0;
                ans[i]+=cnt[j];
            }
        }
}

void solve(){
    cin>>N;
    ll X;
    loop(i,1,N){
        cin>>X;
        maxn=MAX(maxn, X);
        cnt[X]++;
    }
	sieve();
    loop(i,1,maxn) {
        ans[i]=ans[i-1]+ans[i];
    }
    ll Q, x, y;
    cin>>Q;
    loop(i,1,Q){
        cin>>x>>y;
        cout<<ans[MIN(y,maxn)] - ans[MIN(x-1, maxn)]<<endl; 
    }
}

int main(){
    //clock_t start_s=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE 
  		freopen("/home/snehil/Desktop/input.txt","r",stdin);
    	freopen("/home/snehil/Desktop/output.txt","w",stdout);  
    #endif
    //cin>>T;
    T=1;
    while(T--){
    	solve();
    }
    //clock_t stop_s=clock();
    //cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    return 0;
}