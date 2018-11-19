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

  vector<pair<int, int> > v(5, {0, 2});
  rep(i, 0, 3)
  	cin >> v[i].first;
  cin >> v[3].first >> v[4].first;
  v[3].second = v[4].second = 1;


  int k = 5;
  v[0].first *= k, v[0].first %= 60;
  v[3].first *= k, v[3].first %= 60;
  v[4].first *= k, v[4].first %= 60;

  sort(all(v));
  //rep(i, 0, 5) cout << v[i].first << ": " << v[i].second << endl;

  bool works = 0;
  rep(i, 0, 5) {
  	if (v[i].second == 1 && v[(i+1)%v.size()].second == 1)
  		works = 1;
  }

  cout << (works ? "YES" : "NO") << endl;

  
  return 0;
}