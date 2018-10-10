/*
 * Author:  JiangYu
 * Created Time:  2018/4/19 15:36:44
 * File Name: A.cpp
 */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <time.h>
using namespace std;
#define ll long long
#define MP make_pair
#define PB push_back
#define X first
#define Y second
#define FI first
#define SE second
#define inf 0x3f3f3f3f
#define FOR(i,a,b) for(int i = a; i <= b; ++i)
#define FORD(i,a,b) for(int i = b; i >= a; --i)
#define ALL(x) x.begin(),x.end()
#define REP(i,a) for(int i = 0; i < a; ++i)
#define DEP(i,a) for(int i = a-1; i >= 0; --i)
#define CLR(a) memset(a, 0, sizeof a)
const int N = 2e5 + 1024;
ll a[N], b[N], c[N], d[N];
int main() {
    ll n, m, k;
    scanf("%I64d%I64d%I64d", &n, &m, &k);
    ll t, s;
    scanf("%I64d%I64d", &t, &s);
    for(int i = 1; i <= m; ++i){
        scanf("%I64d", &a[i]);
    }
    for(int i = 1; i <= m; ++i){
        scanf("%I64d", &b[i]);
    }
    for(int j = 1; j <= k; ++j) {
        scanf("%I64d", &c[j]);
    }
    for(int j = 1; j <= k; ++j) {
        scanf("%I64d", &d[j]);
    }
    
    ll ans = 9000000000000000000;
    a[0] = t;
    
    for(int i = 0; i <= m; ++i) {    
        ll hehe = s - b[i];
        if(hehe >= 0) {
            int l = 0, r = k, pos = k;
            while( l <= r) {
                int mid = l + r >>1;
                if(d[mid] > hehe) r = mid-1;
                else pos = mid, l = mid+1;
            }
            ans = min(ans, 1ll*a[i]*(n-c[pos]));
        }
    }
    cout << ans;
    return 0;
}

