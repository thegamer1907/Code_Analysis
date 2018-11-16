#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define mod 1000000007
using namespace std;
#define int long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(arr) arr.begin() , arr.end()
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i , a , n) for(int i = a ; i < n ; i++)
#define ms(arr , val) memset(arr , 0 , sizeof(arr))
#define siz(temp) temp.size()
#define len(temp) temp.length()
#define timepass 1073741824
#define MAXN 200005

ll gcd(ll a , ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a , a);
}
int dx[] = {0 , 1 , 0 , -1};
int dy[] = {1 , 0 , -1 , 0};

bool check(int i , int j , int n , int m)
{
    return (i >=0 && j >= 0 && i < n && j < m);
}
bool func (pair<int , int> &a , pair<int , int> &b)
{
    return a.s > b.s;
}
string tol(string &a)
{
    rep(i , 0 , a.length())
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] + 32;
    }
    return a;
}
signed main()
{
    FAST;
    int n,q;
    cin >> n >> q;
    vector<int> arr(n , 0);
    vector<int> ans(n , 0);
    rep(i , 0 , n)
        cin >> arr[i];
    unordered_set<int> s;
    for (int i = n - 1 ; i >= 0 ; i--)
    {
        s.insert(arr[i]);
        ans[i] = s.size();
    }
    while(q--)
    {
        int x;
        cin >> x;
        cout << ans[x - 1] << endl;
    }
    return 0;
}