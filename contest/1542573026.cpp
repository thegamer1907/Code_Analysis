#include <bits/stdc++.h>
#define DEBUG(x) cout << #x << " = " << x << endl;
#define PR(A,n)  { cout << #A << " = "; for (int iter = 1, _n = (n); iter <= _n; iter++) \
                    cout << A[i] << ' '; cout << endl; }
#define PR0(A,n) { cout << #A << " = "; for (int iter = 0, _n = (n); iter < _n; iter++) \
                    cout << A[i] << ' '; cout << endl; } 
#define _1 first
#define _2 second

using namespace std;
const int NMAX = 1e5 + 5;

int n, k;
int a[16];
int x[NMAX][5];

int main(){
  ios_base::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= k; j++) {
      cin >> x[i][j];
    }
  }

  int p[] = {1, 2, 3, 4};
  do {
    fill(a, a + 16, 0);
    for (int i = 1; i <= n; i++) {
      int s = 0;
      for (int j = 0; j < 4; j++) {
        s = s * 2 + x[i][p[j]];
      }
      a[s]++;
    }

    if (a[0] > 0) {
      cout << "YES";
      return 0;
    }

    if (a[1] > 0) {
      for (int i = 2; i <= 14; i += 2) {
        if (a[i] > 0) {
          cout << "YES";
          return 0;
        }
      }
    }
    
    if (a[3] > 0) {
      if (a[4] > 0 || a[8] > 0 || a[12] > 0) {
        cout << "YES";
        return 0;
      }
    }
  } while (next_permutation(p, p + 4));


  cout << "NO";
}
