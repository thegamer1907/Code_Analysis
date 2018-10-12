#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n,m;
    cin >> n >> m;
    ll arr[n];
    ll maxm=0;
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
        maxm=max(maxm,arr[i]);
    }
    ll ex=0;
    for(ll i=0;i<n;i++)
    {
        ex+=maxm-arr[i];
    }
    ll r=ex;
    if(ex>=m)
    {
        cout << maxm << " ";
    }
    else 
    {
        ex=m-ex;
        ex=ceil(ex*1.0/n);
        cout << maxm + ex << " ";
    }
    cout << maxm+m << endl;
    return 0;
}
