#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;

const int Nmax = 1e7 + 10  ;
int cnt[Nmax] , pre[Nmax];
bitset < Nmax > isprime ;
int n ;

void sieve()
{
      isprime.set() ;
      isprime[0] = isprime[1] = 0 ;
      for(int i = 2 ; i <= Nmax ; i++){
        if(isprime[i]){
          for(int j = i  ; j <= Nmax ; j += i) pre[i] += cnt[j] , isprime[j] = false ;
        }
      }
}

int main()
{
    ios::sync_with_stdio(false);

    cin >> n ;
    for(int i = 0 ; i < n ; i++){
           int x ; cin >> x ;
           cnt[x] ++ ;
    }

    sieve() ;

    for(int i = 1 ; i <= Nmax ; i++) pre[i] += pre[i - 1] ;

    int m ; cin >> m ;

    while(m--){
         int l , r ;
         cin >> l >> r ;
         l = min(l , Nmax);
         r = min(r , Nmax);
         cout << pre[r] - pre[l - 1] << endl ;
    }

    return 0;
}
