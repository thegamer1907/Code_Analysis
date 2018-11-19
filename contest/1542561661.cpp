#include <bits/stdc++.h>

#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define ep emplace
#define MOD 1000000007LL
#define all(x) (x).begin(), (x).end()
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define for1(i, n) for(int i = 1; i <= int(n); i++)
#define ford(i, n) for(int i = int(n) - 1; i >= 0; i--)
#define fore(i, a, b) for(int i = int(a); i <= int(b); i++)
#define debug(x) cerr << #x << " = " << x << endl

using namespace std;

typedef long long ll;

const ll oo = 1e16;
const int N = 100005;

ll dp[25][N];

int n, k;
int v[N];
int cnt[N], vis[N], pass;

int gl, gr;
ll c;

void add(int x){
    c += cnt[ v[x] ];
    cnt[ v[x] ]++;
}

void rem(int x){
    cnt[ v[x] ]--;
    c -= cnt[ v[x] ];
}

void f(int k, int i, int j, int L, int R){ // ans for (i, j)
    if(i > j) return;

    int mid = (i+j)/2;

    int id = 0;
    dp[k][mid] = oo;
    pass++;
    
    fore(w, L, R){
        while(gl > mid) add(--gl);
        while(gr < w) add(++gr);
        while(gl < mid) rem(gl++);
        while(gr > w) rem(gr--);
        //if(k == 0 && mid == 5) printf("%d: %lld %lld\n", w, dp[k+1][w+1], c);
        if(dp[k][mid] > dp[k+1][w+1] + c){
            dp[k][mid] = dp[k+1][w+1] + c;
            id = w;
        }
    }

    //printf("%d %d %d %lld (%d, %d)\n", k, mid, id, dp[k][mid], L, R);
    
    if(i != j){
        f(k, i, mid-1, L, id);
        f(k, mid+1, j, id, R);
    }
}

int main(){
    
    scanf("%d %d", &n, &k);

    forn(i, n) scanf("%d", v+i);

    dp[k][n] = 0;

    forn(i, n) dp[k][i] = oo;

    gl = 0, gr = -1;
    ford(i, k){
        f(i, 0, n-1, 0, n-1);
        //forn(j, n) printf("%lld ", dp[i][j]); printf("\n");
    }

    printf("%lld\n", dp[0][0]);
    


    return 0;
}
