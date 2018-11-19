#include<bits/stdc++.h>
using namespace std;
const int M = 3e5 + 5, INF = 0x3f3f3f3f, mod = 1e9 + 7;
int A[M];
bool mark[M];
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for(int j = 1; j <= n; j++) {
        for(int k = 0; k < m; k++) {
            int a;
            scanf("%d", &a);
            A[j] |= a << k;
        }
        mark[A[j]]=1;
    }
    int mm=(1<<m);
    for(int j=1;j<(1<<mm);j++){
        int ok=1;
        int A[4];
        memset(A,0,sizeof(A));
        for(int k=0;k<mm;k++){
            if((j>>k)&1){
                if(!mark[k]){
                    ok=0;
                    break;
                }
                for(int i=0;i<m;i++){
                    A[i]+=(k>>i)&1;
                }
            }
        }
        int tot=__builtin_popcount(j);
        for(int i=0;i<m;i++){
            if(A[i]*2>tot){
                ok=0;
                break;
            }
        }
        if(!ok) continue;
//        printf("j = %d\n",j);
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}
