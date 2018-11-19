#include<bits/stdc++.h>
#define int long long
using namespace std;


const int N = 1e5 + 5, inf = 5e18;


int n, m, a[N], dp[21][N], l = 1, r, it, curval, cnt[N];

int get(int nl, int nr){
    while(l < nl){
        curval -= --cnt[a[l++]];
    }
    while(l > nl){
        curval += cnt[a[--l]]++;
    }
    while(r < nr){
        curval += cnt[a[++r]]++;
    }
    while(r > nr){
        curval -= --cnt[a[r--]];
    }
    return curval;
}

void rec(int l, int r, int tl, int tr){
    if(l > r){
        return;
    }
    int mid = (r + l) >> 1, pos;
    dp[it][mid] = inf;
    for(int i = tl; i <= min(mid, tr); i++){
        long long cur = dp[it - 1][i - 1] + get(i, mid);
        if(cur < dp[it][mid]){
            dp[it][mid] = cur;
            pos = i;
        }
    }
    rec(l, mid - 1, tl, pos);
    rec(mid + 1, r, pos, tr);
}


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        dp[0][i] = inf;
    }
    for(int i = 1; i <= m; i++){
        it = i;
        rec(1, n, 1, n);
    }
    cout << dp[m][n];
}
