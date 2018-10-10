#include <bits/stdc++.h>

using namespace std;
const int N = 10000007;
bitset<N> vis;

int n, x[N];

int lp[N];
int sum[N];

void sieve(){

    int i;
    vis[0] = vis[1] = 1;
    lp[2] = 2;

    for(i = 3; i*i < N; i += 2){
        if(!vis[i]){
            lp[i] = i;
            for(long long j = i*i; j < N; j += i)
                vis[j] = 1, lp[j] = i;
        }
    }
}

void comp(int val){
    set<int> s;
    while(val > 1){
        if(val % 2 == 0) s.insert(2), val /= 2;
        else if(!vis[val]) s.insert(val), val /= val;
        else{
            s.insert(lp[val]), val /= lp[val];
        }
    }
    for(int v : s){
        sum[v]++;
    }
}

int main(){
    
    sieve();

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", x+i), comp(x[i]);

    for(int i = 1; i < N; i++)
        sum[i] += sum[i-1];

    int m, l, r;

    scanf("%d", &m);

    while(m--){
        scanf("%d %d", &l, &r);
        r = min(r, N-1);
        printf("%d\n", l <= r ? sum[r] - sum[l-1] : 0);    
    }


    return 0;
}
