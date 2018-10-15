#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

int n;
int a[500010];

bool solve(int v){
    for(int i = 0; i < v; i++){
        if(a[i] * 2 > a[n - v + i]) return false;
    }
    return true;
}

main(){
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int lo = 0, hi = n / 2;
    while(lo != hi){
        int mi = (lo + hi + 1) >> 1;
        if(solve(mi)) lo = mi;
        else hi = mi - 1;
    }
    cout << n - lo << endl;
}
