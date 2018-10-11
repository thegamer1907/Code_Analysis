// in the name of god ;

#include <bits/stdc++.h>

using namespace std ;

typedef long long ll ;

#define X first
#define Y second

const int maxn = 1000000 + 100 ;
const int inf = 1<<30;
const int maxL = 30 ;

int n, m, cnt;
map<string,bool> m1, m2;

string s;

int main() {
  ios_base::sync_with_stdio ( false ) ;
  cin >> n >> m;
  for(int i = 0 ; i < n ; ++ i){
    cin >> s;
    m1[s] = true;
  }
  for(int i = 0 ; i < m ; ++ i){
    cin >> s;
    m2[s] = true;
    if(m1[s])
      cnt ++;
  }
  if(n > m){
    cout << "YES" << endl;
  }
  else
    if(m > n){
      cout << "NO" << endl;
    }
    else{
      if(cnt % 2){
        cout << "YES" << endl;
      }
      else{
        cout << "NO" << endl;
      }
    }
  return 0 ;
}
