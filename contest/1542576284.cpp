#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, t;
vector <ll> b(4);
vector < vector <ll> > a(100500, b);
vector <ll> znach(200, 0);

bool good(ll a, ll b)
{
    for(ll i=0; i<4; i++)
    {
        ll r1 = a%2;
        ll r2 = b%2;
        if (r1 > 0 && r2>0) return false;
        a/=2;
        b/=2;
    }
    return true;
}
int main()
{
    //freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>t;
    ll i,j;
    for(i=0; i<n; i++)
    {
        ll sum = 0;
        for(j=0; j<t; j++)
        {
            cin>>a[i][j];
            sum+=a[i][j];
        }
        if (sum == 0)
        {
            cout<<"YES";
            return 0;
        }
    }
    if (n == 1)
    {
        cout<<"NO";
        return 0;
    }

    if (t == 2)
    {
        bool f1 = false, f2 = false;
        for(i=0; i<n; i++)
        {
            if (a[i][0] == 0 && a[i][1] == 1) f1 = true;
            if (a[i][0] == 1 && a[i][1] == 0) f2 = true;
        }
        if (f1 && f2)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
        return 0;
    }

    for(i=0; i<n; i++)
    {
       ll v = 0;
       v+=a[i][0];
       v+=a[i][1] * 2;
       v+=a[i][2] * 4;
       if (t == 4)
        v+=a[i][3] * 8;
       znach[v]++;
    }

    for(i=0; i<20; i++)
    {
        if (znach[i] == 0) continue;
        else
        {
            ll start;
            if (znach[i] == 1)
                start = i;
            else
                start = i + 1;
            for(j=start; j<20; j++)
            {
                if (znach[j] == 0) continue;
                else
                    if (good(i,j))
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
    return 0;

}