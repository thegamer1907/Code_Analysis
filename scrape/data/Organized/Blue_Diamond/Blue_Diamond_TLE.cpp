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
    ll t = k;
    for(ll i = 0;i < m;++i) {
        ll tt = ceil((double)(nums[i] - i) / (double)k);
        ll cover = tt * k + i, j;
        //cout << cover << endl;
        for(j = i;j < m;++j) {
            if(nums[j] > cover) {
                cnt++;
                if(nums[j] > cover) break;
            }
        }
        i = j - 1;
    }
    cout << cnt + 1 << endl;
}