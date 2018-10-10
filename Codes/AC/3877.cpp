#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e3+5;
typedef long long ll;
int nB, nS, nC, hB, hS, hC, pB, pS, pC;
char str[maxn];
ll m;

bool judge(ll x)
{
    ll b = x*nB;
    ll s = x*nS;
    ll c = x*nC;
    ll tmp = 0;
    if(b > hB) tmp += pB*(b-hB);
    if(s > hS) tmp += pS*(s-hS);
    if(c > hC) tmp += pC*(c-hC);
    return m >= tmp;
}

int main(void)
{
    while(cin >> str)
    {
        int len = strlen(str);
        nB = nS = nC = 0;
        for(int i = 0; i < len; i++)
        {
            if(str[i] == 'B') nB++;
            if(str[i] == 'S') nS++;
            if(str[i] == 'C') nC++;
        }
        scanf("%d%d%d %d%d%d %I64d", &hB, &hS, &hC, &pB, &pS, &pC, &m);
        ll l = 0, r = 1e13, ans = 0;
        while(l <= r)
        {
            ll mid =(l+r)/2;
            if(judge(mid)) ans = mid, l = mid+1;
            else r = mid-1;
        }
        printf("%I64d\n", ans);
    }
    return 0;
}
