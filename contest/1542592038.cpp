#include <bits/stdc++.h>
using namespace std;

#define REP(i,s,n) for(int i=s; i<n; ++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false

typedef long long ll;
typedef pair<int, int> ii;

int main(){

  string key;
  cin >> key;
  int n;
  cin >> n;
  vector<vector<bool>> check(2, vector<bool>(26, false));

  bool match = false;
  rep(i, n){
    string s;
    cin >> s;
    if(s == key) match = true;
    check[0][s[0] - 'a'] = true;
    check[1][s[1] - 'a'] = true;
  }

  if(match || (check[0][key[1] - 'a'] && check[1][key[0] - 'a'])) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
