#include <bits/stdc++.h>
#define ll long long int
#define adi() ios::sync_with_stdio(false); cin.tie(0)
using namespace std;
int main()
{
    adi();
    ll n, k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++) cin>>arr[i];

    if(arr[0]==0) cout<<0<<endl;
    else{
    ll hol = arr[k-1];
    sort(arr.begin(), arr.end());
    ll lwr = lower_bound(arr.begin(), arr.end(), hol)-arr.begin();
    ll upr = upper_bound(arr.begin(), arr.end(), hol)-arr.begin();
    if(arr[lwr]==0) cout<<n-upr<<endl;
    else cout<<n-lwr<<endl;
    }
    return 0;
}
