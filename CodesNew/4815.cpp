#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n , ans = 0 , n2 = 0;
   cin >> n;
   int a[n+1] ;
   n2 = n  ;
   for (int i = 1 ; i <= n ;i++){ cin >> a[i] ; }
   sort (a + 1, a + n +1) ; 
    for (int i = n / 2 ; i >=1  ; i--){
    if (a[i]*2 <= a[n2] ){n2 -- ; ans++ ;}
   }
   cout << (n - ans * 2 ) + ans << endl;
}