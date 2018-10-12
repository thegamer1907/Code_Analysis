#include <bits/stdc++.h>
#define pb push_back
#define fr first
#define se second

    using namespace std;

    string s, sr;
    set<char>se, st;
    vector<int>v;
    map<string,int>mp;
    int a[1000001], d[1000001];
    char c;
    long long n, m, k, r, l = 999999999, cnt, ans;

    bool can ( int m ){
        for ( int i = 1; i <= n - m + 1; i ++ ){
            int r = i + m - 1, l = i;
            int cnt = d[r] - d[ l - 1 ];
            if ( cnt <= k )
                return true;
        }
        return false;
    }

int main()
{
    cin >> n >> k;
    for ( int i = 1; i <= n; i ++ ){
        cin >> a[i];
    }
    int sum = 0;
    for ( int i = 1; i <= n; i ++ ){
        sum += a[i];
        d[i] += sum;
    }
    l = 0, r = n;
    while ( l < r ){
        m = ( l + r ) / 2;
        if ( can( m + 1 ) == true )
            l = m + 1;
        else
            r = m;
    }
    cout << l;
}
