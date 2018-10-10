#include <bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;
ll n;
string s;
ll pre[1000006];
ll suf[1000006];
ll B;
vector<ll> v;
ll E;
ll modularExponentiation(ll x,ll nn,ll M)
{
    ll result=1;
    while(nn>0)
    {
        if(nn % 2 ==1)
            result=(result * x)%M;
        x=(x*x)%M;
        nn=nn/2;
    }
    return result;
}
bool check(ll len)
{
        ll req_hash = pre[len];
        if(1 + len >= n) return false;
        ll hsh = 0;
        E = modularExponentiation(B , len -1, MOD);
        for(ll i=2;i<=1+len;i++)
        {
                hsh = (hsh * B)%MOD;
                hsh += (s[i] - 'a');
        }
        if(hsh == req_hash) return true;

        for(ll i=3;i + len - 1 < n;i++)
        {
                hsh = ((hsh - ((s[i-1] - 'a')*E)%MOD)%MOD + MOD)%MOD;
                hsh = (hsh * B)%MOD;
                hsh = (hsh + (s[i + len - 1] - 'a'))%MOD;
                if(hsh == req_hash) return true;
        }

        return false;
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        B = 29;
        cin >> s;
        n = s.length();
        s = "#" + s;
        pre[1] = (s[1] - 'a');
        for(ll i=2;i<=n;i++)
        {
                pre[i] = ((pre[i-1] * B)%MOD + (s[i] - 'a'))%MOD;
        }
        //suf[n] = (s[n] - 'a');
        ll powa = n - 1;
        suf[1] = pre[n];
        for(ll i=2;i<=n;i++)
        {
                ll e = modularExponentiation(B , powa, MOD);
                suf[i] = ((suf[i-1] - ((s[i-1] - 'a')*e)%MOD)%MOD + MOD)%MOD;
                powa--;
        }
        for(ll i=1;i<=n;i++)
        {
                if(pre[i] == suf[n + 1 - i])
                {


                        v.push_back(i);
                }
        }
       /* for(ll i=1;i<=n;i++)
        {
                cout << pre[i] << "  " << suf[n + 1 - i] << endl;
        }
        */
        sort(v.begin(), v.end());
        ll lo = 0;
        ll hi = v.size() - 1;
        //cout << hi << "   " << lo << endl;
        while(hi > lo)
        {
                ll mid = lo + (hi - lo + 1)/2;
                if(check(v[mid])) lo = mid;
                else hi = mid - 1;
                //cout << hi << " " << lo << endl;
        }
        //for(auto i : v) cout << i << " "; return 0;
        //cout << hi << endl;
        if(!check(v[hi]))
        {
                cout << "Just a legend\n"; return 0;
        }
        for(ll i=1;i<=v[hi];i++) cout << s[i];
        return 0;
}
