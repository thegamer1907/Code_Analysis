#include <bits/stdc++.h>
#define f first
#define s second
#define ll long long
#define mk make_pair
#define pb push_back
#define pp pop_back
using namespace std ;
const int N = 1e6 ; 
vector<int> v ; 
pair<int,char> p[3] ; 
ll n , m , mx , sum , ar[N] , x  ; 
map<char,int>mp ; 

int main () 
{
    cin >> n >> m ; 
    for ( int i = 0 ; i < n ; ++i ) 
    {
        cin >> ar[i] ; 
    }
    ll l = 0 , r = 0 ;
    for ( ; r < n ; ++r)
    {
        sum = sum + ar[r] ; 
        if ( sum > m ) 
        {
            sum = sum - ar[l] ; 
            l++;
        }
        else 
        {
            mx = max(r-l+1,mx) ;
        }
    }
    cout << mx ; 
}