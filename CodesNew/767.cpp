#include<bits/stdc++.h>                     
    
#define ll long long
#define Add_Speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pb push_back
#define dl pop_back
#define mp make_pair
#define f first
#define sz size()
#define s second
#define pii pair<int, int>
#define all(s) s.begin(), s.end()
#define file(s) freopen(s".in","r",stdin); freopen(s".out","w",stdout);
#define ins insert
//#define int ll

using namespace std;
    
const int maxn = (int)1e6 + 200;
const int minn = (int)5e2 + 10;
const int maxlog = 22;
const int mod = (int)1e9 + 7;                                                                                                                                   
const int P = mod;    

int n, m, x1, x2;
vector<string>v, g;
map<string, int>used;

main () {

  cin >> n >> m;
  for(int i = 1; i <= n; i++){
    string s;
    cin >> s;
    v.pb(s);
    used[s]++;
  }
  for(int i = 1; i <= m; i++){
    string s;
    cin >> s;
    g.pb(s);
    used[s]++;
  }
  for(int i = 0; i < v.sz; i++){
    if(used[v[i]] == 2)
    x1++;  
  }
  for(int i = 0; i < g.sz; i++){
    if(used[g[i]] == 2)
    x2++;  
  }
  int d = 0;
  while(1){
    if(d == 0){
      if(n == 0){
        cout << "NO";
        return 0;
      }
      if(x1 > 0){
        x1--, x2--, n--, m--;
      }
      else{
        x1--, n--;
      }
      d = 1;
    }
    else{
      if(m == 0){
        cout << "YES";
        return 0;
      }
      if(x1 > 0){
        x1--, x2--, n--, m--;
      }
      else{
        x2--, m--;
      }
      d = 0;
    }  
  }
} 
