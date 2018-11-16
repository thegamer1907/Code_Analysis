#include <bits/stdc++.h>
#define ii pair < int, int >
using namespace std;

const int M = 1e5 + 7;

int idx[M], tree[M];
set < int > sx;

void update(int idx, int mx){
    while(idx <= mx){
        tree[idx] += 1;
        idx += idx & (-idx);
    }
}

int read(int idx){
    int s = 0;
    while(idx > 0){
        s += tree[idx];
        idx -= idx & (-idx);
    }
    return s;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        sx.insert(x);
        idx[x] = i + 1;
    }

    set < int > :: iterator it;
    for(it = sx.begin(); it != sx.end(); it++){
        update(idx[*it], n);
    }

    for(int i = 0; i < m; i++){
        int x;
        scanf("%d", &x);
        printf("%d\n",read(n) - read(x - 1));
    }

    return 0;
}
