#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

int n;
int a[100010];

bool solve(int v){
    int sum = 0;
    for(int i = 0; i < n; i++) if(v < a[i]) return false;
    for(int i = 0; i < n; i++){
        sum += v - a[i];
        if(sum >= v) return true;
    }
    return sum >= v;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    int lo = 0, hi = 1000000000000000000;
    while(lo != hi){
        int mi = (lo + hi) >> 1;
        if(solve(mi)) hi = mi;
        else lo = mi + 1;
    }
    cout << lo << endl;
}
