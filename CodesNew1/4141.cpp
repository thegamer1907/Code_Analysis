#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, q;
    cin>>n>>q;
    ll a[n], pre[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    pre[0] = a[0];
    for(ll i=1; i<n; i++)
        pre[i] = a[i] + pre[i-1];
    ll temp = 0;
    while(q--)
    {
        ll x;
        cin>>x;
        ll idx = upper_bound(pre, pre+n, x+temp) - pre;
        temp += x;
        if(idx == n)
        {
            cout<<n<<endl;
            temp = 0;
        }
        else
        {
            cout<<n-idx<<endl;
        }
    }
    return 0;
}
