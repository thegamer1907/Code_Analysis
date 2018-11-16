#include <bits/stdc++.h>
#define f first
#define s second
#define ll long long
#define mk make_pair
#define pb push_back
#define pp pop_back
using namespace std ;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
const int N = 1e3 + 10  ; 
vector<int> v[N] ;  
int a , b , c , d; 
pair<int,int> p[N] ; 
map<int,int> mp ;
string s ;
int main () 
{
    cin >> s ; 
    
     a = s.find("AB") ; 
     b = s.find("BA",a+2) ; 
     c = s.find("BA") ; 
     d = s.find("AB",c+2) ;
    if ( a != -1 && b != -1 )
    {
        cout <<"YES" ;
        return 0 ; 
    }
    if ( c != -1  && d != -1  ) 
    {
        cout <<"YES" ;
        return 0 ; 
    }
    cout <<"NO" ;  
}