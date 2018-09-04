#include <bits/stdc++.h>
using namespace std;

int sp[10000010];
int prime[1000010], cnt;
int low[10000010];

void ciur()
{
    for (int i(2); i <= 10000000; i++) {
        if (low[i] == 0) {
            low[i] = i;
            prime[cnt++] = i;
        }
        for (int j(0); j < cnt && low[i] >= prime[j] && prime[j] * i <= 10000000; j++)
            low[prime[j] * i] = prime[j];
    }
}

int main()
{
    ciur();
    int n, c, x;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &c);
        while (c != 1) {
            x = low[c];
            sp[x]++;
            while (low[c] == x)
                c /= x;
        }
    }

    for (int i(1); i <= 10000000; i++)
        sp[i] += sp[i - 1];

    int m, a, b;
    scanf("%d", &m);
    while (m--) {
        scanf("%d%d", &a, &b);
        if (b > 10000000)
            b = 10000000;
        if (a > b)
            cout << "0\n";
        else
            cout << sp[b] - sp[a - 1] << '\n';
    }
    return 0;
}
