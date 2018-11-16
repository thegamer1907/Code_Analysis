#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
const int inf_int=1e8;
const ll inf_ll=1e16;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef long double dbl;
#define pb push_back
const double pi=3.1415926535898;
#define dout if(debug) cout
#define fi first
#define se second
#define sp setprecision
#define sz(a) (int(a.size()))
#define all(a) a.begin(),a.end()
bool debug = 0;
const int MX = 6e6+1;
const int MAXN = 3e5+100;
const int LOG = 20;
const ll mod =1e9+7;

int parent[MAXN];
void init(int n){
    for(int i=1;i<=n;++i){
        parent[i] = i;
    }
}
int find_parent(int v){
    if(v==parent[v])
        return v;
    return parent[v] = find_parent(parent[v]);
}
void union_set(int a,int b){
    a = find_parent(a);
    b = find_parent(b);
    if(a!=b){
        if(rand()&1)
            swap(a,b);
        parent[b] = a;
    }
}
void solve(){
    int n;
    cin >> n;
    init(n);
    for(int i=1;i<=n;++i){
        int x;
        cin >> x;
        union_set(i,x);
    }
    int ans = 0;
    for(int i=1;i<=n;++i){
        if(find_parent(i)==i)
            ans++;
    }
    cout << ans;



}

signed main()
{
        #ifdef zxc
            debug = 1;
           freopen("input.txt","r",stdin);
         //   freopen("output.txt","w",stdout);
        #endif //zxc
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        cout.setf(ios::fixed);
        cout.precision(20);
        int t = 1;
        while(t--)
            solve();
}
