#include<iostream>
#include<algorithm>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<cmath>
#include<map>
#include<set>
#include<vector>
#include<assert.h>
#include<queue>
#include<stack>
#include<string>
#define fi first
#define se second
#define lson l,mid,o<<1
#define rson mid+1,r,o<<1|1
using namespace std;
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int, int> P;
typedef pair<P, P> PII;
const LL INF = 0x3f3f3f3f;
const int N = 1e5 + 10;
const LL mod = 1e9 + 7;
const double PI = acos(-1);

set<LL>st[250][15];
string s[250], zz;
int main() {
    int n, len, m, x, y;
    scanf("%d", &n);
    LL t;
    for(int i = 1; i <= n; ++i) cin >> s[i];
    for(int i = 1; i <= n; ++i){
        len = s[i].size();
        for(int now = 0; now < len; ++now){
            t = 0;
            for(int j = 1; j <= min(len, 14) && now + j <= len; ++j){
                t = t * 2 + s[i][now + j - 1] - '0';
                st[i][j].insert(t);
            }
        }
    }
    scanf("%d", &m);
    int ans;
    for(int i = n + 1; i <= n + m; ++i){
        scanf("%d%d", &x, &y);
        s[i] = s[x] + s[y];
        len = s[x].size();
        for(int j = 1; j <= 14; ++j){
            for(auto z : st[x][j])      st[i][j].insert(z);
            for(auto z : st[y][j])      st[i][j].insert(z);
        }
        for(int now = max(0, len - 15); now < len; ++now){
            t = 0;
            for(int j = 1; j <= 14 && now + j <= s[i].size(); ++j){
                t = t * 2 + s[i][now + j - 1] - '0';
                st[i][j].insert(t);
            }
        }
        ans = 0;
        while(st[i][ans + 1].size() == (1 << (ans + 1)) && ans < 14)   ans ++;
        printf("%d\n", ans);
        if(s[i].size() >= 80){
            zz.clear();
            for(int j = 0; j < 30; ++j) zz += s[i][j];
            for(int j = s[i].size() - 30; s[i][j]; ++j)    zz += s[i][j];
            s[i].clear();
            s[i] = zz;
        }
    }
	return 0;
}

/*
3
10001110
1101001101100110001101101001000001111
01011111000010101000001100001011001111110110011110101111101001101100110001101101001000001111
10
3 2
*/
