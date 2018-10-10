#include <bits/stdc++.h>
typedef long long ll ;
using namespace std;


int main() {

    ios::sync_with_stdio(false);

    int n ; cin >> n ;

    int mn = INT_MAX ;

    vector < int > ve;

    for(int i = 0 ; i < n ; i++){
          int x ; cin >> x;
          if(x < i + 1){
               cout << i + 1 << endl ;
               return 0 ;
          }
          ve.push_back(x);
          mn = min(mn , x);
    }
    for(int i = 0 ; i < n ; i++){
           ve[i] -= mn ;
    }
    int idx = mn % n ;

    int res = 0 ;
    for(int i = idx ; i < n ; i++ , i %= n){
          if(ve[i] - res <= 0){
               cout << i + 1 << endl ;
               return 0 ;
          }
          res ++ ;
    }






    return 0;
}
