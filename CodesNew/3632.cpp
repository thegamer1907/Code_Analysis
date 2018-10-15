#include<bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define allR(v) v.rbegin(),v.rend()
#define IO cin.tie(0);std::ios::sync_with_stdio(false)
#define PB push_back
#define PF push_front
#define set(a,b) memset(a,b,sizeof(a))
#define rep(i,b,n) for(int i=b;i<n;i++)
#define PQ priority_queue
#define scani(x) scanf("%d", &x)
#define scanc(x) scanf("%c", &x)
#define scand(x) scanf("%lf", &x)
#define scanll(x) scanf("%lld", &x)
#define print printf
#define FI freopen("", "r", stdin)
#define FO freopen("", "w", stdout)
typedef unsigned long long ull;
typedef long long ll;typedef pair<int, int>ii;typedef vector<ii>vii;typedef vector<int>vi;
#define INF 1000000000
#define EPS 1e-9
const double PI = std::atan(1.0)*4;
int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};
const ll mod = 1000000000+7;

double dist(double x1, double y1, double x2, double y2){
    double d1 = x1 - x2;
    d1 *= d1;
    double d2 = y1 - y2;
    d2 *= d2;
    return sqrt(d1 + d2);
}

int main(){
    IO;
    int n,m; cin>>n>>m;
    int a[n]; rep(i, 0, n)cin>>a[i];
    int mn = a[0], mx = a[0];
    
    rep(i, 0, n){
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    
    int ans1, ans2;
    
    ans2 = mx + m;
    
    //make them equal
    ans1 = mx;
    bool finished = 0;
    rep(i, 0, n){
        if(mx - a[i] <= m){
            m -= (mx - a[i]);
            a[i] = mx;
        }
        else{
            finished = 1;
        }
    }
    
    if(finished){
        cout << ans1 << ' ' << ans2;
    }
    else{
        int temp = m / n + (m % n? 1 : 0);
        ans1 = temp + mx;
        
        cout << ans1 << ' ' << ans2;
    }
}