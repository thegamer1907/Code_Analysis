/*
 * Deleted code is debugged code :)
 */
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define vi vector<ll>
#define pp pair<ll,ll>
#define mp make_pair
#define PI acos(-1.0)
#define all(v) v.begin(),v.end()
#define pb push_back
#define FOR(i,a,b) for(i=a;i<b;i++)
#define FREV(i,a,b) for(i=a;i>=b;i--)
#define FORI(a) for(auto it=a.begin();it!=a.end();it++)
#define READ(a,i,n) FOR(i,0,n) { sll(a[i]);}
#define DEBUG(x) cerr<<"In file "<< __FILE__ <<" at line "<< __LINE__ <<" :: "<< #x <<" = "<<x<<endl
#define sll(n) scanf("%lld", &n)
#define sll2(n,m) scanf("%lld %lld", &n, &m)
#define si(n) scanf("%d", &n)
#define ss(n) scanf("%s", n)
#define sc(n) scanf(" %c", &n)
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

int main() {
    ll i,j,t,n,m;
    sll2(n,m);
    vi a(n);
    READ(a,i,n);
    vi res(n);
    res[n-1] = 1;
    map<ll,bool> hmap;
    hmap[a[n-1]] = true;
    FREV(i,n-2,0) {
        if (hmap.find(a[i]) != hmap.end()) {
            res[i] = res[i+1];
        }
        else {
            res[i] = res[i+1] + 1;
        }
        hmap[a[i]] = true;
    }
    FOR(i,0,m) {
        sll(j);
        printf("%lld\n", res[j-1]);
    }
    return 0;
}