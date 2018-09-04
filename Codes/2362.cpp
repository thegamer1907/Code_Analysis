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
const int MAX = (int)1e7+5;
int cnt[MAX];
vector<int>dp;
vector<LL>cmp;
bitset<MAX>check;
void build(){
    rep1(i, 2, MAX){
        if(!check[i]){
            dp.pb(i);
            cmp.pb(0);
            for(int j = i; j < MAX; j+= i){
                check[j] = 1;
                cmp.back() += cnt[j];
            }
        }
    }
    return ;
}
int main(void){
    int n; scanf("%d", &n);
    rep1(i, 1, n+1){
        int v; scanf("%d", &v);
        cnt[ v ]++;
    }
    build();
    rep1(i, 1, (int)cmp.size() ) cmp[i] += cmp[i-1];
    int q; scanf("%d", &q);
    rep(i, q){
        int l, r; scanf("%d %d", &l, &r);
        auto it = lower_bound(ALL(dp), l); if(it == dp.end()){
            puts("0"); continue;
        }
        int ll = it - dp.begin();
        auto it2 = lower_bound(ALL(dp), r);
        if(it2 == dp.end() || *it2 > r) it2--;
        int rr = it2 - dp.begin();
        if(ll != 0) printf("%lld\n", max((LL)0, cmp[rr] - cmp[ll-1]));
        else printf("%lld\n", max((LL)0, cmp[rr]));
    } 
    
    return 0;
}
