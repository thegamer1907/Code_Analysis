#include <bits/stdc++.h>
using namespace std;
int main(){

    string p, s; cin >> p;
    int n, idl = -1, idr = -1, a = 0, b = 0 ; cin >> n;
    bool r = 0;
    for( int i = 0 ; i < n ; ++i ){
        cin >> s;
        if( s == p ){
            r = 1;
        }
        if( s[0] == p[1] ){
            idr = i;
            b++;
        }
        if( s[1] == p[0] ){
            idl = i;
            ++a;
        }
    }
    if( r || ( idl != -1 && idr != -1 ) ){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}
