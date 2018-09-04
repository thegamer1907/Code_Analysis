#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define x first
#define y second
#define PID pair < double , int >
#define PLL pair < ll , ll >
#define MOD 1000000007

using namespace std;
string s;
char c[300];
ll nb, ns, nc, pb, ps, pc, rs, r;

bool check(ll x)
{
    ll br, sa, ch;
    br = max(1LL * c['B'] * x - nb, 0LL);
    sa = max(1LL * c['S'] * x - ns,0LL);
    ch = max(1LL * c['C'] * x - nc,0LL);
    return ((1LL * br * pb + 1LL * sa * ps + 1LL * ch * pc) <= r);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    for (auto it : s) c[it]++; // B, S, C
    ll st = 0, dr = 1e15;
    while (st <= dr)
    {
        ll mid = (st + dr) / 2;
        if (check(mid)) st = mid + 1, rs = mid;
        else dr = mid - 1;
    }
    cout << rs;
}