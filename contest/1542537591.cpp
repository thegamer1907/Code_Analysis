#include <bits/stdc++.h>
typedef long long ll ;
using namespace std;


bool b[30];

int main()
{
    ios::sync_with_stdio(false);

    int n , k ;
    cin >> n >> k ;

    for(int i = 0 ; i < n ; i++){
        int mask = 0 ;
        for(int j = 0 ; j < k ; j++){
            bool x ;
            mask *= 2;
            cin >> x;
            mask += x;
        }
        b[mask] = true ;
    }

    bool ok = false ;
    for(int i = 0 ; i < (1 << k) ; i++)
        for(int j = 0 ; j < (1 << k) ; j++){
                if(i == j) continue ;
                if(b[i] == 0) continue ;
                if(b[j] == 0) continue ;
                if( (i ^ j) != (i + j) ) continue ;
                ok = true ;
        }

    cout << ( (ok || b[0]  )? "YES" : "NO") << endl ;

    return 0;
}
