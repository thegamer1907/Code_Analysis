#include <iostream>
#include <set>

using namespace std;
const int MAXN = 1e5 + 5;

int ar[MAXN];
int cnt[MAXN];
int ans[MAXN];

int main(int argc, char* argv[]){
    int N, M, x;
    scanf("%d%d", &N, &M);
    
    for (int i=0; i < N; i++)
        scanf("%d", ar + i);

    for (int i=N-1; 0 <= i; i--){
        ans[i] = ans[i + 1];
        if (cnt[ar[i]] == 0){
            cnt[ar[i]] = 1;
            ans[i]++;
        }
    }
    
    while (M--){
        scanf("%d", &x);
        printf("%d\n", ans[x-1]);
    }
        
    
}
