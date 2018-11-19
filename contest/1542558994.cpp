#include <bits/stdc++.h>

using namespace std;

bool f[50], l[50];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("dat.txt","r",stdin);

    string s; cin >> s;

    int n; cin >> n;

    bool ok = false;

    while( n-- ){
        string x; cin >> x;
        f[ x[0] - 'a' ] = true;
        l[ x[1] - 'a' ] = true;

        ok |= (x == s);
    }

    ok |= ( l[ s[0] - 'a' ] && f[ s[1] - 'a' ]);

    if( ok ){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
