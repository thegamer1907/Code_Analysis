#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t,i;
    cin>>n>>t;
    ll a[n+5];
    ll trans [n+5] = {0};
    for (i=1;i<n;i++)
    {cin>>a[i];
     trans[i] = i + a[i];
    }
    ll pos = 1;
    i = 1;
    ll reached[n+5] ={0};
    reached[1] = 1;
    while (trans[i])
    {
     pos = trans[i];
     i = pos;
     reached[pos] = 1;
    }
    if (reached[t])
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}