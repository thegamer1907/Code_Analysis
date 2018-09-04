#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
#define rep(i, start, end) for(int i = start; i < end; ++i)
#define per(i, start, end) for(int i = (int)start-1; i >= end; --i)
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()



int valid (int s, int n, int arr[], ll ans)
{
    priority_queue<ll, vector<ll>, greater<ll> > costs;
    rep(i, 0, n)
    {
        costs.push(arr[i] + (i+1)*ans);
    }
    ll minCost = 0;
    rep(i, 0, ans)
    {
        minCost = minCost + costs.top();
        costs.pop();
    }
    if (s >= minCost)
        return minCost;
    else
        return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
    int n, s;
    cin >> n >> s;
    int arr[100000];
    rep(i, 0, n)
    {
        cin >> arr[i]; // dont forget to i+1 as index
    }
    int st = 0, end = n;
    ll minCost = 0;
    while (st < end)
    {
        ll mid = st + (end - st + 1)/2;
        if (valid(s, n, arr, mid) != -1)
        {
            st = mid;
            minCost = valid(s, n, arr, mid);
        }
        else
            end = mid - 1;
    }
    cout << st << " " << minCost << endl;
    return 0;
}