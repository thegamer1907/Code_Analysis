#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e5 + 10;
bool flag;
int N, K;
int r[maxn];
void judge(int x) {
    int ans = 0;
    int ub = N, lb = 0;
    while (ub >= lb) {
        int mid = (ub + lb)/2;
        if (r[mid] >= x) {
            ans = mid;
            ub = mid - 1;
        }   
        else lb = mid + 1;
    }
    if (r[ans] == x)  flag = true;
}
void dfs(int x, int t) {
    if (t == K) {judge(x);}
    else {
        if ((x>>t)&1)  dfs(x^(1<<t), t+1);
        else {
            dfs(x, t+1); dfs(x^(1<<t), t+1);
        }
    }
}
int main(int argc, char const *argv[])
{
    scanf("%d%d", &N, &K);
    flag = false;
    for (int i = 0; i < N; i++) {
        int res = 0;
        for (int j = 0; j < K; j++) {
            int a; scanf("%d", &a);
            if (a == 1) res += 1<<j;
        }
        if (res == 0) flag = true;
        r[i] = res;
    }
    sort(r, r + N);
    for (int i = 0; i < N; i++) dfs(r[i], 0);
    printf("%s\n", flag?"YES": "NO");
    return 0;
}