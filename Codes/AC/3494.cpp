#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n;

int main() {
    scanf("%lld", &n);
    ll ini = 1, fim = n;
    while (ini <= fim) {
        ll meio = (ini+fim)/2;
        ll quant = 0, aux = n;
        while (aux) {
            quant += min(aux, meio);
            aux -= min(aux, meio);
            aux -= aux/10;
        }
        if (quant*2 < n) ini = meio+1;
        else fim = meio-1;
    }
    printf("%lld\n", ini);

    return 0;
}
