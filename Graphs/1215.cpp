#include <bits/stdc++.h>
#define pb push_back
#define fr first
#define se second
#define ll long long

    using namespace std;

    string s, sr = "hello";
    set<char>se, st;
    vector<int>v, vc;
    map<string,int>mp;
    ll d[1000001];
    ll a[1000001];
    char c;
    ll n, m, k, r, x = 1, y, z, l = 4, cnt = 1, ans;

int main()
{
    ios_base::sync_with_stdio(0);
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
