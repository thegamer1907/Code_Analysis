#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const ll N = 1e5 + 5, INF = 2e18;
string a, s[105], sr;
ll n;
int main()
{
    cin >> a >> n;
    for ( int i = 1; i <= n; i ++ ){
        cin >> s[i];
    }
    if ( n == 1 ){
        if ( a == s[1] ){
            cout << "YES";
            return 0;
        }
    }
    for ( int i = 1; i <= n; i ++ ){
        for ( int j = 1; j <= n; j ++ ){
                if ( a == s[j] ){
                    cout << "YES";
                    return 0;
                }
                string ans, x, y;
                x = s[i][1], y = s[j][0];
                ans = x + y;
                ///cout << ans << endl;
                if ( ans == a ){
                    cout << "YES";
                    return 0;
                }
        }
    }
    cout << "NO";
}
