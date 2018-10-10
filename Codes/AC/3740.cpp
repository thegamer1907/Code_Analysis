#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define inf 1e14

int main()
{
    string re;
    cin >> re;
    int i;

    int nb, ns, nc;
    cin >> nb >> ns >> nc;

    int pb, ps, pc;
    cin >> pb >> ps >> pc;

    ll ruble;
    cin >> ruble;

    int b = 0, s = 0, c = 0;
    for(i = 0; i < re.size(); i++)
    {
        if(re[i]=='B')
            b++;
        if(re[i]=='C')
            c++;
        if(re[i]=='S')
            s++;
    }
    ll lo = 0, hi = inf, r;
    ll ans;
    while(lo<=hi)
    {
        ll mid = (lo+hi)>>1;
        //cout << mid << '\n';
        ll br = max(0LL, (mid*b)-nb);
        ll sa = max(0LL, (mid*s)-ns);
        ll ch = max(0LL, (mid*c)-nc);
        ll cost = max(0LL, (br*pb)+(sa*ps)+(ch*pc));
        //cout << cost << '\n';
        if(cost==ruble)
        {
            ans = mid;
            break;
        }
        else if(cost < ruble) ans = mid, lo = mid+1;
        else hi = mid-1;
    }
    cout << ans << '\n';
    return 0;
}
