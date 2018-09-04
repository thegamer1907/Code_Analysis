#include <bits/stdc++.h>

using namespace std;

using ll = long long int;
using ull = unsigned long long int;
using dd = double;
using ldd = long double;
using si = short int;
using ui = unsigned int;

#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second

//debug defines
#define OL cout << "Oliva" << endl;
#define PO cout << "Pomelo" << endl;
#define debug_v(x) cout << #x << " : "; for (auto ioi : x) cout << ioi << " "; cout << '\n';
#define debug(x) cout << #x << " : " << x << '\n';
//end of debug defines

#define int ll

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int l = 0, r = n - 1;
    int ans = 0;
    int ls = arr[0], rs = arr.back();
    while (r > l)
    {
        if (ls == rs)
            ans = ls;
        if (rs > ls)
        {
            ++l;
            ls += arr[l];
        }
        else
        {
            --r;
            rs += arr[r];
        }
    }
    cout << ans << endl;
}
