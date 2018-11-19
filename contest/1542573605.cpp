// /contest/868/problem/D
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int mod = 1000000007;

inline int add(int a, int b) { if ((a+=b) >= mod) return a-mod; else return a; }
inline int mul(int a, int b) { return LL(a) * b % mod; }
inline int sub(int a, int b) { if ((a-=b) < 0) return a+mod; else return a; }
int power(int a, int b) { int r = 1; while (b) { if (b&1) r = mul(r, a); a = mul(a, a); b >>= 1; } return r; }

const int mx = 10;

const int N = 205;
const int M = 15;
const int S = 1100;

bool mark[N][M][S];
int cnt[N][M];
char s[N][N];
int len[N];
vector<int> ds_le[N], ds_ri[N];
char xau[N*5];

void them(int i, int sz, int gt) {
    if (mark[i][sz][gt]) return;
    mark[i][sz][gt] = true;
    cnt[i][sz]++;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%s", s[i]);
        len[i] = strlen(s[i]);
        for (int j = 0; j < len[i]; j++) {
            int now = 0;
            for (int k = 1; k <= mx && j+k <= len[i]; k++) {
                now = (now << 1) | (s[i][j+k-1]=='1');
                them(i,k,now);
            }
        }
        ds_le[i].push_back(i);
        ds_ri[i].push_back(i);
    }

    int m;
    scanf("%d", &m);

    for (int i = n+1; i <= n+m; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        // copy from u and v
        for (int d = 1; d <= mx; d++) {
            int t = (1<<d);
            for (int j = 0; j < t; j++)
                if (mark[u][d][j] || mark[v][d][j]) {
                    mark[i][d][j] = true;
                    ++cnt[i][d];
                }
        }
        // middle
        int cur = 0, kq = 0;
        for (int j = ds_ri[u].size()-1; j >= 0; j--) {
            cur += len[ds_ri[u][j]];
            if (cur >= mx) {
                kq = j; break;
            }
        }
        int dai = 0;
        while (kq < ds_ri[u].size()) {
            int id = ds_ri[u][kq];
            ++kq;
            strcpy(xau+dai, s[id]);
            dai += len[id];
        }
        cur = 0; kq = ds_le[v].size();
        for (int j = 0; j < ds_le[v].size(); j++) {
            cur += len[ds_le[v][j]];
            if (cur >= mx) {
                kq = j+1; break;
            }
        }
        int kk = 0;
        while (kk < kq) {
            int id = ds_le[v][kk];
            ++kk;
            strcpy(xau+dai, s[id]);
            dai += len[id];
        }
        for (int j = 0; j < dai; j++) {
            int now = 0;
            for (int k = 1; k <= mx && j+k <= dai; k++) {
                now = (now << 1) | (xau[j+k-1] == '1');
                them(i,k,now);
            }
        }
        cur = 0;
        for (auto &a : ds_le[u]) {
            ds_le[i].push_back(a);
            cur += len[a];
            if (cur >= mx) break;
        }
        if (cur < mx) {
            for (auto &a : ds_le[v]) {
                ds_le[i].push_back(a);
                cur += len[a];
                if (cur >= mx) break;
            }
        }
        cur = 0;
        for (int j = ds_ri[v].size()-1; j >= 0; j--) {
            int a = ds_ri[v][j];
            ds_ri[i].push_back(a);
            cur += len[a];
            if (cur >= mx) break;
        }
        if (cur < mx) {
            for (int j = ds_ri[u].size()-1; j >= 0; j--) {
                int a = ds_ri[u][j];
                ds_ri[i].push_back(a);
                cur += len[a];
                if (cur >= mx) break;
            }
        }
        reverse(ds_ri[i].begin(), ds_ri[i].end());
        int ans = 0;
        for (int j = mx; j > 0; j--)
            if (cnt[i][j] == (1<<j)) {
                ans = j; break;
            }
        printf("%d\n", ans);
/*
        if (i == n+21) {
            for (auto &a : ds_le[i]) cout << a << ' '; cout << endl;
            for (auto &a : ds_ri[i]) cout << a << ' '; cout << endl;
            for (int j = 0; j < (1<<4); j++) {
                cout << j << ": " << mark[u][4][j] << ", " << mark[v][4][j] << endl;
            }
            cout << cnt[u][4] << " " << cnt[v][4] << endl;
            cout << xau << endl;
        }
*/
    }
}
