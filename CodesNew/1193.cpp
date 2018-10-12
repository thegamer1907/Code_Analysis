#include<bits/stdc++.h>

using namespace std;

using ll = long long int;
using ull = unsigned long long int;
using dd = double;
using ldd = long double;

#define debug(x) cout << #x << " : " << x << '\n'
#define all(x) x.begin(), x.end()

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<ll> arr(n);
    ll mi = 1e18, th = 0;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
        arr[i] = max((ll)0, arr[i]-i);
    }
    for (int i = 0; i < n; ++i)
    {
        if (((arr[i] + n - 1) / n) * n + i < mi)
        {
            mi = ((arr[i] + n - 1) / n) * n + i;
            th = i;
        }
    }
    cout << th + 1;

}