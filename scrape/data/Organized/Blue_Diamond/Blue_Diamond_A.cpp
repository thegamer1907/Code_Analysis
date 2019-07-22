#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    
    vector<ll> nums(m);
    for(ll i = 0;i < m;++i) cin >> nums[i];
    
    ll cnt = 0;
    ll tt = ceil((double)(nums[0]) / (double)k);
    ll cover = tt * k, j;
    for(ll i = 0;i < m;++i) {
        if(nums[i] > cover) {
            cnt++;
            tt = ceil((double)(nums[i] - i) / (double)k);
            cover = tt * k + i;
        }
    }
    cout << cnt + 1 << endl;
}