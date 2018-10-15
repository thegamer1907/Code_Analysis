#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int n , q ;
ll  a , k  , com [200005] ,sum ;
bool valid (ll num) {
    if (com[num] >= sum ) return true ;
    return false ;
}
ll b_s (ll s , ll e) {
 while (s < e) {
    ll mid = s + (e - s) / 2 ;
    if (valid(mid)) e = mid;
    else s = mid + 1 ;
 }
 return s ;
}
int main()
{
    scanf("%d%d" , &n , &q) ;
    for (int i = 1 ;i <= n ;i++){
        scanf("%d" ,&a) ;
        com[i] = com[i-1]  + a  ;
    }
    for (int i = 0 ; i < q ; i++) {
        scanf("%lld" , & k) ;
        sum += k ;
        int id = b_s(0,n) ;
        if (com[id] > sum) id -- ;
        if (id == n){sum = 0; id = 0 ;}
      printf("%d\n" , n - id) ;
    }
}