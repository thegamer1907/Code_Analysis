#include <bits/stdc++.h>
using namespace std;
vector < string > v;
string s, sn, x, t, r;
int n, p;
int main()
{
    cin >> s;
    cin >> n;
    for ( int i = 1; i <= n; i++){  cin >> x; v.push_back(x); if ( x == s ) p = 1; }
    
    if ( p == 1) { cout << "YES" << endl; return 0;}

    for ( int i = 0; i < n ; i++){
        for ( int j = 0; j < n; j++){
            t = v[i]; r = v[j];
            if (t[1] == s[0] && r[0]==s[1]) { cout << "YES" << endl; return 0;}

        }
    }
    cout << "NO" << endl;
return 0;
}
