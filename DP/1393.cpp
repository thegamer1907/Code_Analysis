/*
 * Deleted code is debugged code :)
 */
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pp pair<ll,ll>
#define mp make_pair
#define PI acos(-1.0)
#define all(v) v.begin(),v.end()
#define pb push_back
#define FOR(i,a,b) for(i=a;i<b;i++)
#define FREV(i,a,b) for(i=a;i>=b;i--)
#define FORI(a) for(auto it=a.begin();it!=a.end();it++)
#define READ(a,i,n) FOR(i,0,n) { sll(a[i]);}
#define inmap(m,i) m.find(i)!=m.end()
#define DEBUG(x) cerr<<"In file "<< __FILE__ <<" at line "<< __LINE__ <<" :: "<< #x <<" = "<<x<<endl
#define sll(n) scanf("%lld", &n)
#define sll2(n,m) scanf("%lld %lld", &n, &m)
#define si(n) scanf("%d", &n)
#define ss(n) scanf(" %s", n)
#define sc(n) scanf(" %c", &n)
#define pin(n) printf("%lld ",n)
#define INF 1000000000000007
#define MOD 1000000007

using namespace std;

template<typename T>
void prn(T first) {
    cout << first << "\n";
}

template<typename T, typename... Args>
void prn(T first, Args... args) {
    cout << first << " ";
    prn(args...);
}

/*******************************************RANDOM STUFF BEGINS HERE**************************************************/

vector<vector<bool>> adj(1001, vector<bool>(1001, false));
int main() {
    ll i,j,t,n;
    sll(n);
    vi a(n);
    ll ones = 0;
    FOR(i,0,n) {
        sll(j);
        if (j == 0) {
            a[i] = 1;
        }
        else {
            ones++;
            a[i] = -1;
        }
    }
    ll curr_mx = a[0], mx = a[0];
    FOR(i,1,n) {
        curr_mx = max(a[i], curr_mx+a[i]);
        mx = max(mx, curr_mx);
    }
    cout << ones + mx;
    return 0;
}