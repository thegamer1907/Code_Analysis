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

//Using binary search to find the possible answer.

int T;
string s;
ll ps, pc, pb;
ll ns, nc, nb;
ll r;
ll rs, rc, rb, ans;
bool flag;

bool seeifpossible(ll x){
    ll mr = 0;
    mr += MAX(x*rs - ns, 0) * ps; 
    mr += MAX(x*rb - nb, 0) * pb; 
    mr += MAX(x*rc - nc, 0) * pc;
    return mr<=r; 
}

void solve(){
	cin>>s;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    loop(i,0,s.size()-1)
        if(s[i]=='B') rb++;
        else if(s[i]=='C') rc++;
        else rs++;
    ll start=1, ending=1e12+100;
    while(start<=ending){
        ll mid = (start+ending)/2;
        flag=seeifpossible(mid);
    
        if(!flag) ending = mid-1;
        else if(flag) {
            ans=MAX(ans, mid);
            start = mid+1;
        } 
    } 
    cout<<ans<<endl;
}

int main(){
    //clock_t start_s=clock();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
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