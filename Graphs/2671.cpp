#include <bits/stdc++.h>
using namespace std;
const int dr[] = {-1, 1};
const int limN = 505;

int R, C ;
bool usd[limN][limN];

bool esVald(int r, int c) {
    return 0 < r && r <= R && 0 < c && c <= C && !usd[r][c];
}

int main() {
    int K ;
    int r=1, c=1;

    scanf("%d%d%d", &R, &C, &K);

    for(int i=1, d=1; i<=K; i++) {
        int w = i<K? 2 : R*C - 2*(K-1);
        printf("%d", w);
        // printf("\n\t");
        while(w--) {
            printf(" %d %d", r, c);
            usd[r][c] = true;
            // printf(" [mdo correcto]\n\t");
            if(!w && i==K) continue;
            if(esVald(r + dr[d], c))
                r += dr[d];
            else {
                c++;
                d = 1-d;
            }
        }
        // printf(" [cicomp con %d %d]", r, c);
        printf("\n");
    }
}
