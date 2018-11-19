#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i<=b; i++)
#define FORD(i, a, b) for (int i = a; i>=b; i--)
#define REP(i, a) for (int i = 0; i<a; i++)
#define N 100100
#define pp pair<int, int>
#define IO ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

using namespace std;

bool ok(int t1, double mid, int t2) {
    if (t1 < mid) {
        if (mid < t2) return false;
        if (t1 < t2) return true;
        return false;
    }
    else {
        mid += 12;
        if (t2 < t1) t2 += 12;
        if (t2 < mid) return true;
        return false;
    }
}
int h, m, s, t1, t2;
int main() {
    IO;
    cin>>h>>m>>s>>t1>>t2;
    double mi = m + double(s) / 60;
    double ho = h + mi / 60;
    mi = mi / 5;
    double se = double(s) / 5;
    //By top arc
    if (ok(t1, ho, t2) && ok(t1, mi, t2) && ok(t1, se, t2)) {
        cout<<"YES";return 0;
    }
    if (ok(t2, ho, t1) && ok(t2, mi, t1) && ok(t2, se, t1)) {
        cout<<"YES";return 0;
    }
    cout<<"NO";
}

