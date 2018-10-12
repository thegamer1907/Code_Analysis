#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=double;
using pll=pair<ll,ll>;
using vll=vector<ll>;
using vpll=vector<pll>;
using vvll=vector<vll>;
#define FOR(i,a,b) for(ll i=a;i<(ll)b;++i)
#define ROF(i,a,b) for(ll i=a;i>=(ll)b;--i)
#define F(n) FOR(i,0,n)
#define FF(n) FOR(j,0,n)
#define aa first
#define bb second
#define PB push_back
#define EQ(a,b) (fabs(a-b)<=(fabs(a+b)*EPS))

int main(){
  ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
  int n;
  cin >> n;
  vector<string> a(n);
  F(n) cin >> a[i];

  for (int i = 1; i < n; ++ i) {
    if (i < 1) i = 1;

    if (a[i] < a[i - 1]) {
      int b = a[i].size();
      for (int j = 0; j < min(a[i].size(), a[i - 1].size()); ++ j) {
          if (a[i][j] < a[i - 1][j]) {
            b = j;
            break;
          }
      }
      while (a[i - 1].size() > b) a[i - 1].pop_back();
      i -= 2;
      continue;

    }
  }
  F(n) cout << a[i] << endl;


  return 0;
}
