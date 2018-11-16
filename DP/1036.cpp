#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(arr) arr.begin() , arr.end()
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i , a , n) for(int i = a ; i < n ; i++)
#define ms(arr , val) memset(arr , 0 , sizeof(arr))
#define siz(temp) temp.size()
#define len(temp) temp.length()
#define timepass 1073741824
#define int ll

signed main()
{
    FAST;
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i , 0 , n)
    {
        cin >> arr[i];
        if (i != 0)
            arr[i] += arr[i - 1];
    }
    int ans = 0;
    for (int i = 0 ; i < n ; i++)
    {
        for(int j = i ; j < n ; j++)
        {
            //ans = arr[n - 1];
            int o = arr[j];
            if (i)
                o -= arr[i - 1];
            int z = j - i + 1 - o;
            ans = max(arr[n - 1] - o + z , ans);
        }
    }
    cout << ans << endl;
    return 0;
}
