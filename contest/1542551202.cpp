#include <cstdio>
#include <cstring>
#include <iostream>
#include <unordered_set>
#include <cassert>
using namespace std;

const int maxn = 2*105;
int n, m;
string s[maxn];
int a[maxn], b[maxn];
unordered_set<string> g[maxn][10];
int f[maxn] = {0};

void cal(int i) {
    const string &q = s[i];
    for(int j = 0; j < q.length(); j++)
        for(int k = 1; k <= 9 && j - k + 1 >= 0; k++) {
            g[i][k].insert(q.substr(j-k+1, k));    
            assert(q.substr(j-k+1,k).size() == k);
        }
    f[i] = 0;
    for(int k = 1; k <= 9; k++)
        if(g[i][k].size() == (1<<k)) {
            f[i] = k;
        }
}

void print(int i, int len) {
    printf("set[i=%d,len=%d]=\n", i, len);
    for(auto &ss: g[i][len]) {
        printf("\t%s\n", ss.c_str());
    }
}

int update(int i) {
    string &q = s[i], &x = s[a[i]], &y = s[b[i]];
    string xx = x.substr(max((int)x.length() - 8, 0), 8), yy = y.substr(0, 8);
    q = xx + yy;
    f[i] = max(f[a[i]], f[b[i]]);
    int it = 0;
    if(i == 47+n) {
        //printf("x=%s, xx=%s,\ny=%s, yy=%s\n", x.c_str(), y.c_str(), xx.c_str(), yy.c_str());
    }
    for(int j = 1; j <= 9; j++) {
        g[i][j].insert(g[a[i]][j].begin(), g[a[i]][j].end()); g[i][j].insert(g[b[i]][j].begin(), g[b[i]][j].end());
        if(j <= f[i]) continue;
        for(int k = max(0, (int)xx.length()-(j-1)); k < xx.length() && k + j <= q.length(); k++) {
            it++;
            string t = q.substr(k, j);
            assert(t.size() == j);
            g[i][j].insert(t);
        }
        if(g[i][j].size() == (1<<j)) {
            f[i] = j;
        }
    }
    q = x + y;
    int l1 = 0, r1 = 8, l2 = max(0, (int)q.length()-8), r2 = q.length();
    if(r1 < r2)
        q = q.substr(l1,r1) + q.substr(l2, r2-l2);
 
    return f[i];
}

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        cin >> s[i];
        cal(i);
    }
    cin >> m;
    for(int i = 1; i <= m; i++) {
        cin >> a[i+n] >> b[i+n];
        int ans = update(i+n);
        printf("%d\n", ans);
        if(0 && i==47) {
            print(i+n, 5);
            print(a[i+n], 5);
            print(b[i+n], 5);   
        }
    }
    // print(6,2);
    // print(7,2);
    return 0;
}