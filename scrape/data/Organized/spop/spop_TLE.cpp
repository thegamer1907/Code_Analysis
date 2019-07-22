#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define ff first
#define ss second
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<db, db> pdd;
typedef vector<int> vi;
#define m1 make_pair
#define in insert
#define pb push_back
#define IOS                           \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"
inline ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
inline ll power(ll a, ll n, ll m)
{
    if (n == 0)
        return 1;
    ll p = power(a, n / 2, m);
    p = (p * p) % m;
    if (n % 2)
        return (p * a) % m;
    else
        return p;
}
const ll MOD = 998244353;
const int N = int(3e5) + 999;
#define int long long int

int32_t main()
{
    IOS;
    int n, m, k;
    cin >> n >> m >> k;
    int arr[m];
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    int offset = 0;
    int tot = 0;
    int del = 0;
    vector<int> st;
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        tot = arr[i] - del - offset;
        //cout<<offset<<" "<<i<<" "<<arr[i]<<" " <<tot<<endl;
        assert(tot>=0);
        if (tot == k)
        {
            ans++;
            del+=st.size()+1;
            st.clear();
        }
        else if (tot < k)
        {
            st.pb(arr[i]);
        }
        else
        {
            if (tot - k <= st.size())
            {
                if (st.size())
                    ans++;
                del += st.size();
                st.clear();
                i--;
            }
            else
            {
                if (st.size())
                    ans++;
                del+=st.size();
                offset = k * ((tot - st.size()) / k);
                st.clear();
                del = 0;
                i--;
            }
        }
    }
    if (st.size())
        ans++;
    cout << ans;
}