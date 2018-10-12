// IN THE NAME OF GOD
// O30 Takdast bia     hal bimax bia
// ba ye darbast bia   ba barobax bia
// sari o fast bia     hal barax bia
// ...
// mn mesle ye havijam       mashang o gav o gijam
// mn mesle ye shalghamam    sholo velo bi ghamam
// mn mesle ye khargoosham   choob mikonam to goOosham

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

#define PB push_back
#define PP pop_back
#define F first
#define S second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define I insert
#define E erase
#define B back
#define smin(a,b) a=min(a,b)
#define smax(a,b) a=max(a,b)
#define vll vector<ll> 

const int MAXN = 1e5 + 100;
const int N = 1e6 + 100;
const ll mod = 1e9 + 7;
const ll hashh = 311;
const ll INF = 1e18;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll sum = 0;
    int n, m;
    cin >> n >> m;
    vll v;
    for (int i = 0;i<n; i++)
    {
        ll x;
        cin >> x;
        sum+=x;
        v.PB(sum);
    }
    ll a = 0;
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        a += x;
        if (a >= v[v.size()-1])
        {
            cout << n << "\n";
            a = 0;
            continue;
        }
        if (a<v[0])
        {
            cout << n << "\n";
            continue;
        }
        ll l = -1;
        ll r = n;
        while (r-l>1)
        {
            ll mid = (r+l)/2;
            if (v[mid] > a)
                r = mid;
            else
                l = mid;
        }
        cout << n-r << "\n";
    }
}