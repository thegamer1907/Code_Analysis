#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAX_SIZE = 5e5 + 10;
ll arr[MAX_SIZE], prefix[MAX_SIZE];

map<ll, ll> cnt;
int main()
{
    int n;
    cin >> n;
    prefix[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i]; 
        if(cnt.find(prefix[i]) == cnt.end())
            cnt[prefix[i]] = 0;
        cnt[prefix[i]] += 1;
    }
    
    ll sum = prefix[n];

    if(sum % 3 != 0)
    {
        cout << 0;
        return 0;
    }

    ll one = sum / 3;
    ll two = 2 * one;
    ll done  = 0;
    ll ans  = 0;
    for(int i = 1; i <= n - 1; i++)
    {
        if(prefix[i] == two)
            done += 1;

        if(prefix[i] == one)
            ans += cnt[two] - done;
    }
    if(one == 0)
       ans =  ((cnt[one] - 1) * (cnt[one] - 2)) / 2;
    cout << ans << endl;
    return 0;
}

