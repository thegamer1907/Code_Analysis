#include <bits/stdc++.h>
using namespace std;
const int limB = 4;
const int limP = 1<<4;

int tot[limP];
int sumo[limB];

void bruta(int pos, int usd) {
    if(pos==limP) {
        if(usd==0)
            return;
        for(int i=0; i<limB; i++) {
            if(sumo[i]*2 > usd)
                return;
        }
        printf("YES\n");
        exit(0);
    }
    bruta(pos+1, usd);
    if(tot[pos]) {
        tot[pos] --;
        for(int i=0; i<limB; i++)
            if((1<<i) & pos)
                sumo[i] ++;
        bruta(pos, usd+1);
        for(int i=0; i<limB; i++)
            if((1<<i) & pos)
                sumo[i] --;
        tot[pos] ++;
    }
}

int main() {
    int N, K;
    scanf("%d%d", &N, &K);
    for(int i=0; i<N; i++) {
        int b = 0;
        for(int j=0; j<K; j++) {
            int a ;
            scanf("%d", &a);
            if(a)
                b += (1<<j);
        }
        tot[b] ++;
    }

    for(int i=0; i<limP; i++)
        tot[i] = min(tot[i], 4);

    bruta(0, 0);

    printf("NO\n");
}
