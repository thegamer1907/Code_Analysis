
#include<bits/stdc++.h>
#define DEBUG(x) cout << #x << " = " << x << endl

const int NMAX = 1e6 + 5;
const int XMAX = 1e7 + 5;

using namespace std;

int n, x[NMAX], mx, m;
long long ic[XMAX];
vector<pair<int, long long> > prime;
vector<pair<int, long long> > pf;
bool marked[XMAX];

int main() {
  ios_base::sync_with_stdio(false);
  /* freopen("input.txt", "r", stdin); */
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x[i];
    ic[x[i]]++;
    mx = max(mx, x[i]);
  }

  for (int i = 2; i <= mx; i++) { 
    if (!marked[i]) {
      long long idc = 0;
      for (int j = i; j <= mx; j += i) {
        idc += ic[j];
        marked[j] = true;
      }
      prime.push_back({i, idc});
    }
  }
  
  long long acc = 0;
  for (auto p: prime) {
    int num; long long c;
    tie(num, c) = p;
    acc += c;
    pf.push_back({num, acc});
  }


  cin >> m;
  for (int i = 1; i <= m; i++) {
    int l, r;
    cin >> l >> r;
    if (pf.size() == 0) {
      cout << 0 << endl;
    } else {
      int f = lower_bound(pf.begin(), pf.end(), make_pair(l, -1ll)) - pf.begin();
      int t = upper_bound(pf.begin(), pf.end(), make_pair(r, LLONG_MAX)) - pf.begin() - 1;
      if (f != pf.size() && t >= f) {
        if (f == 0) {
          cout << pf[t].second << endl;
        } else {
          cout << pf[t].second - pf[f - 1].second << endl;
        }
      } else {
        cout << 0 << endl;
      }
    }
  }
}
