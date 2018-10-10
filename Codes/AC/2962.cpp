#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

int h[2][1000010];
int p[2][1000010];
int a[] = {10009, 10007};
int b[] = {1000000007, 1000000009};
string s;
int n;

inline int mod(int x, int md){
    return (x % md + md) % md;
}

int gethash(int l, int r, int j){
    int result = mod(h[j][r] - h[j][l - 1], b[j]);
    result = mod(result * p[j][n - r], b[j]);
    return result;
}

bool solve(int v){
    int st[2] = {gethash(1, v, 0), gethash(1, v, 1)};
    int ed[2] = {gethash(n - v, n - 1, 0), gethash(n - v, n - 1, 1)};
    if(st[0] != ed[0] || st[1] != ed[1]) return false;
    for(int i = 2; i < n - 1; i++){
        if(i + v >= n) break;
        int t[2] = {gethash(i, i + v - 1, 0), gethash(i, i + v - 1, 1)};
        if(t[0] == st[0] && t[1] == st[1]){
            return true;
        }
    }
    return false;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin >> s;
    s = "$" + s;
    n = s.length();
    int cur[] = {1, 1};
    for(int i = 1; i < n; i++){
        for(int j = 0; j < 2; j++){
            p[j][i] = cur[j];
            cur[j] = mod(cur[j] * a[j], b[j]);
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < 2; j++){
            h[j][i] = mod(h[j][i - 1] + mod(s[i] * p[j][i], b[j]), b[j]);
        }
    }
    int lo = 0;
    for(int i = n - 1; i >= 1; i--){
        if(solve(i)){
            lo = i;
            break;
        }
    }
    if(lo == 0) cout << "Just a legend" << endl;
    else for(int i = 1; i <= lo; i++) cout << s[i]; cout << endl;
}
