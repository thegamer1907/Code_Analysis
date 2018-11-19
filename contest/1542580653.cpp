#include <bits/stdc++.h>
using namespace std;
const int N=1e5+1,K=16;
int n,k;
int P[N][4],A[K];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        int x=0;
        for(int j=0;j<k;j++){
            scanf("%d",&P[i][j]);
            if(P[i][j])
                x+=1<<j;
        }
        A[x]++;
    }
    for(int i=0;i<K;i++){
        for(int j=0;j<K;j++){
            if((i & j) ==0){
              //  printf("Pvde %d %d\n",i,j);
                if(A[i] && A[j]){
                    printf("YES");
                    return 0;
                }
            }
        }
    }
    printf("NO");
    return 0;
}
// ako je jedan isti broj zastupljen svuda gde ga nema ,mora postojati k
