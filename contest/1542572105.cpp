#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double

using namespace std;

int main() {
    ios_base::sync_with_stdio( 0 );
#ifdef LOCAL
    freopen( "input.txt", "r", stdin );
    freopen( "output.txt", "w", stdout );
#endif // LOCAL
    string s;
    cin>>s;
    int n;
    cin>>n;
    int f = 0;
    int ss = 0;
    for ( int i = 0; i < n; i++ ) {
        string x;
        cin>>x;
        if ( x == s ) {
            cout<<"YES";
            return 0;
        }
        if ( x[0] == s[1] ) f = 1;
        if ( x[1] == s[0] ) ss = 1;
    }
    if ( ss == 1 && f == 1 ) {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
