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
const int INF = (int)1e9;
const int mod = (int)1e9+7;
const int MAX = (int)1e5+5;
LL store[MAX];
LL sub[MAX];
LL val(LL n){
    return n*n*(n+1)/2;
}
LL sol(int e, int n){
    rep1(i, 1, n+1){
        sub[i] = store[i] + (LL)i*e;
    }
    sort(sub+1, sub+1+n);
    LL ret = 0;
    rep1(i, 1, e+1) ret += sub[i];
    return ret;
}
int main(void){
    int n; LL s; scanf("%d %lld", &n, &s);
    rep1(i, 1, n+1) scanf("%lld", store + i);
    int l = 1, r = n;
    while(l < r){
        int mid = (l+r) >> 1;
        LL v = sol(mid, n);
        if(v > s) r = mid-1;
        else if(v < s) l = mid+1;
        if(v == s){
            printf("%d %lld", mid, s);
            return 0;
        }
    }
    if(l == 1){
        if(sol(1, n)  <= s) printf("1 %lld", sol(1, n));
        else printf("0 0");
    }
    else if(l == n && sol(n, n) <= s) printf("%d %lld",n,  sol(n, n)); 
    else if(sol(l, n) > s) printf("%d %lld", l-1, sol(l-1, n));
    else printf("%d %lld", l, sol(l, n));
    return 0;
}
