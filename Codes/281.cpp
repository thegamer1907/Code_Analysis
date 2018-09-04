//Copyright © 2017 Snehil Santhalia
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

#define INF 1e18
#define loop(i,a,b) for(ll i=(ll)a;i<=(ll)b;i++)
#define forit(i, a) for ( __typeof( (a).begin() ) i = (a).begin(); i != (a).end(); i++ )
#define mem(a, v) memset(a, v, sizeof a)
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define left(x) x<<1
#define right(x) (x<<1)|1
#define PI acos(-1.0)
#define EPS 1e-9

int T = 1;
ll x, N, Q;

void solve(){
	cin>>N;
    vi a;
    loop(i,0,N-1) {
        cin>>x;
        a.pb(x);
        if(i) a[i] += a[i-1];
    }
    cin>>Q;
    vi::iterator it;
    loop(i,1,Q) {
        cin>>x;
        it = lower_bound(a.begin(), a.end(), x);
        cout << it - a.begin() + 1 << endl;
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
    while(T--){
    	solve();
    }
    //clock_t stop_s=clock();
    //cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    return 0;
}