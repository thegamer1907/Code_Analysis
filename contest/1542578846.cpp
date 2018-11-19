// /contest/868/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int mod = 1000000007;

inline int add(int a, int b) { if ((a+=b) >= mod) return a-mod; else return a; }
inline int mul(int a, int b) { return LL(a) * b % mod; }
inline int sub(int a, int b) { if ((a-=b) < 0) return a+mod; else return a; }
int power(int a, int b) { int r = 1; while (b) { if (b&1) r = mul(r, a); a = mul(a, a); b >>= 1; } return r; }

int k;
int cnt[20];

bool solve() {
    int sz = (1<<k);
    
    if (cnt[0]) return true;

    for (int i = 0; i < sz; i++)
    for (int j = i+1; j < sz; j++)
        if ((i&j) == 0 && cnt[i] && cnt[j]) return true;
        
    return false;
}

int main() {
    int n;
    scanf("%d%d", &n, &k);

    for (int i = 0; i < n; i++) {
        int now = 0;
        for (int j = 0; j < k; j++) {
            int a;
            scanf("%d", &a);
            now = (now << 1) | a;
        }
        cnt[now]++;
    }

    if (solve()) puts("YES");
    else puts("NO");
}