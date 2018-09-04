#include <iostream>
#include <cstdio>

using namespace std;

typedef long long lint;

lint n;

bool works(lint k, lint n)
{
    lint vasya = 0, petya = 0;
    while(n > 0)
    {
        vasya += (n > k ? k : n); n -= (n > k ? k : n);
        petya += n/10; n -= n/10;
    }
    if(vasya >= petya)
        return true;
    return false;
}

lint bsearch(lint n)
{
    lint p = 1LL << 62;
    lint r = 0;
    while(p)
    {
        if(r + p <= n && works(r+p, n) == false)
            r += p;
        p >>= 1;
    }
    r++;
    return r;
}

void verif(lint k, lint n)
{
    lint vesya = 0, petya = 0;
    while(n > 0)
    {
        vesya += (n > k ? k : n); n -= (n > k ? k : n); cout << n << ' ';
        petya += n/10; n -= n/10; cout << n << '\n';
    }

    cout << "\nvesya: " << vesya << "\npetya: " << petya;
}

int main()
{
    /*freopen("c.in", "r", stdin);
    freopen("c.out", "w", stdout);*/

    scanf("%lld", &n);
    lint rez = bsearch(n);
    printf("%lld", rez);
    //printf("\n\n");

    //verif(rez, n);

    return 0;
}
