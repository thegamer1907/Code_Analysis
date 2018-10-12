#include<bits/stdc++.h>
#define bug printf("*********\n");
#define mem0(a) memset(a, 0, sizeof(a));
#define mem1(a) memset(a, -1, sizeof(a));
#define finf(a, n) fill(a, a+n, INF);
#define pb(G, b) G.push_back(b);
#define lowbit(i) i&(-i)
#pragma comment(linker, "/STACK:102400000,102400000")
using namespace std;
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<LL, pair<int, LL> > LLppar;
typedef pair<int, int> par;
typedef pair<LL, int> LLpar;
const LL mod = 1e9+7;
const LL INF = 1e9+7;
const uLL base1 = 131;
const uLL base2 = 233;
const int MAXN = 1e6+5;
const int MAXM = 5e6+5;
const double pi = acos(-1);

int k;
char s[1000010];
LL suml[1000010], sumr[1000010];

int main() {
    while(~scanf("%d", &k)) {
        scanf("%s", s);
        LL sum = 0, ans1 = 0, ans2 = 0;
        int len = strlen(s), cnt = 0;
        for(int i = 0; i < len; i ++) {
            if(s[i] == '1') {
                ans1 += (sum*(sum+1))/2;
                sum = 0;
                suml[++cnt] = 1;
                sumr[cnt] = 1;
                int u = i-1;
                int v = i+1;
                while(u >= 0 && s[u] == '0') suml[cnt] ++, u --;
                while(v < len && s[v] == '0') sumr[cnt] ++, v ++;
                //printf("%d %d\n", suml[cnt], sumr[cnt]);
            }else sum ++;
        }
        if(k == 0) {
            if(sum) ans1 += (sum*(sum+1))/2;
            printf("%lld\n", ans1);
            continue;
        }
        for(int i = 1; i <= cnt-k+1; i ++) {
            ans2 += suml[i]*sumr[i+k-1];
        }
        printf("%lld\n", ans2);
    }
    return 0;
}
