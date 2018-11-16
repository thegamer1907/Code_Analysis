#include <bits/stdc++.h>

using namespace std ;

int ans ;
int sum[100*100*100] ;

int main () {
    string s ;
    int t ;
    cin >> s ;
    cin >> t ;
    for(int i = 1 ; i < s.size() ; i++ ) {
        sum[i] = sum[i-1] + (s[i] == s[i-1]) ;
    }
    for(int i = 0 ; i < t ; i++ ) {
        int a , b;
        cin >> a >> b ;
        a-- ;
        b-- ;
        cout << sum[b] - sum[a] << '\n' ;
    }
}