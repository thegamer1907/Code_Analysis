#pragma GCC optimize ("O3")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl '\n'
#define sfl(x) scanf("%I64d" , &x)
#define sfl2(x, y) scanf("%I64d%I64d" , &x,&y)


vector<bool> prime (10000001, true);
ll ans, n, q, x, y, mp[10000001], v[10000001];

void sieve()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i <= 1e7; i++)
    	for (int j = i * i; j <= 1e7 && prime[i] && i * 1ll * i <= 1e7; j += i)
    	    prime[j] = false;
}

int main()
{
    sieve();
    sfl(n);
    while (n--)
        sfl(x), mp[x]++;
    for (int i = 2; i <= 1e7; i++, v[i] += v[i - 1])
        for (int j = i; j <= 1e7 && prime[i]; j += i)
            v[i] += mp[j];
    sfl(q);
    while (q--)
    {
        ans = 0;
        sfl2(x, y);
        if (x >= 1e7)
        {
            printf("0\n");
            continue;
        }
        y = min(y, ll(10000000));
        printf("%I64d\n", v[y] - v[x - 1]);
    }
    return 0;
}
