#include "bits/stdc++.h"
using namespace std;

const int N = 1e7 + 7;
vector<int> prime;
long long cache[N], cnt[N];
bool status[N];

void sieve() {
    for(int i = 2; i < N; i++) if(!status[i]) {
        for(int j = i; j < N; j += i) {
            status[j] = true;
            cache[i] += cnt[j];
        }
    }
}

int main() {
    int n; scanf("%d", &n); 
    for(int i = 0; i < n; ++i) {
        int x; scanf("%d", &x);
        cnt[x]++;
    }
    sieve();
    for(int i = 1; i < N; ++i) cache[i] += cache[i - 1];
    int q; scanf("%d", &q);
    while(q--) {
        int l, r; scanf("%d %d", &l, &r);
        if(l > 10000000) l = 10000001;
        if(r > 10000000) r = 10000000;
        printf("%lld\n", cache[r] - cache[l - 1]);
    }
}