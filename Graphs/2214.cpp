#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

vector< vector<ll> > graph;

ll level( ll index, ll atual ) {
    if( graph[index].size() == 0 ) {
        return atual;
    }    
    return level(graph[index][0], atual+1);
}


int main() {

    ll n, i, dad, maximo;

    scanf("%lld",&n);

    graph.resize(n);

    for( i=0; i<n; i++ ) {
        scanf("%lld",&dad);
        if( dad!=-1 ) {
            dad--;
            graph[i].push_back(dad); 
        }
    }

    maximo = 1;
    for( i=0; i<n; i++ ) {
        maximo = max(maximo,level(i,1));
    } 
    printf("%lld\n",maximo);
    return 0;
}
