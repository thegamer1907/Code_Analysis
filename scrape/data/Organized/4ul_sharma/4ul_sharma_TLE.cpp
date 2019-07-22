//charulsharma57 || 4ul_sharma
#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define lli  long long int
#define in(a,n) lli a[n];for(lli i=0;i<n;i++)cin>>a[i];
#define print(a,n) for(lli i=0;i<n;i++)cout<<a[i]<<' ';br
#define br cout<<endl;
#define mod 1000000007
#define me(arr,l,n) memset(arr, l, n*sizeof(arr[0]))
#define rr 1000000000000
#define fs ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//transform(s.begin(), s.end(), s.begin(), ::tolower);
using namespace std;
/*#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;   
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>*/
/*long long int exp(long long int base, long long int power){ //exponentiation
    long long int  ans=1;
    while (power > 0) {
       if (power % 2) {
            ans = (ans * base) % mod;
       }
       base = (base * base) % mod;
       power /= 2;
    }
    return ans % mod;
}*/
vector< lli > p1;
bool prime[10000000 + 1];
void SieveOfEratosthenes(int n) 
{  
    memset(prime, true , sizeof(prime)); 
    prime[0] = false;
    prime[1] = false;
    for (int p=2; p*p<= n ; p++) 
    { 
       if( prime[p] ) 
        { 
          p1.pb( p );  
          for (int i = p * p; i<=n; i += p){
               prime[i] = false; 
          }
        } 
    }
}
int main(){
     fs
     lli n , i , j , k , m ;
     cin >> n >> m >> k;
     in( a , m );
     lli h = k , h1 = 0 , ans = 0;
     for( i = 0 ; i < m ; i++ ){
          ans++;
          h1 = 0;
          while( a[i] > h )
                 h += k;
          while( a[i] <= h && i < m ){
//               cout << a[i];br
               h1++;
               i++;
          }
          if( i < m )
              i--;
//          cout << "h=" << h;br
          h += h1;
     }
     cout << ans;
     return 0;
}