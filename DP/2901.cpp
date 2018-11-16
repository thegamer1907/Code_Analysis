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
const int MAX = (int)1e3+5;
int store[MAX];
int store2[MAX];
int main(void){
    int n, m; scanf("%d %d", &n, &m);
    rep(i, n){
        scanf("%d", store + i);
    }
    rep(i, m) scanf("%d", store2 + i);
    if(m == 1){
        rep(i, n) if(store[i] == 0) store[i] = store2[0];
        bool flag =  1;
        rep1(i, 1, n) if(store[i] <= store[i-1]){
            flag = 0; break;
        }
        if(flag) puts("No");
        else puts("Yes");
    }
    else puts("Yes");
    return 0;
}
