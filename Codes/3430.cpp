#include <bits/stdc++.h>

using namespace std;

#define int long long

int n;

bool solve(int v){
    int a = 0;
    int V = 0;
    int t = n;
    while(t){
        a += min(t, v);
        t -= min(t, v);
        if(t){
            int k = t / 10;
            t -= k;
            V += k;
        }
    }
    return a >= V;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin >> n;
    int lo = 1, hi = n;
    while(lo != hi){
        int mi = (lo + hi) >> 1;
        if(solve(mi)) hi = mi;
        else lo = mi + 1;
    }
    cout << lo << endl;
}
