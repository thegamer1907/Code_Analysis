#include<bits/stdc++.h>
using namespace std;
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define A first
#define B second
#define make_pair MP
#define MOD 1000000007
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
const int INF = 1<<29;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;
inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }
template<class T> void chmax(T & a, const T & b) { a = max(a, b); }
template<class T> void chmin(T & a, const T & b) { a = min(a, b); }

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int cnt;
bool visited[2005];
vector<int> a[2005];

int dfs(int v,int ct){
    visited[v]=true;
    ct=ct+1;
    //DEBUG(v);
    for(int i=0;i<a[v].size();i++){
        if(!visited[a[v][i]]) {
            //DEBUG(ct);
            cnt=max(cnt,dfs(a[v][i],ct));
            //DEBUG(v);
            //DEBUG(a[v][i]);
            //DEBUG(cnt);
        }
    }
    return ct;
}

int main(){
    int n;
    cnt=0;
    scanf("%d",&n);
    memset(visited,false,sizeof visited);
    vii c(n);
    REP(i,n){
        int x;
        scanf("%d",&x);
        c[i]={x,i+1};
        if(x==-1) continue;
        a[x].push_back(i+1);
    }
    sort(c.begin(),c.end());
    FOR(i,0,n-1){
        int x=0;
        //DEBUG(i);
        if(!visited[c[i].B]) x=dfs(c[i].B,0);
        //DEBUG(cnt);
        cnt=max(x,cnt);
    }
    printf("%d",cnt);


}

