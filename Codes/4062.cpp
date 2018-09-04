#include "bits/stdc++.h"
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
const long long lim = (long long) 1e14 + 1;
int n , m;
int q;
int l , r;
int mx [N];
int segtree [N << 2];
int lazy [N << 2];
vector < int > col [N];


void push(int node , int u , int v) {
    if(lazy[node]) {
        segtree[node] = max(segtree[node] , lazy[node]);
        if(u != v) {
            lazy[node * 2] = max(lazy[node * 2] , lazy[node]);
            lazy[1 + (node * 2)] = max(lazy[1 + (node * 2)] , lazy[node]);
        }
    }
}

void upd(int node , int u , int v , int l , int r , int val) {
    push(node , u , v);
    if(u > r | v < l | u > v) return;
    if(u >= l && v <= r) {
        segtree[node] = max(segtree[node] , val);
        if(u != v) {
            lazy[node * 2] = max(lazy[node * 2] , val);
            lazy[1 + (node * 2)] = max(lazy[1 + (node * 2)] , val);
        }
        return;
    }
    int m = (u + v) >> 1;
    upd(node * 2 , u , m , l , r , val);
    upd(1 + (node * 2) , m + 1 , v , l , r , val);
    segtree[node] = max(segtree[node * 2] , segtree[1 + (node * 2)]);
}

int query(int node , int u , int v , int l , int r) {
    push(node , u , v);
    if(u > v | u > r | v < l) return 0;
    if(u >= l && v <= r) return segtree[node];
    int m = (u + v) >> 1;
    return max(query(node * 2 , u , m , l , r) , query(1 + (node * 2) , m + 1 , v , l , r) );
}


int main() {
    scanf("%d %d" , &n , &m);
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            int x;
            scanf("%d" , &x);
            col[j].push_back(x);
        }
    }
    for(int i = 1; i <= m; ++i) {
        int l = 0 , r = 0 , prev = col[i][0];
        for(int j = 1; j < n; ++j) {
            if(col[i][j] >= prev) {
                prev = col[i][j];
                r = j;
            } else {
                upd(1 , 0 , n - 1 , l , r , r);
                l = r = j;
                prev = col[i][j];
            }
        }
        upd(1 , 0 , n - 1 , l , r , r);
    }
    scanf("%d" , &q);
    while(q--) {
        scanf("%d %d" , &l , &r);
        --l , --r;
        bool ans = query(1 , 0 , n - 1 , l , l) >= r;
        printf(ans ? "Yes\n" : "No\n");
    }
    return 0;
}
