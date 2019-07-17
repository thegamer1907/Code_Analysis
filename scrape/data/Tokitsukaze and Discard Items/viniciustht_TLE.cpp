#include <bits/stdc++.h>
//#define int long long
#define double long double
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define ms(v,x) memset(v,x,sizeof(v))
#define pii pair<int,int>
#define ff first
#define ss second
#define frr(i,n) for(int i=0;i<n;i++)
#define td(v) v.begin(),v.end()
#define inf 1000000000 // 1e9
#define M   1000000007 // 1e9 + 7
using namespace std;
inline int mod(int n, int m){ int ret = n%m; if(ret < 0) ret += m; return ret; }
int gcd(int a, int b){return (b == 0 ? a : gcd(b, a%b));}
int lcm(int a,int b){return (a*b)/gcd(a,b);}
int exp(int a,int b,int m){
    if(b==0) return 1;
    if(b==1) return mod(a,m);
    int k = mod(exp(a,b/2,m),m);
    if(b&1){
        return mod(a*mod(k*k,m),m);
    }
    else return mod(k*k,m);
}
int32_t main(){
    fastio;
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v(m);
    frr(i,m){
        cin >> v[i];
        v[i]--;
    }
    int offset = 0;
    int ans = 0;
    int last_l = 0;
    int total = 0;
    for(int i=0;i<m;){
        int l = ((v[i] - offset)/k) * k;
        if(l!=last_l){
            last_l = l;
            offset = 0;
            l = (v[i]/k) * k;
        }
        int r = l+k; // [l,r)
        int p = lower_bound(td(v),r) - v.begin();
        
        int qnt = p - total;
        total += qnt;
        offset += qnt;
        //cout << i << " " << p << " " << l << " " << r << endl;
        ans++;
        if(i==p) i++;
        else i = p;
    }
    cout << ans << endl;
}