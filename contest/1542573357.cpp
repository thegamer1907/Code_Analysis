#pragma comment(linker, "/STACK:1024000000,1024000000")
#include<algorithm>
#include<iostream>
#include<cstring>
#include<fstream>
#include<bitset>
#include<cstdio>
#include<string>
#include<vector>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<set>
#define INF 0X3F3F3F3F
#define N 100005
#define M 200005
#define LL long long
#define ULL unsigned long long
#define FF(i, a, b) for(int i = a; i <= b; ++i)
#define RR(i, a, b) for(int i = a; i >= b; --i)
#define FJ(i, a, b) for(int i = a; i < b; ++i)
#define SC(x) scanf("%d", &x)
#define SCC(x, y) scanf("%d%d", &x, &y)
#define SCCC(x, y, z) scanf("%d%d%d", &x, &y, &z)
#define SS(x) scanf("%s", x)
#define PR(x) printf("%d\n", x)
#define CL(a, x) memset(a, x, sizeof(a))
#define _P fd[rt]
#define _L fd[rt << 1]
#define _R fd[rt << 1 | 1]
#define MID int mid = ((l + r) >> 1)
#define lson rt<<1 ,l, mid
#define rson rt<<1 | 1, mid + 1, r
#define VI vector<int>
#define db double
#define PII pair<int, int>
#define PLL pair<unsigned long long, unsigned long long>
#define MP make_pair
#define PB push_back
#define IN freopen("in.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
using namespace std;
const int MOD = 1000000007;
const double PI = acos(-1.0);
const double EPS = 1e-8;
const int dir[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
inline void II(int &n){char ch = getchar(); n = 0; bool t = 0;
for(; ch < '0'; ch = getchar()) if(ch == '-') t = 1;
for(; ch >= '0'; n = n * 10 + ch - '0', ch = getchar()); if(t) n =- n;}
inline void OO(int a){if(a < 0) {putchar('-'); a = -a;}
if(a >= 10) OO(a / 10); putchar(a % 10 + '0');}
inline int sgn(double x){return (x > EPS) - (x < -EPS);}
const int K = 15;
bitset<262144> f[201][16];
int g[202];
char s[202][105], s2[202][105], ss[105];
int n, m, a, b;
int main(){
    //IN;
    SC(n);
    FF(nn, 1, n){
        SS(s[nn] + 1);
        int len = strlen(s[nn] + 1);
        for(int i = 1, tmp = min(len, K); i <= tmp; ++i){
            int cur = 0;
            int lim = (1 << i) - 1;
            for(int j = 1; j <= i - 1; ++j) cur = (cur << 1) | (s[nn][j] - '0');
            for(int j = i; j <= len; ++j){
                cur <<= 1;
                cur |= s[nn][j] - '0';
                cur &= lim;
                f[nn][i][cur] = 1;
            }
        }
        for(int i = 1; i <= K; ++i){
            if(f[nn][i].count() == (1 << i)){
                g[nn] = i;
            }
        }
        strcpy(s2[nn] + 1, s[nn] + 1);
    }
    SC(m);
    FF(nn, n + 1, n + m){
        SCC(a, b);
        //printf("%s\n%s\n%s\n%s\n", s[a] + 1, s2[a] + 1, s[b] + 1, s2[b] + 1);
        int la = strlen(s[a] + 1);
        int lb = strlen(s[b] + 1);
        int la2 = strlen(s2[a] + 1);
        int lb2 = strlen(s2[b] + 1);
        int k = max(g[a], g[b]);
        for(int i = k + 1; i <= K; ++i){
            int lim = (1 << i) - 1;
            f[nn][i] = f[a][i] | f[b][i];
            int l = la - min(la, i - 1) + 1;
            int cur = 0;
            int rl = i - min(la, i - 1);
            if(rl > lb) continue;
            for(int j = l; j <= la; ++j) cur = (cur << 1) | (s[a][j] - '0');
            for(int j = 1; j < rl; ++j) cur = (cur << 1) | (s2[b][j] - '0');
            int rr = min(lb2, i - 1);
            for(int j = rl; j <= rr; ++j){
                cur <<= 1;
                cur |= s2[b][j] - '0';
                cur &= lim;
                f[nn][i][cur] = 1;
                //cout << cur << endl;
            }
        }
      //  for(int j = 0; j <= 31; ++j) printf(f[nn][6][j] ? "1" : "0");
      //  puts("");
        int ans = 0;
        for(int i = k + 1; i <= K; ++i){
            if(f[nn][i].count() == (1 << i)){
                g[nn] = i;
                ans = i;
            }else break;
        }
        if(ans == 0){
            PR(k);
            g[nn] = k;
        }else {
            PR(ans);
        }
        if(lb >= K){
            char tmp = s[b][1 + K];
            //s[b][1 + K] = '\0';
            strcpy(s[nn] + 1, s[b] + 1);
            //s[b][1 + K] = tmp;
        }
        else {
            int t = K - lb;
            t = min(la, t);
            for(int i = 1; i <= t; ++i) s[nn][i] = s[a][la - t + i];
            strcpy(s[nn] + t + 1, s[b] + 1);
        }
        if(la2 >= K){
            char tmp = s2[a][1 + K];
            //s2[a][1 + K] = '\0';
            strcpy(s2[nn] + 1, s2[a] + 1);
            //s2[a][1 + K] = tmp;
        }
        else {
            int t = K - la2;
            t = min(lb2, t);
            strcpy(s2[nn] + 1, s2[a] + 1);
            for(int i = 1; i <= t; ++i) s2[nn][la2 + i] = s2[b][i];
            s2[nn][la2 + t + 1] = '\0';
        }
        //printf("%s\n%s\n", s2[nn]+1, s[nn]+1);
    }
    return 0;
}
