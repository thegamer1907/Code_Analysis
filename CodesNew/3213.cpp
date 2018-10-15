#include <bits/stdc++.h>
using namespace std;
const int limN = 1e5 + 5;

int E, D;
int totR = 0;
int examenes[limN], ultE[limN];
int reqs[limN];
bool usd[limN];

bool itWorks(int pos) {
    int w = totR;
    memset(usd, 0, sizeof(usd));    
    pos = ultE[pos];
    while(pos > 0) {
        if(pos < w)
            return false;
        if(!usd[examenes[pos]]) {
            usd[examenes[pos]] = true;
            w -= 1 + reqs[examenes[pos]];
        }
        pos = ultE[pos-1];
    }
    return w == 0;
}

int main() {
    scanf("%d%d", &E, &D);
    for(int i=1; i<=E; i++) {
        scanf("%d", &examenes[i]);
        ultE[i] = ultE[i-1];
        if(examenes[i])
            ultE[i] = i;
    }
    for(int i=1; i<=D; i++) {
        scanf("%d", &reqs[i]);
        totR += reqs[i]+1;
    }

    int ini=1, fin=E+1;
    while(ini < fin) {
        int piv = (ini+fin)/2;
        if(itWorks(piv))
            fin = piv;
        else
            ini = piv+1;
    }

    printf("%d\n", ini==E+1? -1 : ini);
}
