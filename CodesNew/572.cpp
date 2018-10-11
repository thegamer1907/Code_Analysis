#include <bits/stdc++.h>
using namespace std;
const int MAX = (1e7);

vector<int> Sieve() {
    vector<bool> isPrime(MAX + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i*i <= MAX; i++) {
        if (isPrime[i])
            for (int j = i*i; j <= MAX; j += i) isPrime[j] = 0;
    }

    vector<int> ret;
    for (int i = 2; i <= MAX; i++)
        if (isPrime[i]) ret.push_back(i);
    return ret;
}

int freqArr[MAX] = {0};
map<int,int> f = {{0,0}};

int main() {
    int n, m, x, l, r;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        freqArr[x]++;
    }

    vector<int> primes = Sieve();
    for (auto p : primes)
        for (int i = p; i <= MAX; i += p) f[p] += freqArr[i];

    int prv = 0;
    for (auto it = f.begin(); it != f.end(); it++) {
        (*it).second += prv;
        prv = (*it).second;
    }

    scanf("%d", &m);
    while (m--) {
        scanf("%d %d", &l, &r);
        auto it1 = f.lower_bound(l);
        auto it2 = f.upper_bound(r);
        it1--; it2--;
        printf("%d\n", (*it2).second - (*it1).second);
    }
}