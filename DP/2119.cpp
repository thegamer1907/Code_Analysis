//ThE.EnD.AnD.ThE.BeGiNiNg ;
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10 ;
int n,m,dp[N],a[N];
set<int> s ;

int main() {
    cin >> n >> m ;
    for ( int i=0 ; i<n ; i++ ){
        cin >> a[i] ;
    }
    for ( int i=n-1 ; i>=0 ; i-- ){
        s.insert(a[i]) ;
        dp[i] = s.size() ;
    }
    for ( int i=0 ; i<m ; i++ ){
        int l ;
        cin >> l ;
        cout << dp[l-1] << '\n' ;
    }
    return 0 ;
}
