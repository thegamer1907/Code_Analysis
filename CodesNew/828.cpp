//BRR
#include <bits/stdc++.h>

#define fi first
#define sc scanf
#define pf printf
#define se second
#define ll long long
#define pb push_back
#define pr pair< ll,pair<ll,ll> >
#define fin(s) freopen( s, "r", stdin )
#define fout(s) freopen( s, "w", stdout )
#define TIME ios_base::sync_with_stdio(0)
using namespace std;

const ll INF = 1e9;
const ll N = 1e5 + 1;
const ll mod = 1e9 + 7;
const long double eps = 1E-7;

using namespace std;
bool used[100001];
map <string , bool > mp;
pair <int,int> p[10001];
void solve(){
     int n, m, ct = 0, c, k;
     string s;
     bool turnP = false;
     cin >> n >> m;
     if( n > m ){
         cout << "YES\n" << endl;
         return ;
     }
     if( n < m ){
         cout << "NO\n" << endl;
         return ;
     }
     for(int i=0; i<n; ++i){
          cin >> s;
          mp[s] = true;
     }
     for(int i=0; i<m; ++i){
          cin >> s;
          if(mp[s]){
             if(!turnP)
                 ct++, turnP = true;
             else
                 ct--, turnP = false;
          }
     }
     if(!ct){
         cout << "NO\n" ;
         return ;
     }else{
         cout << "YES\n";
         return ;
     }
}
bool mtest = false;
int main(){
    TIME;
    int TE = 1;
    if(mtest)
        cin >> TE;
    while(TE--)
        solve();
    return 0;
}
