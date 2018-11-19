#include <bits/stdc++.h>
using namespace std;

#define rep(a, b, c) for(int a = (b); a < (c); a++)
#define all(v) v.begin(), v.end()

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int inf = 1e9, mod = 1e9+7;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  bool ans = 0;
  string pw;
  cin >> pw >> n;
  vector<string> vs(n);
  rep(i, 0, n) cin >> vs[i];
  rep(i, 0, n)
  	rep(j, 0, n) {
  		string s = vs[i] + vs[j];
  		if (s.substr(0, 2) == pw || s.substr(1, 2) == pw)
  			ans = 1;
  	}

  cout << (ans ? "YES" : "NO") << endl;

  
  return 0;
}