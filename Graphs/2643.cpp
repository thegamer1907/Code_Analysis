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
const int MAX = (int)1e4+5;
int store[MAX];
int group[MAX];
int siz[MAX];
int find_set(int v){
    return group[v] == v ? v : group[v] = find_set(group[v]);
}
void Union(int u, int v){
    u = find_set(u);
    v = find_set(v);

    if(siz[u] > siz[v]) swap(u, v);
    group[u] = v;
    siz[v] += siz[u];
    return ; 
}
bitset<MAX>check;
int main(void){
    int n; scanf("%d", &n);
    rep1(i, 1, n+1) scanf("%d", store + i);
    rep1(i, 1, n+1){ group[i] = i; siz[i] = 1; }
    rep1(i, 1, n+1){
        if(find_set(i) == find_set(store[i])) continue;
        Union(i, store[i]);
    }
    int res = 0;
    rep1(i, 1, n+1) if(!check[ find_set(i) ]){
        check[ find_set(i) ] = 1;
        res++;
    }
    printf("%d", res);
    return 0;
}
