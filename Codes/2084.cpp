#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 2e5 + 1000;
map<ll, ll> mp, mp2;
ll arr[MAXN], ans = 0;

int main(){
    ll n, k;    cin >> n >> k;
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i < n; i++){
        if (arr[i] % (k * k) == 0)
            ans += mp2[arr[i] / k];
        
        if (arr[i] % k == 0)
            mp2[arr[i]] += mp[arr[i]/k];
        
        mp[arr[i]]++;
    }
    return cout << ans << endl ,0;
}