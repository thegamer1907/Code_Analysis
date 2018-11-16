#include <bits/stdc++.h>
using namespace std;
const int limN = 1e4 + 3;

struct Nodo {
    Nodo* p;
    Nodo() {
        p = NULL;        
    }
    Nodo* root() {
        if(p)
            return p = p->root();
        return this;
    }
    bool une(Nodo *b) {
        Nodo *a = this->root();
        b = b->root();
        if(a==b)
            return false;
        b -> p = a;
        return true;
    }
};

Nodo nodos[limN];

int main() {
    int N ;
    int ans;

    scanf("%d", &N);
    ans = N;    
    for(int i=1; i<=N; i++) {
        int a;
        scanf("%d", &a);
        if(nodos[i].une(&nodos[a]))
            ans --;
    }

    printf("%d\n", ans);
}
