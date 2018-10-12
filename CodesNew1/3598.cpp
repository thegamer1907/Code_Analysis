#include <bits/stdc++.h>
typedef long ll;
using namespace std;


int main()
{
    ios::sync_with_stdio(false) ;

    int n , m ;
    cin >> n >> m ;

    multiset < int > se ;

    for(int i = 0 ; i < n ; i++){
         int x; cin >> x;
         se.insert(x) ;
    }

    int res1 = 0 , res2 = *se.rbegin() + m ;

    while(m--){
          int x = *se.begin() ;
          se.erase(se.begin()) ;
          se.insert(x + 1) ;
    }

    res1 = *se.rbegin() ;

    cout << res1 << " " << res2 << endl ;

    return 0;
}
