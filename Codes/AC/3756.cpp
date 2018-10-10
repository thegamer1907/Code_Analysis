#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

int a1, a2, a3;
int p1, p2, p3;
int r;
string s;

bool solve(int v){
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(auto u: s){
        if(u == 'B') cnt1++;
        if(u == 'S') cnt2++;
        if(u == 'C') cnt3++;
    }
    int need1 = cnt1 * v, need2 = cnt2 * v, need3 = cnt3 * v;
    need1 = max(0ll, need1 - a1);
    need2 = max(0ll, need2 - a2);
    need3 = max(0ll, need3 - a3);
    int sum = need1 * p1 + need2 * p2 + need3 * p3;
    return sum <= r;
}

main()
{
    ios_base::sync_with_stdio(0);
    cin >> s;
    cin >> a1 >> a2 >> a3;
    cin >> p1 >> p2 >> p3;
    cin >> r;
    int lo = 0, hi = 1000000000000000;
    while(lo != hi){
        int mi = (lo + hi + 1) >> 1;
        if(solve(mi)) lo = mi;
        else hi = mi - 1;
    }
    cout << lo << endl;
}
