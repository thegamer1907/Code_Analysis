#include <bits/stdc++.h>

using namespace std;
#define F(i, n) for(int i = 0; i < n; ++i)

int input() {
    int n = 0, m = 1; char c = getchar();
    while(!((c >= '0' && c <= '9') || c == '-')) c = getchar();
    if(c == '-') { c = getchar(); m = -1; }
    while(c >= '0' && c <= '9') {
        n = n * 10 + c - '0';
        c = getchar();
    }
    return n * m;
}

vector<int> compute_primes(int n) {
    vector<char> sieve(n + 1, true);
    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (sieve[i]) {
            primes.push_back(i);
            for (long long j = (long long) i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }
    return primes;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    int n = input();
    vector<int> g(1e7 + 5, 0);
    F(i, n) {
        int in = input();
        g[in] ++;
    }
    vector<int> v = compute_primes(1e7 + 5);
    vector<int> d(1e7 + 7);
    for(int i = 0; i < v.size(); ++ i) {
        int p = v[i];
        for(int j = p; j < 1e7 + 5; j += p) {
            d[p] += g[j];
        }
    }
    for(int i = 1; i < 1e7 + 5; ++ i) {
        d[i] += d[i - 1];
    }
    int m = input();
    F(i, m) {
        int l = min((int) 1e7 + 3, input()), r = min((int) 1e7 + 3, input());
        cout << d[r] - d[l - 1] << '\n';
    }
}
