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
vector<int>store[MAX];
int check[MAX];
int n, m;
void build(){
    rep(j, m){
        rep(i, n){
            int s = n-1;
            rep1(k, i+1, n){
                if(store[k][j] < store[k-1][j]){
                    s = k-1; break;
                }
            }
            rep1(k, i, s+1) check[k] = max(check[k], s);
            i = s;
        }
    }
    return ;
}
int main(void){
    scanf("%d %d", &n, &m);
    rep(i, n) rep(j, m){
        int v; scanf("%d", &v);
        store[i].pb(v);
    }
    build();
    int q; scanf("%d", &q);
    rep(i, q){
        int l, r; scanf("%d %d", &l, &r);
        l--; r--;
        if(r > check[l]) puts("No");
        else puts("Yes");
    }
    return 0;
}
