#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <cmath>
#include <locale>
using namespace std;
#define MS0(I) memset(I, 0, sizeof(I));
#define MS1(I) memset(I, -1, sizeof(I));
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, s, n) for(int i = (s); i < (n); ++i)
#define per1(i, a, b) for(int i = a; i >= b; --i)
#define mkp make_pair
#define pb push_back 
#define F first
#define S second
#define ALL(I) (I).begin(), (I).end()
typedef const void CV;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
const int INF = (int)1e9;
const int mod = (int)1e9+7;
const int MAX = (int)2e5+5;
PII store[MAX];
vector<LL>cost;
vector<LL>tim;
int main(void){
    LL n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
    LL x, s; scanf("%lld %lld", &x, &s);
    rep(i, m) scanf("%d", &store[i].S);
    rep(i, m) scanf("%d", &store[i].F);
    sort(store, store + m);
    int cp;
    cost.pb(0); tim.pb(x);
    rep(i, m){
        if(i == 0){
            cost.pb(store[i].F);
            tim.pb(store[i].S);
            cp = store[i].S;
        }
        else{
            if(store[i].S > cp) continue;
            cp = store[i].S;
            cost.pb(store[i].F);
            tim.pb(store[i].S);
        }
    }
    LL res = (LL)4e18; 
    store[0].F = store[0].S = 0;
    rep1(i, 1, k+1) scanf("%d", &store[i].F); 
    rep1(i, 1, k+1) scanf("%d", &store[i].S); 
    rep(i, k+1){
        LL t = 0;
        if(store[i].S > s) break;
        int it = upper_bound(ALL(cost), s - store[i].S) - cost.begin() - 1;
        t = (n - store[i].F)*tim[it];
        res = min(res, t);
    }
    printf("%lld", res);
    return 0;
}
