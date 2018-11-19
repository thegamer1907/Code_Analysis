#include<bits/stdc++.h>
#define fi first
#define fin  freopen("input.txt","r",stdin);
#define fout freopen("output.txt","w",stdout);
#define ll long long
#define pb push_back
#define pf push_front
#define se second
#define time ios_base::sync_with_stdio(0);
using namespace std;
const ll INF = 1e9 + 1;
const ll N = 1e5 + 7;
const ll mod = 1e8 ;
const long double eps = 1E-7 ;
string s , a ;
int n , cnt , lnt ;
void solve()
{
   cin >> s >> n ;
   for ( int i = 1 ; i <= n ; i++ )
   {
       cin >> a ;
       if ( a[0] == s[1] )
           cnt = 5 ;
       if ( a[1] == s[0] )
           lnt = 5 ;
       if ( a == s )
       {
           cout << "YES" ;
           return ;
       }
   }
   if ( cnt + lnt == 10)
      cout << "YES" ;
   else
      cout << "NO" ;
}
bool mtest = false ; int main()
{
    time ;
    int TE = 1 ;
    if ( mtest )
        scanf("%d" , TE) ;
    while ( TE-- )
        solve() ;
    cerr << "\n" << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
