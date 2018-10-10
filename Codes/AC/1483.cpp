#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

int n, s;
int a[100010];

int solve(int v){
    multiset<int> q;
    for(int i = 0; i < n; i++){
        q.insert(a[i] + (i + 1) * v);
    }
    int sum = 0;
    int c = 0;
    for(auto u: q){
        if(c == v) break;
        sum += u;
        c++;
    }
    return sum;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int lo = 0, hi = n;
    while(lo != hi){
        int mi = (lo + hi + 1) >> 1;
        if(solve(mi) <= s) lo = mi;
        else hi = mi - 1;
    }
    cout << lo << ' ' << solve(lo) << endl;
}
