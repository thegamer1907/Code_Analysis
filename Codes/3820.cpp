#include <bits/stdc++.h>

using namespace std;

string s;
int gb, gs, gc, pb, ps, pc, nb, nc, ns;
long long money;

bool ok(long long x){
    long long tot;
    tot = max(x * nb - gb, 0ll) * pb;
    tot += max(x * ns - gs, 0ll) * ps;
    tot += max(x * nc - gc, 0ll) * pc;
    return tot <= money;
}

int main()
{
    cin >> s;
    cin >> gb >> gs >> gc;
    cin >> pb >> ps >> pc;
    cin >> money;
    nb = count(s.begin(), s.end(), 'B');
    ns = count(s.begin(), s.end(), 'S');
    nc = count(s.begin(), s.end(), 'C');
    long long st = 0, en = 1e13;
    while(st < en){
        long long mid = (st + en + 1) >> 1;
        if(ok(mid))
            st = mid;
        else
            en = mid - 1;
    }
    cout << en;
    return 0;
}
