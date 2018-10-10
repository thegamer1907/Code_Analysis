#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int val, pair <int, int> p)
{
    return p.first > val;
}
bool cmp1(pair <int, int> p, int val)
{
    return p.first < val;
}
int main()
{
    int n, d;
    cin >> n >> d;
    vector < pair <int, int> > a(n + 1);
    vector <long long> pr(n + 1);
    a[0].first = -1;
    for(int i = 1; i <= n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    for(int i = 1; i <= n; i++)
        pr[i] = pr[i - 1] + a[i].second;
    long long ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int l = lower_bound(a.begin(), a.end(), a[i].first, cmp1) - a.begin();
        int r = upper_bound(a.begin(), a.end(), a[i].first + d - 1, cmp) - a.begin();
        //cout << a[i].first << " " << a[i].second << " " << l << " " << r << endl;
        ans = max(ans, pr[r - 1] - pr[l - 1]);
    }
    cout << ans;
}
