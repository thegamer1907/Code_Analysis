#include <iostream>
#include <string>
#include <vector>
using namespace std;
string n, c;
vector < string > ans;
int main () {
    cin >> n;

    for ( ; ; ) {
        c.clear();
        bool b = 0;
        for ( int i = 0 ; i < n.size() ; i ++ ) {
            if ( n[i] != '0' ) { b = 1; n[i] --; c += '1'; }
            else if ( b ) { c += '0'; }
        }
        if ( !b ) { break; }
        ans.push_back( c );
    }
    cout << ans.size() << "\n";
    for ( int i = 0 ; i < ans.size() ; i ++ ) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}
