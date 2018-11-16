#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main() {

    ll n, m, i, num, soma, pares;

    vector<ll> boys(105,0);
    vector<ll> girls(105,0);

    scanf("%lld",&n);
    for( i=0; i<n; i++ ) {
        scanf("%lld",&num);        
        boys[num]++;
    }

    scanf("%lld",&m);
    for( i=0; i<m; i++ ) {
        scanf("%lld",&num);
        girls[num]++;
    }
    
    soma = 0;

    for( i=1; i<=100; i++ ) {
        pares = min(boys[i],girls[i-1]);
        soma += pares;
        boys[i] -= pares;
        girls[i-1] -= pares;

        pares = min(boys[i],girls[i]);
        soma += pares;
        boys[i] -= pares;
        girls[i] -= pares;


        pares = min(boys[i],girls[i+1]);
        soma += pares;
        boys[i] -= pares;
        girls[i+1] -= pares; 
    }

    printf("%lld\n",soma);
    return 0;
}
