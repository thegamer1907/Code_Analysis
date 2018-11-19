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

  int n, m;
  cin >> n >> m;

  set<int> st;
  rep(i, 0, n) {
    int k = 0;
    rep(j, 0, m){
      int kn;
      cin >> kn;
      k |= kn << j;
    }
    st.insert(k);
  }

  bool works = 0;
  for (auto k : st){
    int inv = k ^ 15;
    rep (i, 0, 16) {
      int kp = inv & i;
      works |= st.count(kp);
    }
  }
  
  cout << (works ? "YES" : "NO") << endl;

  return 0;
}