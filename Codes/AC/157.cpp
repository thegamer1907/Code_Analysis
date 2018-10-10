#include <bits/stdc++.h>
using namespace std;

int N, M, X, V[100005];

int main() {
    scanf("%d", &N);

    for(int i=0;i<N;i++)
        scanf("%d", &V[i]);
    for(int i=1;i<N;i++)
        V[i] += V[i-1];

    scanf("%d", &M);

    while(M--) {
        scanf("%d", &X);

        int idx = (int)(lower_bound(V, V + N, X) - V) + 1;
        printf("%d\n", idx);
    }


    return 0;
}
