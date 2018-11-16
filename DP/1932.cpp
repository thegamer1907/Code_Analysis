#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 5;
typedef pair<int, int> pii;
int N, M, A[MAX], ans[MAX], cnt[MAX], res;
pii L[MAX];

int main(){
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i++){
        scanf("%d", A + i);
        cnt[A[i]]++;
        if(cnt[A[i]] == 1)  res++;
    }
    for(int i = 1; i <= M; i++){
        scanf("%d", &L[i].first);
        L[i].second = i;
    }
    sort(L + 1, L + M + 1);
    int pos = 1;
    for(int i = 1; i <= M; i++){
        int idx = L[i].second;
        int val = L[i].first;
        while(pos < val){
            cnt[A[pos]]--;
            if(cnt[A[pos]] == 0)    res--;
            pos++;
        }
        ans[idx] = res;
    }
    for(int i = 1; i <= M; i++){
        printf("%d\n", ans[i]);
    }
    return 0;
}
