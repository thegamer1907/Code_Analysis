#include <bits/stdc++.h>
#define DEBUG(x) cout << #x << " = " << x << endl;
#define PR(A,n)  { cout << #A << " = "; for (int iter = 1, _n = (n); iter <= _n; iter++) \
                    cout << A[i] << ' '; cout << endl; }
#define PR0(A,n) { cout << #A << " = "; for (int iter = 0, _n = (n); iter < _n; iter++) \
                    cout << A[i] << ' '; cout << endl; } 
#define _1 first
#define _2 second

using namespace std;
string p, x[105];
int n;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
  cin >> p >> n;
  for (int i = 1; i <= n; i++) cin >> x[i];
  for (int i = 1; i <= n; i++) {
    if (x[i] == p) {
      cout << "YES";
      return 0;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      string a;
      a += x[i][1]; a += x[j][0];
      if (a == p) {
        cout << "YES";
        return 0;
      }
    }
  }

  cout << "NO";
}
