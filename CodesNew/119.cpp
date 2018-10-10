#include <bits/stdc++.h>

#define MOD 1000000007
#define MOD2 100000007
#define endl '\n'
#define PI 2*acos(0.0)

using namespace std;
typedef long long int ll;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,l;
    cin>>n>>l;
    ll a[n];

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    ll b[n-1];
    long double u;
    if(n==1)
    {
        u = 2*max(a[0],l-a[0]);
    }
    else{

    for (int i = 0; i < n-1; ++i)
    {
        b[i] = (a[i+1] - a[i]);
    }

    sort(b,b+n-1);
    ll s;
    s = max(b[n-2],2*(l-a[n-1]));
    s = max(s, 2*a[0]);
    u = s;
    }
    u/=2;
    printf("%.10Lf",u);
}

