#include <bits/stdc++.h>
#define int long long
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
bool is_shuntsu(string a,string b,string c){
    vector<string> v = {a,b,c};
    sort(td(v));
    if(v[0][1] == v[1][1] && v[1][1] == v[2][1]){
        return (v[0][0]+1==v[1][0] && v[1][0]+1==v[2][0]);
    }
    return false;
}
int32_t main(){
    fastio;
    int n,m,k;
    cin >> n >> m >> k;
    int removed = 0;
    int l = 0, r = k-1;
    int ans = 1;
    frr(i,m){
        int x;
        cin >> x;
        x--;
        x -= removed;
        if(x>=l && x<=r){
            continue;
        }
        else{
            //cout << x + removed  << endl;
            //cout << l << " " << r << " " << x << endl;
            x+=removed;
            removed=i;
            x-=removed;
            //cout<< removed << endl;
            l = (x / k) * k;
            r = l+k-1;
            //cout << l << " " << r << " " << x <<  endl << endl;
            if(i!=0) ans++;
        }
    }
    cout << ans << endl;
}