#include "bits/stdc++.h"
using namespace std;

const int N = 1e7 + 7;
vector<int> prime;
long long cache[N];
bool status[N];

void sieve() {
    int sq = sqrt(N);
    for(int i = 3; i <= sq; i += 2) if(!status[i]) 
        for(int j = i * i; j < N; j += i + i) status[j] = true;
    
    prime.emplace_back(2);
    for(int i = 3; i < N; i += 2) if(!status[i]) prime.emplace_back(i);
}

int main() {
    sieve();
    int n; scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        int x; scanf("%d", &x);
        for(int i = 0; prime[i] * prime[i] <= x; i++) {
            if(x % prime[i] == 0) {
                cache[prime[i]]++;
                while(x % prime[i] == 0) x /= prime[i];
            }
        }
        if(x > 1) cache[x]++;
    }
    for(int i = 1; i < N; ++i) cache[i] += cache[i - 1];
    int q; scanf("%d", &q);
    while(q--) {
        int l, r; scanf("%d %d", &l, &r);
        if(l > 10000000) l = 10000001;
        if(r > 10000000) r = 10000000;
        printf("%lld\n", cache[r] - cache[l - 1]);
    }
}