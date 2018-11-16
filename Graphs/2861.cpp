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
const int MAX = (int)1e5+5;
int store[MAX];
vector<pair<int, LL> >edge[MAX];
int res;
void dfs2(int v){
    res++;
    for(auto x : edge[v]){
        dfs2(x.F);
    }
    return ;
}
void dfs(int v, LL sum){
    if(sum > store[v]){
        dfs2(v);
        return ;
    }
    for( auto x : edge[v]){
        int u = x.F;
        LL d = x.S;
        dfs(u, max(d, sum + d));
    }

    return ;
}
int main(void){
    int n; scanf("%d", &n);
    rep1(i, 1, n+1) scanf("%d", store + i);
    rep1(i, 2, n+1){
        int u; LL d; scanf("%d %lld", &u, &d);
        edge[u].pb(mkp(i, d));
    }
    dfs(1, 0);
    printf("%d", res);
    return 0;
}
