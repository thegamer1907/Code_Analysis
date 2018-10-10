#include <bits/stdc++.h>

using namespace std;

int primes[10000001];

void foo()
{
    for (int i = 2; i * i <= 10000000; i++) {
        if (primes[i] != 0)continue;
        for (int j = i*2; j <= 10000000; j+=i)primes[j] = i;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    foo();
    cin >> n;
    map<int, int>& cnt = *new map<int, int>();
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        while (a > 1) {
            int p = primes[a];
            if (p == 0) p = a;
            cnt[p]++;
            while (a % p == 0)a /= p;
        }
    }
    int temp = 0;
    for (auto& p : cnt) {
        p.second = temp+=p.second;
    }
    cnt[0] = 0;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        auto iter1 = cnt.lower_bound(l);
        iter1--;
        auto iter2 = cnt.upper_bound(r);
        iter2--;
        cout << (iter2->second - iter1->second) << endl;
    }
    return 0;
}
