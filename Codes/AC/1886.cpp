#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

int n, m, k;

bool solve(int v){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += min(v, i * m) / i;
    }
    return sum >= k;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m >> k;
    if(n > m) swap(n, m);
    int lo = 1, hi = n * m;
    while(lo != hi){
        int mi = (lo + hi) >> 1;
        if(solve(mi)) hi = mi;
        else lo = mi + 1;
    }
    cout << lo << endl;
}
