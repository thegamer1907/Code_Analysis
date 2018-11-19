#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
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
void build(){
    return ;
}
int n, k;
vector<int>store;
void Init(){
    scanf("%d %d", &n, &k);
    rep(i, n){
        int v = 0;
        rep(j, k){
            v <<= 1;
            int p; scanf("%d", &p);
            v |= p;
        }
        store.pb(v);
    }
    sort(ALL(store));
    auto it = unique(ALL(store));
    store.resize(distance(store.begin(), it));
    return ;
}
void sol(){
    if(store[0] == 0) puts("YES");
    else{
        rep(i, (int)store.size()) rep1(j, 1, store.size()){
            if(!(store[i] & store[j]) ){
                puts("YES"); return ;
            }
        } 
        puts("NO");
    }
    return ;
}
int main(void){
        Init();
        build();
        sol();
    return 0;
}
