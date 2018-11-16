#include <bits/stdc++.h>
#define pb push_back
#define fr first
#define se second
#define ll long long
#define TIME ios_base::sync_with_stdio(0)

    using namespace std;

    ll a[1000001];
    ll n, m, ans;

int main()
{
    TIME;
    cin >> n >> m;
    for ( int i = 1; i < n; i ++ ){
        cin >> a[i];
    }
    for ( int i = 1; i < n; i += a[i] ){
        ans = i + a[i];
        if ( m == ans ){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
