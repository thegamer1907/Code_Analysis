/*********** [ AkJn ] ***********/
#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define pb push_back
#define ll long long
#define fr(i,n) for(ll i=0; i<n; i++)
#define fre(i,n) for(ll i=1; i<=n; i++)

ll int atMostSum(ll int arr[], ll int n, ll int k)
{
    ll int sum = 0;
    ll int cnt = 0, maxcnt = 0;

    for (ll int i = 0; i < n; i++) {
        
        // If adding current element doesn't
        // cross limit add it to current window
        if ((sum + arr[i]) <= k) {
            sum += arr[i]; 
            cnt++;
        } 

        // Else, remove first element of current
        // window and add the current element
        else if(sum!=0)
        {
            sum = sum - arr[i - cnt] + arr[i];
        }

        // keep track of max length.
        maxcnt = max(cnt, maxcnt); 
    }
    return maxcnt;
}

int main()
{
    fast

    ll int n, t;
    cin >> n;
    cin >> t;
    ll int a[n];

    for (ll int i = 0; i < n; ++i)
    {
      cin >> a[i];
    }

    cout << atMostSum(a, n, t);

    return 0;
}








