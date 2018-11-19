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

  double h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;

  h = fmod(h * 5.0 + m / 60.0 + s / 3600.0, 60.0);
  m += (s / 60.0);
  t1 = fmod((t1 * 5.0), 60.0);
  t2 = fmod((t2 * 5.0), 60.0);

  if(t1 > t2) swap(t1, t2);

  bool f1, f2, f3;
  f1 = (t1 < h && h < t2);
  f2 = (t1 < m && m < t2);
  f3 = (t1 < s && s < t2);

  if((f1 && f2 && f3) || (!f1 && !f2 && !f3)) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
