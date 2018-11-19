#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for (int i = (a); i < (b); i++)
#define FO(i,a,b) for (int i = (a); i < (b); i++)
#define pb push_back
#define eb emplace_back
#define sz(v) int(v.size())
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

int rd[4];
int n, k;
int ex[16];
int main() {
    scanf("%d %d", &n, &k);
    fo(i,0,n) {
        fo(j,0,k) scanf("%d", rd+j);
        int val = 0;
        fo(j,0,k) val += (1-rd[j])<<j;
        ex[val] = 1;
    }
    int ans = 0;
    if (ex[(1<<k)-1]) ans = 1;
    fo(i,0,k) {
        int msk = ((1<<k)-1) ^ (1<<i);
        if (!ex[msk]) continue;
        fo(j,0,1<<k) if (ex[j] && (j & (1<<i))) ans = 1;
    }
    int fll = (1<<k)-1;
    if (k==4) fo(i,0,1<<k) if (ex[i] && __builtin_popcount(i)==2) {
        if (ex[fll ^ i]) ans = 1;
    }
    if (ans) puts("yes");
    else puts("no");

    return 0;
}
