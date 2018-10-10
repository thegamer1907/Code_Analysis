#include <bits/stdc++.h>

using namespace std;

const int MAXV = 10000010;

int spf[MAXV], bit[MAXV];

void update(int x, int v)
{
    while (x < MAXV)
    {
        bit[x] += v;
        x += (x & -x);
    }
}

int sum(int x)
{
    int s = 0;
    while (x > 0)
    {
        s += bit[x];
        x -= (x & -x);
    }
    return s;
}

// marcar spf (shortest prime factor)
void spf_mark(void)
{
    spf[1] = 1;
    for (int i = 2; i < MAXV; i++)
        spf[i] = i;

    for (int i = 4; i < MAXV; i += 2)
        spf[i] = 2;

    for (int i = 3; i*i < MAXV; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i*i; j < MAXV; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

// obter fatores primos de x
void get_primes(int x)
{
    int ant = -1;
    while (x != 1)
    {
        if (spf[x] > ant)
        {
            ant = spf[x];
            update(spf[x], 1);
        }
        x = x / spf[x];
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    spf_mark();
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        get_primes(x);
    }

    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        if (l > MAXV-10)
        {
            printf("0\n");
            continue;
        }
        if (r > MAXV-10)
        {
            printf("%d\n", sum(MAXV-10)-sum(l-1));
            continue;
        }
        printf("%d\n", sum(r)-sum(l-1));
    }
}
