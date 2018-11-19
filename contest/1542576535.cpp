#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 29;
typedef pair<int ,int > P;
typedef long long ll;
int A[maxn], cnt[10];
int main(void){
    int n, k, a;
    cin >> n >> k;
    for(int i = 1; i <= n; i ++){
        int t = 0;
        for(int j = 0; j < k; j ++){
            scanf("%d", &a);
            t = t * 2 + a;
        }
        cnt[t] ++;
    }
    if(cnt[0]){
        puts("YES");
        return 0;
    }
    for(int i = 0; i < (1 << k); i ++) for(int j = i; j < (1 << k); j ++){
        if(cnt[i] && cnt[j] && (i & j) == 0){
           puts("YES");
           return 0;
        }
    }
    puts("NO");
    return 0;
}