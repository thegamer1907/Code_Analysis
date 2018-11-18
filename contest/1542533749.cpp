#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<bitset>
#include<cstdlib>
#include<cmath>
#include<set>
#include<list>
#include<deque>
#include<map>
#include<queue>
#include<cassert>
#include<unordered_map>
#include<unordered_set>
#define lowbit(x) ((x)&(-x))
#define nbit(x) __builtin_popcountll(x)
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
const double PI = acos(-1.0);
const double eps = 1e-6;
const int INF = 0x3f3f3f3f;
const int maxn = 1e5 + 11;
int N, M, K;
int a[maxn][5];
int A[maxn], cnt[20];
int main(){
    cin >> N >> K;
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= K; j++){
            scanf("%d", &a[i][j]);
            A[i] = (A[i] << 1) + a[i][j];
        }
    }

    for (int i = 1; i <= N; i++){
        cnt[A[i]]++;
    }
    for (int i = 0; i < (1 << K); i++){
        if (!cnt[i]) continue;
        int mask = ((1 << K) - 1) ^ i;
        for (int j = mask; j > 0; j = mask & (j - 1)){
            if (cnt[j]) {puts("Yes"); return 0;}
        }
        if (cnt[0]) {puts("Yes"); return 0;}
    }
    puts("No");

    return 0;
}
